//
//  AppListViewController.h
//  TheLastHairBig
//
//  Created by HIDEHIKO KONDO on 2013/04/23.
//  Copyright (c) 2013年 UDONKONET. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>
#import <AudioToolbox/AudioToolbox.h>
#import "GADInterstitial.h"
#import "GADInterstitialDelegate.h"

@interface AppListViewController : UIViewController<GADInterstitialDelegate>
{
    // インスタンス変数として 1 つ宣言する
    GADInterstitial *interstitial_;
}


@property (weak, nonatomic) IBOutlet UIWebView *appWebView;
@property (weak, nonatomic) IBOutlet UIView *loadingView;


@end
