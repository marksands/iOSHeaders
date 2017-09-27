//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSMutableCopying.h"
#import "NSSecureCoding.h"

@interface SUDownloadMetadata : NSObject <NSSecureCoding, NSCopying, NSMutableCopying>
{
    _Bool _autoDownload;
    _Bool _enabledFor2G;
    _Bool _enabledFor3G;
    _Bool _enabledFor4G;
    _Bool _enabledForCellularRoaming;
    _Bool _enabledForWifi;
    _Bool _enabledOnBatteryPower;
    _Bool _enforceWifiOnlyOverride;
    int _activeDownloadPolicyType;
    int _downloadFeeAgreementStatus;
    int _termsAndConditionsAgreementStatus;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool enforceWifiOnlyOverride; // @synthesize enforceWifiOnlyOverride=_enforceWifiOnlyOverride;
@property(nonatomic, getter=isEnabledOnBatteryPower) _Bool enabledOnBatteryPower; // @synthesize enabledOnBatteryPower=_enabledOnBatteryPower;
@property(nonatomic, getter=isEnabledForCellularRoaming) _Bool enabledForCellularRoaming; // @synthesize enabledForCellularRoaming=_enabledForCellularRoaming;
@property(nonatomic, getter=isEnabledForWifi) _Bool enabledForWifi; // @synthesize enabledForWifi=_enabledForWifi;
@property(nonatomic, getter=isEnabledFor4G) _Bool enabledFor4G; // @synthesize enabledFor4G=_enabledFor4G;
@property(nonatomic, getter=isEnabledFor3G) _Bool enabledFor3G; // @synthesize enabledFor3G=_enabledFor3G;
@property(nonatomic, getter=isEnabledFor2G) _Bool enabledFor2G; // @synthesize enabledFor2G=_enabledFor2G;
@property(nonatomic) int activeDownloadPolicyType; // @synthesize activeDownloadPolicyType=_activeDownloadPolicyType;
@property(nonatomic) int termsAndConditionsAgreementStatus; // @synthesize termsAndConditionsAgreementStatus=_termsAndConditionsAgreementStatus;
@property(nonatomic) int downloadFeeAgreementStatus; // @synthesize downloadFeeAgreementStatus=_downloadFeeAgreementStatus;
@property(nonatomic, getter=isAutoDownload) _Bool autoDownload; // @synthesize autoDownload=_autoDownload;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)_stringForBool:(_Bool)arg1;
- (_Bool)isEnabledForNetworkType:(int)arg1;
- (_Bool)matchesDownloadPolicy:(id)arg1;
- (id)availableDownloadPolicyIfDifferentFromActive:(id)arg1;
- (id)activeDownloadPolicy:(id)arg1;
- (void)applyDownloadPolicy:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (void)dealloc;

@end

