import Testing
import Foundation
import SwiftOpenXLSX

@Suite struct CxxExceptionTests {
    @Test func openingMissingDocumentThrows() throws {
        let missingPath = URL(fileURLWithPath: NSTemporaryDirectory())
            .appendingPathComponent("swift-OpenXLSX-missing-\(randomString(length: 12)).xlsx")

        var caughtError: Error?
        do {
            _ = try XLDocument(path: missingPath)
        } catch {
            caughtError = error
        }

        let error = try #require(caughtError)
        #expect(String(describing: error).isEmpty == false)
    }

    @Test func accessingCellWithInvalidRowThrows() throws {
        let path = resourceDir.appendingPathComponent("simple.xlsx")
        let document = try XLDocument(path: path)
        let sheet = try #require(document.workbook.worksheets.first)

        var caughtError: Error?
        do {
            _ = try sheet.cell(row: 0, column: 1)
        } catch {
            caughtError = error
        }

        let error = try #require(caughtError)
        #expect(String(describing: error).isEmpty == false)
    }
}
