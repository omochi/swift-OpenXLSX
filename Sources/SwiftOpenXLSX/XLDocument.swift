public import Foundation
import CxxSwiftXLSX

public final class XLDocument {
    public struct InitOptions {
        public init(suppressesWarnings: Bool = true) {
            self.suppressesWarnings = suppressesWarnings
        }

        public var suppressesWarnings: Bool
    }

    public init(options: InitOptions = .init()) {
        self.document = XLDocument_new()

        if options.suppressesWarnings {
            suppressWarnings()
        }
    }

    public convenience init(path: URL, options: InitOptions = .init()) throws {
        self.init(options: options)
        try self.open(path: path)
    }

    private let document: UnsafeMutablePointer<OpenXLSX.XLDocument>

    deinit {
        XLDocument_delete(document)
    }

    public func suppressWarnings() {
        XLDocument_suppressWarnings(&document.pointee)
    }

    public func open(path: URL) throws {
        try withCxxException { (e) in
            XLDocument_open(&document.pointee, std.string(path.path), &e)
        }
    }

    public func create(path: URL, forceOverwrite: Bool = true) throws {
        try withCxxException { (e) in
            XLDocument_create(&document.pointee, std.string(path.path), forceOverwrite, &e)
        }
    }

    public func save() throws {
        try withCxxException { (e) in
            XLDocument_save(&document.pointee, &e)
        }
    }

    public func saveAs(path: URL, forceOverwrite: Bool = true) throws {
        try withCxxException { (e) in
            XLDocument_saveAs(&document.pointee, std.string(path.path), forceOverwrite, &e)
        }
    }

    public var workbook: XLWorkbook {
        get throws {
            guard isOpen else {
                throw MessageError("call open or create before accessing workbook")
            }

            return XLWorkbook(document: self, workbook: XLDocument_workbook(document.pointee))
        }
    }

    public var isOpen: Bool {
        XLDocument_isOpen(document.pointee)
    }
}
