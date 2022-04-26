#### ================================
### DATE: 26 April, 2022
### Framework VERSION: 1.0.6
### ================================ #

# Installation

## Cocoapods
[CocoaPods](https://cocoapods.org) is a dependency manager for Cocoa projects. For usage and installation instructions, visit their website.To integrate SpreoUIModule into your Xcode project using CocoaPods, specify it in your Podfile:

```ruby
pod 'SpreoUIModule'
```

# Usage

1. Import `IosUIModule`

```swift
import IosUIModule
```

2. Get the viewcontroller

```swift
let vc = IosUIModuleKit.initWithApiKey("YOUR_SPREO_API_KEY")
```

3. Present or push viewcontroller

```swift
navigationController?.pushViewController(vc, animated: true)
present(vc, animated: true)
```



# Build requirements:
- Xcode Versions: Xcode 11.x
- iOS 11.0 SDK or later

# Licence

SpreoUIModule is available under the MIT license. See the LICENSE file for more info

Copyright (C) 2022 Spreo LLC. All rights reserved.

