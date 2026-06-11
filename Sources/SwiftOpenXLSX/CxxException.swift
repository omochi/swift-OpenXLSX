import CxxSwiftXLSX

struct CxxException: Error & CustomStringConvertible, @unchecked Sendable {
    init(_ error: std.exception_ptr) {
        self.error = error
    }

    var error: std.exception_ptr

    var description: String {
        if let message = Optional(fromCxx: SXL_std_exception_ptr_what(error)) {
            return String(message)
        }
        return "Unknown C++ exception"
    }
}

func withCxxException<R>(_ body: (inout std.exception_ptr) -> R) throws -> R {
    var error = std.exception_ptr()

    let result = body(&error)

    if SXL_std_exception_ptr_castToBool(error) {
        throw CxxException(error)
    }

    return result
}

func withCxxOptionalOrException<R>(_ body: (inout std.exception_ptr) -> some CxxOptional<R>) throws -> R {
    let result = try withCxxException(body)
    return Optional(fromCxx: result)!
}
