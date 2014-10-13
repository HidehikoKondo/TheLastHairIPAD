//
//  ViewController.h
//  TheLastHairBig
//
//  Created by HIDEHIKO KONDO on 2013/04/23.
//  Copyright (c) 2013年 UDONKONET. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <GameKit/GameKit.h>
#import <AVFoundation/AVFoundation.h>
#import <AudioToolbox/AudioToolbox.h>
#import "AdstirView.h"
#import <GameFeatKit/GFView.h>
#import <GameFeatKit/GFController.h>
#import "JSONKit.h"
#import "GADInterstitial.h"
#import "GADInterstitialDelegate.h"


@interface ViewController : UIViewController<GKLeaderboardViewControllerDelegate,AdstirViewDelegate,GADInterstitialDelegate>{
    
    // インスタンス変数として 1 つ宣言する
    GADInterstitial *interstitial_;
    
    
}
@property (nonatomic, retain) AdstirView* adview; //プロパティーで宣言すると、管理が簡単になります。
- (IBAction)tweetButton:(id)sender;
- (IBAction)likeButton:(id)sender;
- (IBAction)gfButton:(id)sender;
@property (weak, nonatomic) IBOutlet UIButton *appsButton;
@property (weak, nonatomic) IBOutlet UIButton *gfButton;

@end
