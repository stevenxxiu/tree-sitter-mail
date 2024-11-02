/**
 * @file Email parser
 * @author Steven Xu <stevenxxiu@gmail.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

export default grammar({
  name: 'mail',

  rules: {
    // TODO: add the actual grammar rules
    source_file: ($) => 'hello',
  },
})
