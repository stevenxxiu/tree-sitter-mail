/**
 * @file Email parser
 * @author Steven Xu <stevenxxiu@gmail.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const SPECIAL = /[()<>@,;:\\".\[\]]/
const CTL = /[\x00-\x1f\x7f]/

export default grammar({
  name: 'mail',

  rules: {
    source_file: ($) => repeat($._header),

    _header: ($) => choice(prec(1, $.header_email), prec(1, $.header_subject), $.header_other),
    header_email: ($) =>
      seq($.header_field_email, $.header_separator, repeat1(choice($.atom, $.quoted_string)), seq('<', $.email, '>')),
    header_other: ($) => seq($.header_field, $.header_separator, $.header_unstructured),
    header_subject: ($) => seq($.header_field_subject, $.header_separator, $.header_unstructured),

    header_separator: (_$) => ':',
    header_field: (_$) => new RegExp(`[^${CTL.source.slice(1, -1)}\\s:]+`),
    header_field_email: (_$) => choice('From', 'To', 'Cc', 'Bcc', 'Reply-To'),
    header_field_subject: (_$) => 'Subject',
    header_unstructured: (_$) => /.*/,

    atom: (_$) => new RegExp(`[^${SPECIAL.source.slice(1, -1)}\\s${CTL.source.slice(1, -1)}]+`),
    quoted_string: (_$) => /"[^"\\\n]+"/,
    email: (_$) =>
      // *RFC 5322* <https://stackoverflow.com/a/201378>
      new RegExp(
        [
          '(?:',
          ...[
            /[a-z0-9!#$%&'*+/=?^_`{|}~-]+(?:\.[a-z0-9!#$%&'*+/=?^_`{|}~-]+)*/.source,
            '|',
            /"(?:[\x01-\x08\x0b\x0c\x0e-\x1f\x21\x23-\x5b\x5d-\x7f]|\\[\x01-\x09\x0b\x0c\x0e-\x7f])*"/.source,
          ],
          ')',
          '@',
          '(?:',
          ...[
            /(?:[a-z0-9](?:[a-z0-9-]*[a-z0-9])?\.)+[a-z0-9](?:[a-z0-9-]*[a-z0-9])?/.source,
            '|',
            ...[
              /\[/.source,
              /(?:(?:(2(5[0-5]|[0-4][0-9])|1[0-9][0-9]|[1-9]?[0-9]))\.){3}/.source,
              ...[
                '(?:',
                /(2(5[0-5]|[0-4][0-9])|1[0-9][0-9]|[1-9]?[0-9])/.source,
                '|',
                ...[
                  /[a-z0-9-]*[a-z0-9]:/.source,
                  /(?:[\x01-\x08\x0b\x0c\x0e-\x1f\x21-\x5a\x53-\x7f]|\\[\x01-\x09\x0b\x0c\x0e-\x7f])+/.source,
                ],
                ')',
              ],
              /\]/.source,
            ],
          ],
          ')',
        ].join(''),
      ),
  },
})
