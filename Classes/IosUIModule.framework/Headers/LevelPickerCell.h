//
//  LevelPickerCell.h
//  Spreo
//
//  Created by Yury Tulup on 3/17/17.
//  Copyright © 2017 Spreo LLC. All rights reserved.
//

#import "BaseTableCell.h"
#import "FloorModel.h"

@interface LevelPickerCell : BaseTableCell {
    IBOutlet UIView *container;
    IBOutlet UILabel *floorLabel;
    __weak IBOutlet UIImageView *navImageView;
    IBOutlet UIView *leftSeparator;
    IBOutlet UIView *rightSeparator;
    
}

@property (nonatomic, assign) BOOL isFirstCell;

- (void)updateWithFloorModel:(FloorModel*)model;

@end
