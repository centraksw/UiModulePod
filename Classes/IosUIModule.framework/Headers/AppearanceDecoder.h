//
//  AppearanceDecoder.h
//  
//
//  Created by Hasan_Sawaed on 1/5/14.
//  Copyright (c) 2014 Hasan Sa. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@interface AppearanceDecoder : NSObject

@property (nonatomic , strong) UIColor * mainColor;
@property (nonatomic , strong) UIColor * blueColor;
@property (nonatomic , strong) UIColor * secondColor;
@property (nonatomic , strong) UIColor * navigationTextColor;
@property (nonatomic , strong) UIColor * highlightColor;
@property (nonatomic , strong) UIColor * shadowColor;
@property (nonatomic , strong) UIColor * highlightShadowColor;
@property (nonatomic , strong) UIColor * navigationTextShadowColor;
@property (nonatomic , strong) UIColor * backgroundColor;
@property (nonatomic , strong) UIColor * baseTintColor;
@property (nonatomic , strong) UIColor * tabbarTintColor;
@property (nonatomic , strong) UIColor * selectedTabbarItemTintColor;
@property (nonatomic , strong) UIColor * segmentedTintColor;
//
@property (nonatomic , strong) NSString * navigationFont;
@property (nonatomic , strong) NSString * barButtonFont;
@property (nonatomic , strong) NSString * mainFont;
//
@property (nonatomic , strong) NSString * navigationBackground;
@property (nonatomic , strong) NSString * barButtonBackground;
@property (nonatomic , strong) NSString * backBackground;
@property (nonatomic , strong) NSString * toolbarBackground;
@property (nonatomic , strong) NSString * tableBackground;
@property (nonatomic , strong) NSString * tableSectionHeaderBackground;
@property (nonatomic , strong) NSString * tableFooterBackground;
@property (nonatomic , strong) NSString * viewBackground;
@property (nonatomic , strong) NSString * buttonBackground;
@property (nonatomic , strong) NSString * tabBarBackground;
@property (nonatomic , strong) NSString * tabBarSelectionIndicator;

@property (nonatomic , strong) UIColor * navigationBarColor;

+ (instancetype)appearanceData;
@end
