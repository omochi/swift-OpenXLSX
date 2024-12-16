import Testing
import Foundation
import SwiftOpenXLSX

let moduleName = "SwiftOpenXLSXTests"
let resourceDir = URL(fileURLWithPath: "Tests/\(moduleName)/Resources")

@Suite struct BasicTests {
    @Test func readSimple() throws {
        let path = resourceDir.appendingPathComponent("simple.xlsx")
        let document = try XLDocument(path: path)

        let sheets = try document.workbook.worksheets
        #expect(sheets.count == 1)
        let sheet = try #require(sheets[safe: 0])
        #expect(sheet.name == "シート1")

        #expect(try sheet.cell(address: "A1").value.description == "A")
        #expect(try sheet.cell(address: "B1").value.description == "B")
        #expect(try sheet.cell(address: "C1").value.description == "C")
        #expect(try sheet.cell(address: "A2").value.description == "1")
        #expect(try sheet.cell(address: "B2").value.description == "2")
        #expect(try sheet.cell(address: "C2").value.description == "3")

        #expect(try sheet.cell(row: 1, column: 1).value.description == "A")
        #expect(try sheet.cell(row: 1, column: 2).value.description == "B")
        #expect(try sheet.cell(row: 1, column: 3).value.description == "C")
        #expect(try sheet.cell(row: 2, column: 1).value.description == "1")
        #expect(try sheet.cell(row: 2, column: 2).value.description == "2")
        #expect(try sheet.cell(row: 2, column: 3).value.description == "3")

        #expect(try sheet.cell(row: 1, column: 1).value.type == .string)
        #expect(try sheet.cell(row: 2, column: 1).value.type == .integer)

        #expect(try sheet.cell(row: 1, column: 1).formula.description == "")

        #expect(sheet.rowCount == 2)
        #expect(sheet.columnCount == 3)
        let row0 = try #require(try sheet.row(1))
        #expect(row0.cellCount == 3)
        let row1 = try #require(try sheet.row(2))
        #expect(row1.cellCount == 3)
    }

    @Test func readFormula() throws {
        let path = resourceDir.appendingPathComponent("formula.xlsx")
        let document = try XLDocument(path: path)

        let sheet = try #require(document.workbook.worksheets.first)
        #expect(try sheet.cell(row: 1, column: 1).value.description == "1")
        #expect(try sheet.cell(row: 1, column: 2).value.description == "2")
        #expect(try sheet.cell(row: 1, column: 3).value.description == "3")

        #expect(try sheet.cell(row: 1, column: 3).formula.description == "A1+B1")
    }

    @Test func writeAndRead() throws {
        let temp = try createTemporaryDirectory(prefix: "\(moduleName)/BasicTests")
        defer {
            try? FileManager.default.removeItem(at: temp)
        }

        let path = temp.appendingPathComponent("test.xlsx")

        func write() throws {
            let document = XLDocument()
            try document.create(path: path)
            let sheet1 = try document.workbook.worksheet(name: "Sheet1")
            try sheet1.cell(row: 1, column: 1).value = .string("hello")
            let sheet2 = try document.workbook.addWorksheet(name: "Sheet2")
            try sheet2.cell(row: 1, column: 1).value = .string("world")
            try document.save()
        }

        func read() throws {
            let document = try XLDocument(path: path)
            #expect(try document.workbook.sheetNames == ["Sheet1", "Sheet2"])
            let sheet1 = try document.workbook.worksheet(name: "Sheet1")
            #expect(try sheet1.cell(row: 1, column: 1).value.description == "hello")
            let sheet2 = try document.workbook.worksheet(name: "Sheet2")
            #expect(try sheet2.cell(row: 1, column: 1).value.description == "world")
        }

        try write()
        try read()
    }

    @Test func testReadExtList() throws {
        let path = resourceDir.appendingPathComponent("simple.xlsx")
        let document = try XLDocument(path: path)
        let sheet = try #require(document.workbook.worksheets[safe: 0])

        let extList = sheet.extList()
        #expect(extList == "<extLst />\n")
    }
}
