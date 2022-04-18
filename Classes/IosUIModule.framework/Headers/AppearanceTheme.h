//
//  AppearanceManager.h
//  
//
//  Created by Hasan_Sawaed on 1/5/14.
//  Copyright (c) 2014 Hasan Sa. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
typedef enum  {
    ThemeTabSecure,
    ThemeTabDocs,
    ThemeTabBugs,
    ThemeTabBook,
    ThemeTabOptions
} ThemeTab;

@protocol AppearanceThemeDelegate <NSObject>

- (UIStatusBarStyle)statusBarStyle;

- (UIColor *)mainColor;
- (UIColor *)secondColor;
- (UIColor *)blueColor;
- (UIColor *)navigationBarColor;
- (UIColor *)navigationTextColor;
- (UIColor *)highlightColor;
- (UIColor *)shadowColor;
- (UIColor *)highlightShadowColor;
- (UIColor *)navigationTextShadowColor;
- (UIColor *)backgroundColor;
- (UIColor *)baseTintColor;
- (UIColor *)tabbarTintColor;
- (UIColor *)selectedTabbarItemTintColor;
- (UIColor *)segmentedTintColor;
//
- (UIFont *)navigationFont;
- (UIFont *)barButtonFont;
- (UIFont *)mainFont;
//
- (CGSize)shadowOffset;
- (UIImage *)navigationBackgroundForBarMetrics:(UIBarMetrics)metrics;
- (UIImage *)barButtonBackgroundForState:(UIControlState)state style:(UIBarButtonItemStyle)style barMetrics:(UIBarMetrics)barMetrics;
- (UIImage *)backBackgroundForState:(UIControlState)state barMetrics:(UIBarMetrics)barMetrics;
- (UIImage *)toolbarBackgroundForBarMetrics:(UIBarMetrics)metrics;
- (UIImage *)tableBackground;
- (UIImage *)tableSectionHeaderBackground;
- (UIImage *)tableFooterBackground;
- (UIImage *)viewBackground;
- (UIImage *)buttonBackgroundForState:(UIControlState)state;
- (UIImage *)tabBarBackground;
- (UIImage *)tabBarSelectionIndicator;
// One of these must return a non-nil image for each tab:
- (UIImage *)imageForTab:(ThemeTab)tab;
- (UIImage *)finishedImageForTab:(ThemeTab)tab selected:(BOOL)selected;


@end
@interface AppearanceTheme : NSObject

+ (id <AppearanceThemeDelegate>)sharedTheme;

+ (void)customizeAppAppearance;
+ (void)customizeView:(UIView *)view;
+ (void)customizeTableView:(UITableView *)tableView;
+ (void)customizeTabBarItem:(UITabBarItem *)item;
+ (void)customizeNavigationBar:(UINavigationBar *)navigationBar;
+ (void)customizeMainLabel:(UILabel *)label;

@end
