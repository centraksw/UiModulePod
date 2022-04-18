//
//  ProjectObject.h
//  SpreoFloorFinder
//
//  Created by Spreo_MacMini on 4/20/15.
//  Copyright (c) 2015 Spreo_MacMini. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Project : NSObject 

@property (nonatomic, strong) NSString* project_id;
@property (nonatomic, strong) NSString* name;
@property (nonatomic, strong) NSString* key;

- (id)initWithDictionary:(NSDictionary*)aDictionary;

@end
