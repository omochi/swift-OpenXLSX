import CxxSwiftXLSX

public struct XLNumberFormats: BidirectionalCollection {
    init(
        document: XLDocument,
        formats: UnsafeMutablePointer<OpenXLSX.XLNumberFormats>
    ) {
        self.document = document
        self.formats = formats
    }
    
    var document: XLDocument
    var formats: UnsafeMutablePointer<OpenXLSX.XLNumberFormats>

    public var count: Int {
        XLNumberFormats_count(formats)
    }

    public subscript(index: Int) -> XLNumberFormat {
        XLNumberFormat(
            document: document,
            format: XLNumberFormats_numberFormatByIndex(formats, index)
        )
    }

    public func create() -> XLNumberFormat {
        let index = XLNumberFormats_create(formats);
        return self[index]
    }

    public var startIndex: Int { 0 }
    public var endIndex: Int { count }
    public func index(after i: Int) -> Int { i + 1 }
    public func index(before i: Int) -> Int { i - 1 }
}
