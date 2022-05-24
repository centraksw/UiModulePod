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
#import "CustomUI.h"
#import "INSSearchBar.h"

//
//#import "UIViewController+SWRevealViewController.h"
//#import "SWRevealViewController.h"

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


#pragma mark -
#pragma mark API KEYS
////////////////////////////////////////////////////////////////////////////////////////
// DEFENITIONS
////////////////////////////////////////////////////////////////////////////////////////

#ifdef HEALTHCARE
#define GOOGLE_API_KEY @"AIzaSyCb1Lqam0_ebCZakG5-uFsYItw4INVmmz0"
#define kStaffApiKey @"7839c11a5e2b46799f2a5a567f212dba1486037312224409831758"
#define kHealthCare_API_KEY @"b7c9f58782a44d739d3717f71588164214860371077731869073837"
#elif NIKE
#define GOOGLE_API_KEY @"AIzaSyCb1Lqam0_ebCZakG5-uFsYItw4INVmmz0"
#define kStaffApiKey @"7839c11a5e2b46799f2a5a567f212dba1486037312224409831758"
#define kNike_API_KEY @"c60ec02ffcfb41bbb91730120185af4f14977807879842116146305"
#else
#define GOOGLE_API_KEY @"AIzaSyBWOQ_qhgpGelrvCSKdoFWU3QAh6xS_ZMg"
#endif

//#define TEST
//#define USE_SEARCH_RIGHT_MENU
//#define LOCK_INDOOR_MAP
//
//#define SSH_PRODUCTION
//#define SSH_STAGING
//#define SSH_TESTING
//#define SSH_NEW
//
//#define SAJ_STAGING
//
//#define UTC_PRODUCTION
//#define UTC_STAGING
//#define UTC_RELEASE
//
//#define TVO_PRODUCTION
//#define TVO_STAGING
//#define TVO_TRAINING
//
//#define DOLPHIN
//#define DOLPHIN_SPANISH_TESTING

//#define CARMEL_TESTING
//#define CARMEL_SRG
//#define CARMEL_DEMO
//
//#define DUBAI_WTC_STAGING
//#define DUBAI_WTC_TESTING
//
#define OFFICE_DEBUG
//
//#define NIH
//
//#define ENGLEWOOD_PRODUCTION
//#define ENGLEWOOD_STAGING
//#define ENGLEWOOD_DEMO

//#ifdef DEBUG_FLAG
//    #define OFFICE_GM
//
//#else // DEBUG_FLAG
    #define DAYTONA_AVAI
//#endif // DEBUG_FLAG

//#define DAYTONA_AVAI
//#define OFFICE_GM


////////////////////////////////////////////////////////////////////////////////////////
// SPREO_API_KEYS, URLS AND Campus + Facility Identifiers
////////////////////////////////////////////////////////////////////////////////////////

#pragma mark -
#pragma mark TEST API KEY
#ifdef TEST

#define SPREO_API_KEY @"lcnctx5070c7e0747d11e482f80800200c9a66"
#define APP_URL @"http://www.shopshorthills.com"

static NSString *  const kCampusId    = @"location_context_campus";
static NSString *  const kFacilityId  = @"location_context_facility";

#endif // TEST

#pragma mark -
#pragma mark SSH API KEY
#if (defined(SSH_STAGING) || defined(SSH_TESTING) || defined(SSH_PRODUCTION) || defined(SSH_NEW) || defined(SAJ_STAGING) || defined (SSH_GM))

#ifdef SSH_PRODUCTION
#define SPREO_API_KEY @"2ab41240fb7011e3a3ac0800200c9a66"
#endif // SSH_PRODUCTION

#ifdef SSH_STAGING
#define SPREO_API_KEY @"4ddd591f952542e89b15bb95c6cfe5d814303746389351532816706"//@"0256a977f2304757aafb2cdc2cddbbda"
#endif // SSH_STAGING

#ifdef SSH_TESTING
#define SPREO_API_KEY @"50bd377688974a6e9cac07716c50aca01424697362112258417499"
#endif // SSH_TESTING

#ifdef SSH_NEW
#define SPREO_API_KEY @"mb5a530a0b158845fc929615548506194b"
#endif // SSH_NEW

#ifdef SSH_GM
#define SPREO_API_KEY @"407c77bb0e5b4b63aa441313045889d11443601488752485241883"
#endif // SSH_GM

#ifdef SAJ_STAGING
#define SPREO_API_KEY @"aa5046a1d1e8461bb1d4845fddc4ad431427791380532436862197"
#endif // SAJ

#define APP_URL @"http://www.shopshorthills.com"

#endif // (defined (SSH_STAGING) || defined (SSH_TESTING))


#ifdef DAYTONA_AVAI
#define SPREO_API_KEY @"8274f03ce1b54a5486fedf2553b2bef214467127163312122383063"
//    #define SPREO_API_KEY @"4a7bc6235ff04545903ad39e5dba809814451582564516291787"
//    #define SPREO_API_KEY @"98cb188e027f4db6b0e9dca1bce9c4e114466250628711169293524"
#endif // DAYTONA_AVAI

#pragma mark -
#pragma mark UTC API KEY
#if (defined (UTC_STAGING) || defined (UTC_RELEASE) ||defined (UTC_PRODUCTION))

#ifdef UTC_PRODUCTION
#define SPREO_API_KEY     @"mb5557d09d7dfc44d8a1114b28fba66293"
#endif // UTC_PRODUCTION

#ifdef UTC_STAGING
#define SPREO_API_KEY @"mxmutcstg7a4e925d9cfb41169e156d51f54dfed8"
#endif // UTC_STAGING

#ifdef UTC_RELEASE
#define SPREO_API_KEY @"38ba9b22fe72466f8499d36a04fa99091426755472758487082622"
#endif // UTC_RELEASE

#define APP_URL @"http://www.mallatutc.com"

#endif // (defined (UTC_STAGING) || defined (UTC_RELEASE) ||defined (UTC_PRODUCTION))

#pragma mark -
#pragma mark TVO API KEY
#if (defined (TVO_STAGING) || defined (TVO_TRAINING) ||defined (TVO_PRODUCTION))

#ifdef UTC_PRODUCTION
#define SPREO_API_KEY     @"7e3fb25ca93845a39dbbb3deffbe2893"
#endif // UTC_PRODUCTION

#ifdef TVO_STAGING
#define SPREO_API_KEY     @"mxm12oakstgebd927702cfe11e48c210800200c9a66"
#endif // TVO_STAGING

#ifdef TVO_TRAINING
#define SPREO_API_KEY     @"7386b5548432485fb717913c57a0c5f814283997915461657458721"
#endif // TVO_TRAINING

#define APP_URL @"http://www.mallatutc.com"

#endif // (defined (TVO_STAGING) || defined (TVO_TRAINING) ||defined (TVO_PRODUCTION))


#pragma mark -
#pragma mark DOLPHIN API KEY
#if (defined (DOLPHIN) || defined (DOLPHIN_SPANISH_TESTING))

#ifdef DOLPHIN
//#define SPREO_API_KEY @"dolstge19aebd0366911e48c210800200c9a66"
#define SPREO_API_KEY @"41ba810c021144d78df4081930d463e314452635167731552473937"

#endif // DOLPHIN

#ifdef DOLPHIN_SPANISH_TESTING
#define SPREO_API_KEY @"b69c23848ec4447fa719134d0a93d23b14169057830911738299357"

#endif // DOLPHIN_SPANISH_TESTING

#define APP_URL @"http://www.shopdolphinmall.com"

#endif // (defined (DOLPHIN) || defined (DOLPHIN_SPANISH_TESTING))


#pragma mark -
#pragma mark CARMEL API KEY
#if (defined (CARMEL_TESTING) || defined (CARMEL_SRG) || defined (CARMEL_DEMO))

#ifdef CARMEL_TESTING
#define SPREO_API_KEY @"5b4f23924877434ba630bf0fa76831eb"
#endif // CARMEL_TESTING

#ifdef CARMEL_SRG
#define SPREO_API_KEY @"3d5039143cae4fc8b03e52f95704932e14178828109801158695180"
#endif // CARMEL_SRG

#ifdef CARMEL_DEMO
#define SPREO_API_KEY @"5dd65435a8ba46c2bb05bdd479ed473514367902240951928019825"
#endif

#define APP_URL @"http://www.clalit.co.il"

#endif // (defined (CARMEL_TESTING) || defined (CARMEL_SRG))


#pragma mark -
#pragma mark OFFICE API KEY
#if (defined (OFFICE_DEBUG) || defined (OFFICE_GM))

#ifdef OFFICE_DEBUG
#define SPREO_API_KEY @"mba26ad85a0bb543ca8ab42cc7fcaaed47"
#endif // OFFICE_DEBUG

#ifdef OFFICE_GM
//OFFICE_GM
//#define SPREO_API_KEY @"a010cd7f7bfd4c66a6314fde5e397e0a1442136280000545610866"
//
#define SPREO_API_KEY @"1369418b06c14cf3a576af00225d88c014584622783181364353322"

//dolphin
//#define SPREO_API_KEY @"41ba810c021144d78df4081930d463e314452635167731552473937"

// AVAI daytona api keys
// production
//#define SPREO_API_KEY @"8274f03ce1b54a5486fedf2553b2bef214467127163312122383063"
// daytona
//#define SPREO_API_KEY   @"4a7bc6235ff04545903ad39e5dba809814451582564516291787"

#endif // OFFICE_GM


#define APP_URL @"http://www.spreo.co"

#endif // (defined (OFFICE_DEBUG) || defined (OFFICE_GM))


#pragma mark -
#pragma mark NIH API KEY
#ifdef NIH

#define SPREO_API_KEY @"a180bd3ee4864ea691f66ecbc07d21c114231344223761260838196"
#define APP_URL @"http://www.nih.gov"

#endif // NIH


#pragma mark -
#pragma mark ENGLEWOOD API KEY
#if (defined (ENGLEWOOD_STAGING) || defined (ENGLEWOOD_PRODUCTION) || defined(ENGLEWOOD_DEMO))

#ifdef ENGLEWOOD_DEMO
#define SPREO_API_KEY @"3c2f81ea872b452d835f9e49eaab194014230522512551892778037"
#endif // ENGLEWOOD_DEMO

#ifdef ENGLEWOOD_PRODUCTION
#define SPREO_API_KEY @"34c79f0642634376bd4e5eb6ae3cea70"
#endif // ENGLEWOOD_PRODUCTION

#ifdef ENGLEWOOD_STAGING
#define SPREO_API_KEY @"engstg0f3517b059c311e48ed60800200c9a66"
#endif //ENGLEWOOD_STAGING

#define APP_URL @"http://www.englewoodhospital.com/"

#endif // (defined (ENGLEWOOD_STAGING) || defined (ENGLEWOOD_PRODUCTION))


#pragma mark -
#pragma mark DUBAI API KEY
#if (defined (DUBAI_WTC_STAGING) || defined (DUBAI_WTC_TESTING))

#ifdef DUBAI_WTC_STAGING
#define SPREO_API_KEY @"dwtc233dd0850c11e4b4a90800200c9a66"
#endif // DUBAI_WTC_STAGING

#ifdef DUBAI_WTC_TESTING
#define SPREO_API_KEY @"dwtc233dd0850c11e4b4a90800200c9a66"
#endif //DUBAI_WTC_TESTING

#define APP_URL @"http://www.dwtc.com/"

#endif // (defined (ENGLEWOOD_STAGING) || defined (ENGLEWOOD_PRODUCTION))

#pragma mark Keychain

#define kUserName @"userName"
#define kPassword @"password"
#define kProject  @"project"
#define kService  @"Spreo"



