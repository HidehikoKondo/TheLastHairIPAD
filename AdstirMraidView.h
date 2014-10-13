//
//  Copyright (c) 2013-2014 UNITED, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

// Don't refresh. / ローテーション無効
#define ADSTIRWEBVIEW_NO_INTERVAL 0
// Minimum refresh interval. / 最小のローテーション感覚
#define ADSTIRWEBVIEW_MIN_INTERVAL 30
// Default refresh interval. / デフォルトのローテーション時間
#define ADSTIRWEBVIEW_DEFAULT_INTERVAL 60

typedef struct AdstirAdSize {
    CGSize size;
    NSUInteger flags;
} AdstirAdSize;

// IAB Static Wide Banner (320 x 50). / バナー広告を表示します。
extern AdstirAdSize const kAdstirAdSize320x50;
// IAB Static Intersitial (300 x 250). / レクタングル広告を表示します。
extern AdstirAdSize const kAdstirAdSize300x250;
// Double Size Banner (300 x 100). / ダブルサイズバナー(幅300)を表示します。
extern AdstirAdSize const kAdstirAdSize300x100;
// Double Size Wide Banner (320 x 100). / ダブルサイズバナーを表示します。
extern AdstirAdSize const kAdstirAdSize320x100;

// Create undefined AdstirAdSize from CGSize. / 未定義の広告サイズをCGSizeから作成します。
AdstirAdSize AdstirSizeFromCGSize(CGSize size);

@class AdstirMraidView;

//
// Delegate protocol
// デリゲート
////////////////////////////////////////////////////////////////////////
@protocol AdstirMraidViewDelegate <NSObject>
@optional
- (void)adstirMraidViewWillPresentScreen:(AdstirMraidView *)mraidView;
- (void)adstirMraidViewDidPresentScreen:(AdstirMraidView *)mraidView;
- (void)adstirMraidViewWillDismissScreen:(AdstirMraidView *)mraidView;
- (void)adstirMraidViewWillLeaveApplication:(AdstirMraidView *)mraidView;
@end

//
// AdstirMraidView
////////////////////////////////////////////////////////////////////////
@interface AdstirMraidView : UIView

// Set refresh time in seconds. / ローテーション時間(秒)を設定します。
@property (assign) NSUInteger  intervalTime;
// Set delegate. / デリゲートを設定します。
@property (weak) id<AdstirMraidViewDelegate> delegate;


// Initialize with origin (0, 0) to parent view. / 親ビューの左上を起点として初期化します。
- (id)initWithAdSize:(AdstirAdSize)size media:(NSString *)media spot:(NSUInteger)spot;
// Initialize with custome origin to parent view. / 親ビューに対する位置を指定して初期化します。
- (id)initWithAdSize:(AdstirAdSize)size origin:(CGPoint)origin media:(NSString *)media spot:(NSUInteger)spot;


// Start loading. / 読み込みを開始します。
- (void)start;
// Stop loading. / 読み込みを停止します。
- (void)stop;
@end
