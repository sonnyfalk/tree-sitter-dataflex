// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterDataflex",
    products: [
        .library(name: "TreeSitterDataflex", targets: ["TreeSitterDataflex"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterDataflex",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
                // NOTE: if your language has an external scanner, add it here.
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterDataflexTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterDataflex",
            ],
            path: "bindings/swift/TreeSitterDataflexTests"
        )
    ],
    cLanguageStandard: .c11
)
