import CxxSwiftXLSX

extension std.exception_ptr {
    var boolValue: Bool {
        SXL_std_exception_ptr_boolValue(self)
    }

    var typeName: String? {
        Optional(fromCxx: SXL_std_exception_ptr_typeName(self)).map(\.description)
    }

    var what: String? {
        Optional(fromCxx: SXL_std_exception_ptr_what(self)).map(\.description)
    }
}

struct CxxException: Error & CustomStringConvertible, @unchecked Sendable {
    init(_ error: std.exception_ptr) {
        self.error = error
    }

    var error: std.exception_ptr

    var description: String {
        var string: String = error.typeName ?? "Unknown C++ Exception"

        if let what = error.what {
            string += ": \(what)"
        }

        return string
    }
}

func withCxxException<R>(_ body: (inout std.exception_ptr) -> R) throws -> R {
    var error = std.exception_ptr()

    let result = body(&error)

    if error.boolValue {
        throw CxxException(error)
    }

    return result
}

func withCxxOptionalOrException<R>(_ body: (inout std.exception_ptr) -> some CxxOptional<R>) throws -> R {
    let result = try withCxxException(body)
    return Optional(fromCxx: result)!
}
