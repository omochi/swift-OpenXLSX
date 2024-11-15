import Foundation

extension Collection {
    subscript(safe index: Index) -> Element? {
        guard startIndex <= index, index < endIndex else { return nil }
        return self[index]
    }
}

func randomString(
    length: Int,
    chars: [Character] = Array("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789")
) -> String {
    String((0..<length).map { (_) in chars.randomElement()! })
}

func createTemporaryDirectory(prefix: String) throws -> URL {
    let dir = URL(fileURLWithPath: NSTemporaryDirectory())
        .appendingPathComponent(prefix + "_" + randomString(length: 12))
    try FileManager.default.createDirectory(at: dir, withIntermediateDirectories: true)
    return dir
}
