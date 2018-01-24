//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OnBoardingKit/OBSplashController.h>

#import "UIScrollViewDelegate.h"

@class NSString, OBPrivacyFlow;

@interface OBPrivacySplashController : OBSplashController <UIScrollViewDelegate>
{
    OBPrivacyFlow *_flow;
    _Bool _suppressPerPageAnalyticsLogging;
    _Bool _allowsOpeningSafari;
    _Bool _showLinkToPrivacyGateway;
    _Bool _showsLinkToUnifiedAbout;
    _Bool _useSmallTitle;
    _Bool _useModalStyle;
    _Bool _isCombined;
}

+ (id)splashPageWithBundleIdentifier:(id)arg1;
@property(nonatomic) _Bool isCombined; // @synthesize isCombined=_isCombined;
@property _Bool useModalStyle; // @synthesize useModalStyle=_useModalStyle;
@property _Bool useSmallTitle; // @synthesize useSmallTitle=_useSmallTitle;
@property _Bool showsLinkToUnifiedAbout; // @synthesize showsLinkToUnifiedAbout=_showsLinkToUnifiedAbout;
@property _Bool showLinkToPrivacyGateway; // @synthesize showLinkToPrivacyGateway=_showLinkToPrivacyGateway;
@property _Bool allowsOpeningSafari; // @synthesize allowsOpeningSafari=_allowsOpeningSafari;
@property _Bool suppressPerPageAnalyticsLogging; // @synthesize suppressPerPageAnalyticsLogging=_suppressPerPageAnalyticsLogging;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (void)updateNavigationBarTitle;
- (void)setDarkMode:(_Bool)arg1;
- (void)setDismissHandlerForDefaultButton:(CDUnknownBlockType)arg1;
- (void)viewDidLayoutSubviews;
- (void)_initializeFromBundle;
- (void)viewDidLoad;
- (void)showPrivacyGateway:(id)arg1;
- (void)showUnifiedAbout:(id)arg1;
- (id)initWithFlow:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (id)_defaultButtonTitle;
- (id)initWithPrivacyIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

