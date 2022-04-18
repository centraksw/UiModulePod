//
//  RequestManager.h
//  Spreo
//
//  Created by Yury Tulup on 20.06.17.
//  Copyright © 2017 Spreo LLC. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void (^completionModelBlock)(id object);
typedef void (^failureModelBlock)(NSError *error);

@interface RequesHelper : NSObject

+ (void)sendRequestWithPath:(NSString*)path completion:(completionModelBlock)success failure:(failureModelBlock)failure;
+ (void)loadImageWithUrl:(NSString*)urlString completion:(completionModelBlock)success failure:(failureModelBlock)failure;
+ (NSString*)getURLStringFromJSONDictionary:(NSDictionary*)dictionary;

@end
