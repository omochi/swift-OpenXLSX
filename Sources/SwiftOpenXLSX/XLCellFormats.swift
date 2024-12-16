import CxxSwiftXLSX

public struct XLCellFormats: BidirectionalCollection {
    init(
        document: XLDocument,
        formats: OpenXLSX.XLCellFormats
    ) {
        self.document = document
        self.formats = formats
    }
    
    var document: XLDocument
    var formats: OpenXLSX.XLCellFormats

    public var count: Int {
        XLCellFormats_count(formats)
    }

    public subscript(index: Int) -> XLCellFormat {
        return XLCellFormat(
            document: document,
            format: XLCellFormats_cellFormatByIndex(formats, index)
        )
    }

    public func create() -> XLCellFormat {
        let index = Int(XLCellFormats_create(formats))
        return self[index]
    }

    public var startIndex: Int { 0 }
    public var endIndex: Int { count }
    public func index(after i: Int) -> Int { i + 1 }
    public func index(before i: Int) -> Int { i - 1 }
}
