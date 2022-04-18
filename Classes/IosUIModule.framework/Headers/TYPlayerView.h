//
//  TYPlayerView.h
//  Spreo
//
//  Created by Yury Tulup on 3/9/17.
//  Copyright © 2017 Spreo LLC. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>
#import <AVKit/AVKit.h>

@interface TYPlayerView : UIView {
    AVPlayerViewController *playerViewController;
}

+ (TYPlayerView*)createPlayerViewWithUrl:(NSString*)videoUrl;
@property (nonatomic, strong) NSString *videoURL;

- (void)addToView:(UIView*)parentView;
- (void)setPlayer;
- (void)pauseVideo;

@end
