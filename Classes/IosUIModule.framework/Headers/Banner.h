//
//  BannerObject.h
//  Spreo
//
//  Created by Hasan Sa on 12/17/14.
//  Copyright (c) 2014 Spreo LLC. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Banner : NSObject

@property (nonatomic, strong) NSString* identifier;
@property (nonatomic, strong) NSString* url;
@property (nonatomic, strong) NSString* md5;
@property (nonatomic, strong) NSString* uri;
@property (nonatomic, strong) NSArray* zones;

- (id)initBannerWithDictionary:(NSDictionary*)aDictionary;

@end
