import XCTest
import SwiftTreeSitter
import TreeSitterMail

final class TreeSitterMailTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_mail())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Mail grammar")
    }
}
