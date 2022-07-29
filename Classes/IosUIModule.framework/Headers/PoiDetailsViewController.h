//
//  PoiDetailsViewController.h
//  IosUIModule
//
//  Created by Shubham on 26/05/20.
//  Copyright © 2020 Shubham. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "iCarousel.h"
#import <IndoorKit/IndoorKit.h>
NS_ASSUME_NONNULL_BEGIN
@protocol performBackDelegate <NSObject>

-(void)approveRejectRequest:(NSString*)tagIdentifier;
- (void)presentPoi:(IDPoi *)aPoi;
- (void)removeFavorites:(IDPoi *)aPoi;
-(void)navigate:(IDPoi *)apoi;
-(void)poiDetailsViewClosed;

@end
@interface PoiDetailsViewController : UIViewController
@property (strong, nonatomic) IBOutlet UIScrollView *scrollView;

@property(nonatomic,strong) id  <performBackDelegate>delegate;
@property (strong, nonatomic) IBOutlet UIButton *btnParking;

@property (strong, nonatomic) IBOutlet UILabel *lblTitle;
@property (strong, nonatomic) IBOutlet UILabel *lblLocationInfo;
@property (strong, nonatomic) IBOutlet iCarousel *carousel;
@property (strong, nonatomic) IBOutlet UIView *bgView;
@property (strong, nonatomic) IBOutlet UILabel *lblFavorite;
@property (strong, nonatomic) IBOutlet UILabel *lblDetails;
@property (strong, nonatomic) IBOutlet UILabel *lblDescription;
@property (nonatomic, assign) BOOL isFavorites;
@property (strong, nonatomic) IBOutlet UIButton *btnPhone;
@property (strong, nonatomic) IBOutlet UIButton *btnMail;
@property (strong, nonatomic) IBOutlet UIButton *btnMore;
@property (nonatomic, weak) IDPoi *currentPois;
@property (strong, nonatomic) IBOutlet UILabel *lblKeyword;

- (void)updateWithPoi:(IDPoi *)aPoi ;
@end

NS_ASSUME_NONNULL_END
