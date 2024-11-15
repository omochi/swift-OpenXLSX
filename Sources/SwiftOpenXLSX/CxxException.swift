import CxxSwiftXLSX

struct CxxException: Error & CustomStringConvertible {
    init(what: String) {
        self.what = what
    }

    var what: String

    var description: String { what }
}

func withCxxException<R>(_ body: (inout string_optional) -> R) throws -> R {
    var error = string_optional()

    let result = body(&error)

    if let message = Optional(fromCxx: error) {
        throw CxxException(what: String(message))
    }

    return result
}

func withCxxOptionalOrException<R>(_ body: (inout string_optional) -> some CxxOptional<R>) throws -> R {
    let result = try withCxxException(body)
    return Optional(fromCxx: result)!
}
