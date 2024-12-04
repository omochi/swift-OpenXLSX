// swift-tools-version: 6.0
import PackageDescription

let package = Package(
    name: "swift-OpenXLSX",
    products: [
        .library(name: "SwiftOpenXLSX", targets: ["SwiftOpenXLSX"]),
        .executable(name: "foo", targets: ["foo"])
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
            swiftSettings: [
                .interoperabilityMode(.Cxx)
            ]
        ),
    ],
    cxxLanguageStandard: .cxx17
)
