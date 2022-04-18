//
//  ProjectsManager.h
//  Spreo
//
//  Created by Hasan Sa on 5/5/15.
//  Copyright (c) 2015 Spreo LLC. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum : NSUInteger {
    kUnknown = 0,
    kSingle,
    kMulti
} Mode;

@class Project;

@protocol ProjectsManagerDelegate <NSObject>

- (void)didDownloadMultiProjectsDataWithMode:(Mode)aMode;
- (void)didFailDownloadData;

@end

@interface ProjectsManager : NSObject

@property (nonatomic, assign) id <ProjectsManagerDelegate> delegate;
@property (nonatomic, readonly) NSArray* allProjects;
@property (nonatomic, readonly) BOOL isGuest;

+ (instancetype)sharedManager;

- (void)checkUserDataWithUsername:(NSString*)aUser
                      andPassword:(NSString*)aPassword;
- (void)downloadMultimediaFromPois;
- (void)setGuestMode:(BOOL)aMode;

@end
