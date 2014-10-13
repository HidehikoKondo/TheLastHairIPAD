//
//  GFPopupView.h
//  GameFeatKit
//
//  Created by zaru on 2013/07/08.
//  Copyright (c) 2013年 Basicinc.jp. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>
#import "GFCommon.h"
#import "GFIconController.h"
#import "GFIconView.h"

@protocol GFPopupViewDelegate <NSObject>
@optional
- (void)didShowGameFeatPopup;   // 全画面広告を表示したタイミングで呼び出されるメソッド
- (void)didCloseGameFeatPopup;  // 全画面広告が閉じられたタイミングで呼び出されるメソッド
- (void)failGameFeatPopupData;  // 全画面広告データが取得できなかった時に呼び出されれるメソッド
@end

@interface GFPopupView : UIView {
}

- (id)init;
- (id)init:(id<GFPopupViewDelegate>)del;

- (void)setImageUrl:(NSString *)imageUrl;
- (void)setClickUrl:(NSString *)clickUrl;

- (BOOL)loadAd:(NSString *)site_id;
- (BOOL)loadAdApi;
- (void)setPopupViewData;
- (void)setSchedule:(int)count;
- (void)setAnimation:(BOOL)flag;
- (void)saveClick:(NSString *)ad_id scheme:(NSString *)scheme click_time:(NSNumber *)click_time;
- (int)unixtimestamp;
- (void)show;
- (void)animation1;
- (void)animation2;

@property (nonatomic) int currentCount;
@property (nonatomic) int scheduleCount;
@property (nonatomic) BOOL isPortrait;
@property (nonatomic) BOOL isAnimation;
@property (nonatomic, retain) UIView *bv;
@property (nonatomic, retain) UIView *overlay;
@property (nonatomic, retain) UIImageView *bgImageView;
@property (nonatomic, retain) UIImageView *btImageView;
@property (nonatomic, retain) UIWebView *popupImageView;
@property (nonatomic, retain) UIImageView *closeImageView;
@property (nonatomic, retain) NSString *adId;
@property (nonatomic, retain) NSString *packageName;
@property (nonatomic, retain) NSString *url;

@property (nonatomic, retain) NSString *uuid;
@property (nonatomic, retain) NSString *gfSiteId;
@property (nonatomic, retain) NSDictionary *popupAdLists;

@property (nonatomic, retain) GFIconController *gfIconController;

@property (assign) id<GFPopupViewDelegate> delegate;

@end
