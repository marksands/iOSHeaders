//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIWindow.h"

@class GKNotificationBannerViewController, NSObject<OS_dispatch_semaphore>;

@interface GKNotificationBannerWindow : UIWindow
{
    NSObject<OS_dispatch_semaphore> *_bannerSemaphore;
    GKNotificationBannerViewController *_currentBannerViewController;
}

+ (void)enqueBanner:(id)arg1;
+ (id)queue;
+ (id)bannerWindow;
@property(readonly, retain, nonatomic) NSObject<OS_dispatch_semaphore> *bannerSemaphore; // @synthesize bannerSemaphore=_bannerSemaphore;
@property(retain, nonatomic) GKNotificationBannerViewController *currentBannerViewController; // @synthesize currentBannerViewController=_currentBannerViewController;
- (void)_hideBanner:(id)arg1 quickly:(_Bool)arg2;
- (void)_showBanner:(id)arg1;
- (void)handlePan:(id)arg1;
- (void)handleSingleTap:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (id)init;
- (_Bool)_canBecomeKeyWindow;
- (_Bool)_includeInDefaultImageSnapshot;
- (_Bool)_canAffectStatusBarAppearance;

@end

