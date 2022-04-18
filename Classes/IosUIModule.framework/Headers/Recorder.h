//
//  Recorder.h
//  HalfNavigationCalibration
//
//  Created by Spreo LLC on 7/27/15.
//  Copyright (c) 2015 Spreo_MacMini. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Recorder : NSObject

+ (BOOL)createMediaDirectory;
+ (NSString *)mediaDirectory;
+ (void)writeMediaFileWithUrl:(NSData*)mediaData forFile:(NSString*)fileName;
+ (NSURL*)PlayMediaFileWithUrl:(NSString*)fileUrl;
+ (BOOL)doesExistFileForPath:(NSString*)mediaUrl;

@end
