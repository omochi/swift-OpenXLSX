import CxxSwiftXLSX

public struct XLCellFormats {
    init(
        document: XLDocument,
        formats: UnsafeMutablePointer<OpenXLSX.XLCellFormats>
    ) {
        self.document = document
        self.formats = formats
    }
    
    var document: XLDocument
    var formats: UnsafeMutablePointer<OpenXLSX.XLCellFormats>

    public var count: Int {
        XLCellFormats_count(formats.pointee)
    }

    public subscript(index: Int) -> XLCellFormat {
        return XLCellFormat(
            document: document,
            format: XLCellFormats_cellFormatByIndex(formats.pointee, index)
        )
    }
}
