//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CTCarrierSpaceClientDelegate.h"
#import "CoreTelephonyClientSubscriberDelegate.h"

@class CTCarrierSpaceAppsInfo, CTCarrierSpaceCapabilities, CTCarrierSpaceClient, CTCarrierSpacePlansInfo, CTCarrierSpaceUsageInfo, CTCarrierSpaceUserConsentFlowInfo, CoreTelephonyClient, NSNumber, NSObject<OS_dispatch_queue>, NSString, PSUIAppInstallController;

@interface PSUICarrierSpaceManager : NSObject <CTCarrierSpaceClientDelegate, CoreTelephonyClientSubscriberDelegate>
{
    NSObject<OS_dispatch_queue> *_carrierSpaceQueue;
    CTCarrierSpaceCapabilities *_capabilities;
    CTCarrierSpaceUsageInfo *_usageInfo;
    CTCarrierSpacePlansInfo *_plansInfo;
    CTCarrierSpaceAppsInfo *_appsInfo;
    PSUIAppInstallController *_carrierAppInstallController;
    NSNumber *_hasUserConsent;
    CTCarrierSpaceUserConsentFlowInfo *_userConsentFlowInfo;
    NSNumber *_userConsentResponse;
    struct __CTServerConnection *_serverConnection;
    CoreTelephonyClient *_coreTelephonyClient;
    CTCarrierSpaceClient *_carrierSpaceClient;
}

+ (long long)bytesFromString:(id)arg1 carrierSpaceUnits:(long long)arg2;
+ (int)carrierMetricTypeForString:(id)arg1;
+ (id)sharedManager;
@property(retain, nonatomic) CTCarrierSpaceClient *carrierSpaceClient; // @synthesize carrierSpaceClient=_carrierSpaceClient;
- (void).cxx_destruct;
- (void)userConsentFlowInfoDidChange;
- (void)appsDidChange;
- (void)plansDidChange;
- (void)usageDidChange;
- (void)capabilitiesDidChange:(id)arg1;
- (void)simStatusDidChange:(id)arg1 status:(id)arg2;
- (id)localizedDataStringFromBytes:(unsigned long long)arg1;
- (_Bool)shouldShowPlanMetrics:(id)arg1;
- (id)descriptionForPlanMetrics:(id)arg1;
- (_Bool)planChangeIsRestricted;
- (id)carrierAppInstallController;
- (id)appsInfo;
- (id)planMetrics;
- (id)subscribedDomesticPlanOptions;
- (id)subscribedPlanOptions;
- (id)plansInfo;
- (id)usageInfo;
- (id)capabilities;
- (_Bool)supportsSweetgum;
- (void)refresh;
- (void)refreshAndReload;
- (void)reset;
- (void)userConsentAcknowledged:(_Bool)arg1;
- (void)setUserConsent:(_Bool)arg1;
- (id)userConsentFlowInfo;
- (_Bool)hasUserConsent;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

