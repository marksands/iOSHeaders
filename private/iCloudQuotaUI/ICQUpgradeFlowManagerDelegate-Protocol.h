//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iCloudQuotaUI/NSObject-Protocol.h>

@class ICQUpgradeFlowManager, UIViewController;

@protocol ICQUpgradeFlowManagerDelegate <NSObject>

@optional
- (void)upgradeFlowManager:(ICQUpgradeFlowManager *)arg1 didPresentViewController:(UIViewController *)arg2;
- (void)upgradeFlowManagerDidComplete:(ICQUpgradeFlowManager *)arg1;
- (void)upgradeFlowManagerDidCancel:(ICQUpgradeFlowManager *)arg1;
@end

