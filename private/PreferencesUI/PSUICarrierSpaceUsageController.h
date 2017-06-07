//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Preferences/PSListController.h>

#import <PreferencesUI/CTCarrierSpaceClientDelegate-Protocol.h>
#import <PreferencesUI/PSUICarrierSpaceUsageCellDelegate-Protocol.h>

@class CTCarrierSpaceClient, CTCarrierSpaceUsageInfo, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface PSUICarrierSpaceUsageController : PSListController <CTCarrierSpaceClientDelegate, PSUICarrierSpaceUsageCellDelegate>
{
    NSObject<OS_dispatch_queue> *_carrierSpaceQueue;
    CTCarrierSpaceClient *_carrierSpaceClient;
    CTCarrierSpaceUsageInfo *_usageInfo;
}

+ (int)carrierMetricTypeForString:(id)arg1;
@property(retain, nonatomic) CTCarrierSpaceUsageInfo *usageInfo; // @synthesize usageInfo=_usageInfo;
@property(retain, nonatomic) CTCarrierSpaceClient *carrierSpaceClient; // @synthesize carrierSpaceClient=_carrierSpaceClient;
- (void).cxx_destruct;
- (id)otherUsage:(id)arg1 specifier:(id)arg2;
- (id)pairedWatchUsage:(id)arg1 specifier:(id)arg2;
- (id)thisDeviceUsage:(id)arg1 specifier:(id)arg2;
- (id)planCapacity:(id)arg1 specifier:(id)arg2;
- (void)usageDidChange:(id)arg1;
- (id)dataStringFromString:(id)arg1 units:(long long)arg2;
- (id)stringFromCarrierSpaceDataUnits:(long long)arg1;
- (id)messagesDescription:(id)arg1;
- (_Bool)shouldShowMessages:(id)arg1;
- (id)callsDescription:(id)arg1;
- (_Bool)shouldShowCalls:(id)arg1;
- (void)moreDetailsButtonTapped:(id)arg1;
- (id)dataUsageDescription:(id)arg1;
- (_Bool)shouldShowData:(id)arg1;
- (id)specifiers;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)simStatusChanged;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

