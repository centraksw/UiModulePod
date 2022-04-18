//
//  Constants.h
//  Spreo
//
//  Created by Yury Tulup on 1/23/17.
//  Copyright © 2017 Spreo LLC. All rights reserved.
//

#import "UIColor + HexToRGB.h"

#ifndef Constants_h
#define Constants_h

// Colors
#define RGBCOLOR(r,g,b) [UIColor colorWithRed:((float)r)/255.0 green:((float)g)/255.0 blue:((float)b)/255.0 alpha:1]
#define RGBHColor(hexValue) [UIColor colorWithRed:((float)((hexValue & 0xFF0000) >> 16)) / 255.0 green:((float)((hexValue & 0xFF00) >> 8)) / 255.0 blue:((float)(hexValue & 0xFF)) / 255.0 alpha:1.0]
#define RGBCOLORWITHALPHA(r,g,b,a) [UIColor colorWithRed:((float)r)/255.0 green:((float)g)/255.0 blue:((float)b)/255.0 alpha:((float)a)]
#define ICONS_MAP_DIRECTORY      @"Images/MapIcons"

// FONTS

#define avenirRomanFont(Size)  [UIFont fontWithName:@"Avenir-Roman" size:Size]
#define avenirBlackFont(Size)  [UIFont fontWithName:@"Avenir-Black" size:Size]
#define avenirHeavyFont(Size)  [UIFont fontWithName:@"Avenir-Heavy" size:Size]

#define g(Size)  [UIFont fontWithName:@"Avenir-Roman" size:Size]

// COLOR NAVIGATION BAR

#define colorNB @"#2c90d4"

#endif /* Constants_h */
