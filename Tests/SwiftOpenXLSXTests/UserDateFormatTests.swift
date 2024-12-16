import Testing
import Foundation
import SwiftOpenXLSX

@Suite struct UserDateFormatTests {
    @Test func readNumberFormat() throws {
        let doc = try XLDocument(
            path: resourceDir.appendingPathComponent("userDateFormat.xlsx")
        )

        let sheet = try #require(try doc.workbook.worksheets.first)
        let cell = try sheet.cell(row: 1, column: 1)

        let cellFormat = try #require(doc.styles.cellFormats[safe: cell.cellFormat])
        print(cellFormat.numberFormatID)

        let numberFormat = try #require(doc.styles.numberFormats.first { $0.numberFormatID == cellFormat.numberFormatID })

        let sp = #"\ "#
        let lp = #"\("#
        let rp = #"\)"#
        let expected = """
            yyyy/m/d\(sp)\(lp)aaa\(rp)
            """
        #expect(numberFormat.formatCode == expected)
    }
}
