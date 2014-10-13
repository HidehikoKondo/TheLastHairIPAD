//
//  AppListViewController.m
//  TheLastHairBig
//
//  Created by HIDEHIKO KONDO on 2013/04/23.
//  Copyright (c) 2013年 UDONKONET. All rights reserved.
//

#import "AppListViewController.h"
#import <QuartzCore/QuartzCore.h>

#define APPLISTURL @"http://www.udonko.net/applist/"  // アプリ一覧のURL

@interface AppListViewController ()

@end

@implementation AppListViewController
@synthesize appWebView;
@synthesize loadingView;

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view.
    // Do any additional setup after loading the view.
    
    // AdMobのインタースティシャル広告読み込み
    [self loadAdMobIntersBanner];
    
    
    //インジケーターのビューの角丸設定
    loadingView.layer.cornerRadius = 10;
    
    //アプリ一覧のURL設定
    NSURL *url = [NSURL URLWithString:APPLISTURL];
    NSURLRequest *request = [NSURLRequest requestWithURL:url];
    [appWebView loadRequest:request];
    [appWebView reload];
}
//WebVIewが表示完了時の動作
- (void)webViewDidFinishLoad:(UIWebView *)view {
    
    //インジケータービューをフェードアウト
    [UIView beginAnimations:nil context:nil];
    [UIView setAnimationDuration:0.7];
    loadingView.alpha = 0;
    [UIView commitAnimations];
    
}
//戻るボタン
- (IBAction)backButton:(id)sender {
    //戻るメソッド
    [self dismissViewControllerAnimated:YES completion:nil];
}


// AdMobのインタースティシャル広告読み込み
- (void)loadAdMobIntersBanner
{
    interstitial_ = [[GADInterstitial alloc] init];
    interstitial_.delegate = self;
    interstitial_.adUnitID = @"ca-app-pub-3324877759270339/8563045425";
    [interstitial_ loadRequest:[GADRequest request]];
}

// AdMobのインタースティシャル広告表示
- (void)interstitialDidReceiveAd:(GADInterstitial *)ad
{
    [interstitial_ presentFromRootViewController:self];
    NSLog(@"admob interstitialDidReceiveAd");
}

- (void)interstitial:(GADInterstitial *)interstitial didFailToReceiveAdWithError:(GADRequestError *)error
{
    NSLog(@"admob interstitial didFailToReceiveAdWithError");
}



- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
