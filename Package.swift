// swift-tools-version: 6.3
import PackageDescription

let package = Package(
    name: "swift-OpenXLSX",
    platforms: [
        .macOS(.v10_15)
    ],
    products: [
        .library(name: "SwiftOpenXLSX", targets: ["SwiftOpenXLSX"])
    ],
    dependencies: [
        .package(url: "https://github.com/omochi/OpenXLSX.git", branch: "swiftpm")
//        .package(path: "/Users/omochi/github/troldal/OpenXLSX")
    ],
    targets: [
        .target(
            name: "CxxSwiftOpenXLSX",
            dependencies: [
                .product(name: "CxxOpenXLSX", package: "OpenXLSX")
            ]
        ),
        .target(
            name: "SwiftOpenXLSX",
            dependencies: ["CxxSwiftOpenXLSX"],
            swiftSettings: [
                .interoperabilityMode(.Cxx)
            ]
        ),
        .testTarget(
            name: "SwiftOpenXLSXTests",
            dependencies: ["SwiftOpenXLSX"],
            exclude: ["Resources"],
            swiftSettings: [
                .interoperabilityMode(.Cxx)
            ]
        ),
    ],
    cxxLanguageStandard: .cxx17
)
