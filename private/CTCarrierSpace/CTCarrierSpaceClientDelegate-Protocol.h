//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CTCarrierSpace/NSObject-Protocol.h>

@class CTCarrierSpaceAppsInfo, CTCarrierSpaceCapabilities, CTCarrierSpacePlanGroupOptionInfo, CTCarrierSpacePlansInfo, CTCarrierSpaceUsageInfo, NSDictionary;

@protocol CTCarrierSpaceClientDelegate <NSObject>

@optional
- (void)purchasedPlan:(CTCarrierSpacePlanGroupOptionInfo *)arg1 didChangeStatus:(long long)arg2 context:(NSDictionary *)arg3;
- (void)dataPlanMetricsDidChange;
- (void)appsDidChange:(CTCarrierSpaceAppsInfo *)arg1;
- (void)appsDidChange;
- (void)plansDidChange:(CTCarrierSpacePlansInfo *)arg1;
- (void)plansDidChange;
- (void)usageDidChange:(CTCarrierSpaceUsageInfo *)arg1;
- (void)usageDidChange;
- (void)userConsentFlowInfoDidChange;
- (void)capabilitiesDidChange:(CTCarrierSpaceCapabilities *)arg1;
@end

