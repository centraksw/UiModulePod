//
//  TYLevelPicker.h
//  Spreo
//
//  Created by Yury Tulup on 3/16/17.
//  Copyright © 2017 Spreo LLC. All rights reserved.
//

#import <UIKit/UIKit.h>

@class TYLevelPicker;
@class IDDualMapViewController;
@class IDLocation;

@protocol TYLevelPickerDelegate <NSObject>

- (void)levelPicker:(TYLevelPicker*)picker didSelectFloor:(NSInteger)floorId;

@end

@interface TYLevelPicker : UIView <UITableViewDelegate, UITableViewDataSource> {
    IDDualMapViewController *currentMapVC;
    UIView *currentParentView;
    
    UIView *containerView;
    UITableView *contentTableView;
    
    NSMutableArray *allFloorsArray;
    NSMutableArray *currentFloorsArray;

    BOOL isOpen;
    
    BOOL isNavigation;
    NSInteger _currentFloorId;
    NSInteger _startFloorId;
    NSInteger _destinationFloorId;
    
    UIImageView *triangleUp;
    UIImageView *triangleDown;
}

+ (TYLevelPicker*)createLevelPickerView;

@property (nonatomic, weak) id<TYLevelPickerDelegate> delegate;

- (void)addToView:(UIView *)parentView yCoord:(CGFloat)yCoord;
- (void)setUpPickerViewForMapVC:(IDDualMapViewController*)mapVC;

- (void)updateWithFloorId:(NSInteger)floorId force:(BOOL)force;
- (void)updateViewForNavigationTo:(IDLocation *)destination from:(IDLocation *)from;
- (void)updateView;
- (void)stopNavigation;

@end
