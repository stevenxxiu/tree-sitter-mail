// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterMail",
    products: [
        .library(name: "TreeSitterMail", targets: ["TreeSitterMail"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterMail",
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
            name: "TreeSitterMailTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterMail",
            ],
            path: "bindings/swift/TreeSitterMailTests"
        )
    ],
    cLanguageStandard: .c11
)
