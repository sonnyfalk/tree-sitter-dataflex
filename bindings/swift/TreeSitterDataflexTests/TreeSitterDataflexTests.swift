import XCTest
import SwiftTreeSitter
import TreeSitterDataflex

final class TreeSitterDataflexTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_dataflex())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Dataflex grammar")
    }
}
