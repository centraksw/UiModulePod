//
//  Global.h
//  
//
//  Created by Hasan Sa on 6/22/14.
//  Copyright (c) 2014 Hasan Sa. All rights reserved.
//

#import <unistd.h>

#import "UserDefaults.h"
#import "AppearanceTheme.h"
#import "AsyncImageView.h"
#import "PublicServices.h"

//

#pragma mark -
#pragma mark GLOBAL KEYS

#define kwords                   @"keywords"
#define kIconFileName               @"icon"
//
#define kOfficeInstructions         @"instructions"
#define kUrl                        @"url"
#define kIsMedia                    @"isMedia"
#define kAnswearingHours            @"answearing"
#define kVisit                      @"visit"
//
#define kNurse                      @"nurse"
#define kStation                    @"station"
#define kEmail                      @"email"
//
#define kShowInCategory             @"showInCategory"
#define kShowOnMap                  @"showOnMap"
#define kIsShowInSearch             @"showInSearch"
#define kIsShowBubble               @"showBubble"
#define kIsAtZoomLevel              @"zoomLevel"
#define kMultiMedia                 @"multiMedia"
//

#define kHead                       @"head"
#define kGalleries                  @"gallery"

#define kHeightForRowAtIndexPath    45.
#define ICONS_IMAGES_Instruction    @"Images/Instruction"
#define ICONS_IMAGES_DIRECTORY      @"Images/MapIcons"

#define BASE_URL                    [IDKit getServerURL]//@"https://developer.spreo.co/middle/ios/"
#define DEFAULT_URL                 @"https://developer.spreo.co/middle/ios/"
#define SANDBOX_URL                 @"http://sandbox.spreo.co/middle/ios/"
//#define BASE_URL                    @"http://spreoco-lb-http-2133094653.us-west-2.elb.amazonaws.com/middle/ios/"
#define LOCATION_SHARING_URL        @"LocationSharingServlet?"

#define MULTI_USERS_FILE_NAME       @"spreo_users_setting.json"

#define HOME_JSON_FILE_NAME         @"homeactions.json"
#define BANNERS_JSON_FILE_NAME      @"banners.json"

#define ADMIN_PASS                  @"spreodev"

#define kParkingId                   @"myCarPark"

#define kLocationSharing            @"location sharing"

#define IPHONE_4S                   4.1

#define KBannerTimerDuration        7.0     // sec
#define KMinSecondsBetweenBanners   30.0    // sec

#define ENTRANCE_POI_IDINTIFIER         @"idr"
#define PARKING_POI_IDINTIFIER          @"idr_parking_poi"
#define SWITCH_FLOOR_POI_IDINTIFIER     @"switch_floor_poi"

#define DEFAULT_LAN                     @"en"
#define CURRENT_LAN   [[SPLocalization sharedInstance] language]

#define USER_ALERT_TAG                  19891182
#define PROJECTS_ALERT_TAG              77854331

#define MAX_DISTANCE_FROM_CAMPUS        800
////////////////////////////////////////////////////////////////////////////////////////
// Notification Keys
////////////////////////////////////////////////////////////////////////////////////////
#pragma mark -
#pragma mark Notification Keys

static NSString *const kLocalizationLanguageDidChangeNotification   = @"kLocalizationLanguageDidChangeNotification";

#pragma mark -
#pragma mark Macros
////////////////////////////////////////////////////////////////////////////////////////

#define LOCALIZATION(text) [SPLocalization stringForKey:text]

#define kDetailsIconUrlByAppendName(name) [NSString stringWithFormat:@"%@res/%@/%@/homeicons/%@", BASE_URL, [[UserDefaults sharedDefaults] projectID], kCampusId, name]

#define kBannersIconUrlByAppendName(name) [NSString stringWithFormat:@"%@res/%@/%@/%@/spreo_banners/%@", BASE_URL, [[UserDefaults sharedDefaults] projectID], kCampusId, kFacilityId ,name]

#define API_KEY     [[UserDefaults sharedDefaults] kAppApiKey]

#define kCampusId   [[IDKit getCampusIDs] firstObject]

#define kFacilityId [[IDKit getFacilityIDsForCampusID:kCampusId] firstObject]

#define kIdentifier [NSString stringWithFormat:@"%@.%@", kCampusId, kFacilityId]

#pragma mark -
#pragma mark - PROCESSING DEFINITION

/*
 Build Settings -> GCC_PREPROCESSOR_DEFINITIONS add DEBUG=1 $(inherited) MYDEBUG
 
 at your definitions file
 #ifdef MYDEBUG  non release builds
 #define DEBUG_FLAG
 #endif  MYDEBUG
 
 */

#ifdef MYDEBUG
    #define DEBUG_FLAG
#endif // MYDEBUG


#pragma mark Keychain

#define kUserName @"userName"
#define kPassword @"password"
#define kProject  @"project"
#define kService  @"Spreo"



