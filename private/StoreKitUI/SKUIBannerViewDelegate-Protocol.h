//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/NSObject-Protocol.h>

@class NSError, SKUIBannerViewController;

@protocol SKUIBannerViewDelegate <NSObject>

@optional
- (void)bannerView:(SKUIBannerViewController *)arg1 didFailWithError:(NSError *)arg2;
- (void)bannerViewDidClose:(SKUIBannerViewController *)arg1;
@end
