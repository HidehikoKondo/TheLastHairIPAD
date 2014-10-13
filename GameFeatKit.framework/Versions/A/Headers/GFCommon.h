//
//  GFCommon.h
//  GameFeatKit
//
//  Created by zaru on 2013/07/09.
//  Copyright (c) 2013年 Basicinc.jp. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <CoreTelephony/CTTelephonyNetworkInfo.h>
#import <CoreTelephony/CTCarrier.h>
#import <AdSupport/AdSupport.h>

#define SDK_VERSION     @"3.2.0"

#define REQUEST_NONE            0
#define REQUEST_UUID            1
#define REQUEST_SCHEME          2
#define REQUEST_ADLIST          3
#define REQUEST_CLICK           4
#define REQUEST_CONV            5
#define REQUEST_ADJSON          6
#define REQUEST_ADENTRY         7
#define REQUEST_IMP             8
#define REQUEST_ICON_ADLIST     9
#define REQUEST_POPUP_ADLIST    9
#define REQUEST_UUID_SEND       10
#define REQUEST_AD_ALL          11
#define REQUEST_ICON_IMP        12
#define REQUEST_AD_ALL_ACTIVATE 13

#define ALERT_MODE_WAIT         0

#define TAG_DISPLAY_VIEW        999
#define TAG_WEBVIEW_ERROR       101
#define TAG_WEBVIEW_ENTRY       102

#define ICON_REFRESH_TIMING     20
#define PRELOAD_REFRESH_TIMING  10

#define VIEW_MODE_NONE          0
#define VIEW_MODE_CUSTOM        1
#define VIEW_MODE_POPUP         2
#define VIEW_MODE_ICON          3

#define ICON_LOAD_NUM           20

@interface GFCommon : NSObject {
    int requestType;
    NSString *uuid;
}

@property (nonatomic, retain) NSURLConnection *httpConnection;
@property (nonatomic, retain) NSMutableData *httpData;
@property (nonatomic) BOOL isInitRequest;

- (NSString *)reportUUID;
- (void)loadAdAllFromActivateGF;
- (void)loadAdAll;
- (void)loadAdAll:(int)viewMode;
- (void)loadAdAll:(int)viewMode iconNum:(int)iconNum;
- (void)loadAdAll:(int)viewMode iconNum:(int)iconNum requestMode:(int)requestMode;
- (void)reportIconMediaImp;
- (NSString*)getSiteVersion;

@end
