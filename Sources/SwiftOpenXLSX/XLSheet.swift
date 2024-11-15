import CxxSwiftXLSX

public enum XLSheet {
    case worksheet(XLWorksheet)
    case chartsheet(XLChartsheet)

    public var worksheet: XLWorksheet? {
        switch self {
        case .worksheet(let x): return x
        default: return nil
        }
    }

    init?(document: XLDocument, sheet: OpenXLSX.XLSheet) {
        if XLSheet_isWorksheet(sheet) {
            self = .worksheet(
                XLWorksheet(
                    document: document,
                    worksheet: XLSheet_getWorksheet(sheet)
                )
            )
            return
        }

        if XLSheet_isChartsheet(sheet) {
            self = .chartsheet(
                XLChartsheet(
                    document: document,
                    chartsheet: XLSheet_getChartsheet(sheet)
                )
            )
            return
        }

        return nil
    }
}
