import CxxSwiftXLSX

public struct XLChartsheet {
    init(document: XLDocument, chartsheet: OpenXLSX.XLChartsheet) {
        self.document = document
        self.chartsheet = chartsheet
    }

    var document: XLDocument
    var chartsheet: OpenXLSX.XLChartsheet
}
