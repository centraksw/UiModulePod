//
//  BuildingViewController.h
//  IosUIModule
//
//  Created by Shubham on 02/06/20.
//  Copyright © 2020 Shubham. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <IndoorKit/IndoorKit.h>
NS_ASSUME_NONNULL_BEGIN
@protocol buildingLocation <NSObject>

- (void)location:(NSString *)aPoi;

@end

@interface BuildingViewController : UIViewController
@property(nonatomic,strong) id  <buildingLocation>delegate;
@property (strong, nonatomic) IBOutlet UILabel *lblTitle;
@end

NS_ASSUME_NONNULL_END
