//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AMSDevice : NSObject
{
}

+ (id)_systemVersionDictionary;
+ (id)_dataForNVRAMKey:(id)arg1;
+ (id)_compatibleProductType;
+ (_Bool)deviceIsSeedBuild;
+ (_Bool)deviceIsiPod;
+ (_Bool)deviceIsiPhone;
+ (_Bool)deviceIsiPad;
+ (_Bool)deviceIsInternalBuild;
+ (_Bool)deviceIsAppleWatch;
+ (_Bool)deviceIsAppleTV;
+ (_Bool)deviceIsAudioAccessory;
+ (id)uniqueDeviceId;
+ (id)thinnedAppVariantId;
+ (id)serialNumber;
+ (id)screenScale;
+ (id)productVersion;
+ (id)productType;
+ (id)MLBSerialNumber;
+ (id)macAddressData;
+ (id)macAddress;
+ (id)localIPAddress;
+ (_Bool)isRunningInStoreDemoMode;
+ (id)hardwarePlatform;
+ (id)deviceGUID;
+ (id)buildVersion;
+ (id)deviceOffersForProductType:(unsigned long long)arg1;
+ (_Bool)deviceOffersContainProductType:(unsigned long long)arg1;
+ (id)_followUpItemWithIdentifier:(id)arg1 account:(id)arg2 priority:(long long)arg3 logKey:(id)arg4;
+ (void)registerCompanionWithSerialNumber:(id)arg1;
+ (_Bool)shouldPresentSetupOffersForAccount:(id)arg1;
+ (_Bool)postFollowUpForDeviceOffersWithIdentitier:(id)arg1 account:(id)arg2 priority:(long long)arg3 logKey:(id)arg4;
+ (id)deviceOffersForType:(unsigned long long)arg1;
+ (_Bool)deviceOffersContainType:(unsigned long long)arg1;
+ (_Bool)clearFollowUpForDeviceOffersWithIdentifier:(id)arg1 account:(id)arg2;
+ (_Bool)isGift;
+ (_Bool)isEligibleForOffers;
+ (_Bool)expressedIntent;
+ (id)deviceOffers;

@end

