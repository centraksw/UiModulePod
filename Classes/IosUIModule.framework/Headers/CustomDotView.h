//
//  CustomDotView.h
//  Spreo
//
//  Created by Dmitry Pliushchai on 14/05/2017.
//  Copyright © 2017 Spreo LLC. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CustomDotView : UIView

/**
 *  A method call let view know which state appearance it should take. Active meaning it's current page. Inactive not the current page.
 *
 *  @param active BOOL to tell if view is active or not
 */
- (void)changeActivityState:(BOOL)active;

@end
