//
//  JsonDataManager.h
//  Spreo
//
//  Created by Hasan Sa on 5/5/15.
//  Copyright (c) 2015 Spreo LLC. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol JsonDataManagerDelegate <NSObject>

- (void)didSuccessDownloading:(BOOL)mode;
@optional
- (void)didFailDownloadData;

@end

@interface JsonDataManager : NSObject

@property (nonatomic, assign) id<JsonDataManagerDelegate> delegate;
@property (nonatomic, strong, readonly) NSArray* bannersArray;
@property (nonatomic, strong, readonly) NSDictionary* homeDict;

@property (nonatomic,assign) BOOL isNeedReloadJson;

+ (instancetype)sharedManager;
- (void)loadJsonForNewProject;
- (id)getRandomBannerForGeofenceId:(NSString*)aGeofenceId;
- (id)getBannerWithId:(NSString*)anId;
- (id)getBannerForZone:(NSString*)aZone;

@end
