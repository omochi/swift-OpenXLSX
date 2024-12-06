import CxxSwiftXLSX

public struct XLCellFormats: BidirectionalCollection {
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

    public func create() -> Int {
        return Int(XLCellFormats_create(&formats.pointee))
    }

    public var startIndex: Int { 0 }
    public var endIndex: Int { count }
    public func index(after i: Int) -> Int { i + 1 }
    public func index(before i: Int) -> Int { i - 1 }
}
