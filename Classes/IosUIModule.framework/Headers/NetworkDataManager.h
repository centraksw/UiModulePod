//
//  DataManager.h
//  Spreo
//
//  Created by Hasan Sa on 7/1/14.
//  Copyright (c) 2014 Spreo LLC. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol NetworkDataManagerDelegate <NSObject>

@optional
- (void)didDownloadMultiProjectKeysJsonData:(NSDictionary *)aDataDict;
- (void)didDownloadMediaData:(NSData*)aData toFileName:(NSString *)aFileName;
- (void)didDownlaodHomeJsonData:(NSDictionary *)aDataDict;
- (void)didDownlaodBannersData:(NSDictionary *)aDataDict;
- (void)didFailDownloadData;

@end

@interface NetworkDataManager : NSObject

@property (nonatomic, assign) id<NetworkDataManagerDelegate>delegate;

+ (instancetype)sharedManager;
//
- (void)downloadJsonData;
- (void)startDownloadMultiProjectsDataWithName:(NSString*)name andPassword:(NSString*)password; 
- (void)startDownloadMultimediaDataWithUrls:(NSArray*)urls;

// POI Booking API

- (void)occupyPoi:(NSString *)poiId
        atProject:(NSString *)projectId
completionHandler:(void (^)(BOOL success, NSError *error))completionHandler;

- (void)unoccupyPoi:(NSString *)poiId
          atProject:(NSString *)projectId
  completionHandler:(void (^)(BOOL success, NSError *error))completionHandler;

- (void)getOccupancyAtProject:(NSString *)projectId
            completionHandler:(void (^)(NSDictionary *occupancy, NSError *error))completionHandler;

- (void)getOccupancyAtProject:(NSString *)projectId
                    forPoiIds:(NSArray *)poiIds
            completionHandler:(void (^)(NSDictionary *occupancy, NSError *error))completionHandler;

@end
