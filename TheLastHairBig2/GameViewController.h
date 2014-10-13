//
//  GameViewController.h
//  TheLastHairBig
//
//  Created by HIDEHIKO KONDO on 2013/04/23.
//  Copyright (c) 2013年 UDONKONET. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>
#import <AudioToolbox/AudioToolbox.h>
#import "AdstirView.h"
#import "GADInterstitial.h"

@interface GameViewController : UIViewController <AdstirViewDelegate,GADInterstitialDelegate>
{
    GADInterstitial *interstitial_;

}

@property (nonatomic, retain) AdstirView* adview; //プロパティーで宣言すると、管理が簡単になります。
@property (weak, nonatomic) IBOutlet UIImageView *hairImageView;
@property (weak, nonatomic) IBOutlet UILabel *unplugLabel;
@property (weak, nonatomic) IBOutlet UIImageView *umiheiComboImageView;
@property (weak, nonatomic) IBOutlet UIImageView *namiheiFaceImageView;
@property (weak, nonatomic) IBOutlet UIImageView *namiheiHeadImageView;
@property (weak, nonatomic) IBOutlet UIImageView *bakamonImageView;
@property (weak, nonatomic) IBOutlet UIView *gameOverView;
@property (weak, nonatomic) IBOutlet UILabel *highScoreLabel;
@property (weak, nonatomic) IBOutlet UILabel *nowScoreLabel;
@property (weak, nonatomic) IBOutlet UIImageView *fingerImageView;
- (IBAction)backButton2:(id)sender;

@end
