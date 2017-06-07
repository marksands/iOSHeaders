//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSArray, NSDictionary, WLKSpinnerView, WLKUIAccessView_iOS;

@interface _WLKUIAccessViewController : UIViewController
{
    WLKUIAccessView_iOS *_accessView;
    WLKSpinnerView *_loadingView;
    NSArray *_bundleIDs;
    NSDictionary *_options;
    _Bool _hasCalledCompletion;
    NSArray *_appInfos;
    NSArray *_appChannels;
    _Bool _hasOptedIn;
    CDUnknownBlockType _completionHandler;
}

+ (_Bool)_isHostedInRemoteViewService;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void).cxx_destruct;
- (id)_watchListAppIcon;
- (void)_fetchRemoteAppInfo;
- (id)_imageForBundleID:(id)arg1;
- (void)_presentGenericErrorWithCompletion:(CDUnknownBlockType)arg1;
- (void)_toggleLoadingScreen;
- (void)_setupAccessViews;
- (void)_handleNackButton:(id)arg1;
- (void)_handleMenuGesture:(id)arg1;
- (void)_handleSeeAllButton:(id)arg1;
- (void)_handlePrivacyButton:(id)arg1;
- (void)_disallow:(id)arg1;
- (void)_allow:(id)arg1;
- (void)viewDidLoad;
- (void)_init;
- (id)init;
- (void)dealloc;
- (id)initWithBundleIDs:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

