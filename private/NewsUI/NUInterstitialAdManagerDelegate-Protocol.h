//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NUInterstitialAdManager;

@protocol NUInterstitialAdManagerDelegate <NSObject>
- (id <NUPage>)interstitialAdManager:(NUInterstitialAdManager *)arg1 pageAfterPage:(id <NUPage>)arg2;
- (void)interstitialAdManager:(NUInterstitialAdManager *)arg1 didUnloadInterstitialPage:(id <NUPage>)arg2;
- (void)interstitialAdManager:(NUInterstitialAdManager *)arg1 didLoadInterstitialPage:(id <NUPage>)arg2;
@end

