import CxxSwiftXLSX

public struct XLStyles {
    init(
        document: XLDocument,
        styles: UnsafeMutablePointer<OpenXLSX.XLStyles>
    ) {
        self.document = document
        self.styles = styles
    }

    var document: XLDocument
    var styles: UnsafeMutablePointer<OpenXLSX.XLStyles>

    public var numberFormats: XLNumberFormats {
        return XLNumberFormats(
            document: document,
            formats: XLStyles_numberFormats(styles.pointee)
        )
    }

    public var cellFormats: XLCellFormats {
        return XLCellFormats(
            document: document,
            formats: XLStyles_cellFormats(styles.pointee)
        )
    }
}
