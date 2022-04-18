//
//  CustomUI.h
//  Spreo
//
//  Created by Spreo LLC on 1/26/15.
//  Copyright (c) 2015 Spreo LLC. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@interface CustomUI : NSObject

+ (instancetype)sharedUI;
- (UILabel*)setTitleViewWithText:(NSString*)aText;

@end

