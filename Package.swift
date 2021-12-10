// swift-tools-version:5.3
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription


let package = Package(
    name: "OTPublishersHeadlessSDK",
    platforms: [SupportedPlatform.iOS(SupportedPlatform.IOSVersion.v10)],
    products: [
        .library(
            name: "OTPublishersHeadlessSDK",
            targets: [
                "OTPublishersHeadlessSDK"
            ]
        ),
    ],
    dependencies: [
    ],
    targets: [
        .binaryTarget(
            name: "OTPublishersHeadlessSDK",
            path: "Sources/OTPublishersHeadlessSDK.xcframework"
        ),
    ]
)
