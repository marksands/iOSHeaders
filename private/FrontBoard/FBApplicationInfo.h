//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FrontBoard/FBBundleInfo.h>

#import "BSDescriptionProviding.h"

@class FBApplicationDefaults, FBMutableApplicationDefaults, FBProfileManager, NSArray, NSDictionary, NSNumber, NSSet, NSString, NSURL;

@interface FBApplicationInfo : FBBundleInfo <BSDescriptionProviding>
{
    NSURL *_executableURL;
    NSURL *_bundleContainerURL;
    NSURL *_dataContainerURL;
    NSURL *_sandboxURL;
    double _lastModifiedDate;
    NSString *_preferenceDomain;
    NSString *_signerIdentity;
    NSDictionary *_environmentVariables;
    NSDictionary *_lazy_entitlements;
    _Bool _provisioningProfileValidated;
    _Bool _isManaged;
    NSString *_sdkVersion;
    NSArray *_customMachServices;
    _Bool _hasViewServicesEntitlement;
    NSString *_appIDEntitlement;
    unsigned long long _type;
    NSArray *_requiredCapabilities;
    NSArray *_tags;
    NSArray *_deviceFamilies;
    _Bool _enabled;
    _Bool _newsstand;
    _Bool _restricted;
    _Bool _blocked;
    _Bool _beta;
    FBMutableApplicationDefaults *_defaults;
    NSSet *_backgroundModes;
    unsigned long long _supportedInterfaceOrientations;
    _Bool _exitsOnSuspend;
    _Bool _requiresPersistentWiFi;
    float _minimumBrightnessLevel;
    NSArray *_externalAccessoryProtocols;
    long long _ratingRank;
    NSNumber *_itemID;
    NSNumber *_purchaserDSID;
    NSNumber *_downloaderDSID;
    NSArray *_lazy_folderNames;
    NSString *_lazy_fallbackFolderName;
    _Bool _installing;
    _Bool _uninstalling;
    struct os_unfair_lock_s _lock;
    _Bool _initialized;
    FBProfileManager *_profileManager;
    _Bool _pendingUninstall;
}

+ (id)_genreNameForID:(long long)arg1;
+ (id)_configureEnvironment:(id)arg1 withInfo:(id)arg2 isPreApex:(_Bool)arg3;
+ (void)_buildDefaults:(id)arg1 fromInfo:(id)arg2 entitlements:(id)arg3 appType:(unsigned long long)arg4 isOnOrAfterOkemo:(_Bool)arg5;
+ (unsigned long long)_computeSupportedInterfaceOrientationsWithInfo:(id)arg1 forDefaults:(id)arg2;
+ (unsigned long long)_applicationTypeForProxy:(id)arg1;
@property(nonatomic, getter=_profileManager, setter=_setProfileManager:) FBProfileManager *profileManager; // @synthesize profileManager=_profileManager;
@property(readonly, nonatomic) unsigned long long supportedInterfaceOrientations; // @synthesize supportedInterfaceOrientations=_supportedInterfaceOrientations;
@property(nonatomic, getter=_isPendingUninstall, setter=_setPendingUninstall:) _Bool pendingUninstall; // @synthesize pendingUninstall=_pendingUninstall;
@property(nonatomic, getter=_isUninstalling, setter=_setUninstalling:) _Bool uninstalling; // @synthesize uninstalling=_uninstalling;
@property(nonatomic, getter=_isInstalling, setter=_setInstalling:) _Bool installing; // @synthesize installing=_installing;
@property(readonly, copy, nonatomic, getter=_appIDEntitlement) NSString *appIDEntitlement; // @synthesize appIDEntitlement=_appIDEntitlement;
@property(readonly, retain, nonatomic) NSNumber *downloaderDSID; // @synthesize downloaderDSID=_downloaderDSID;
@property(readonly, retain, nonatomic) NSNumber *purchaserDSID; // @synthesize purchaserDSID=_purchaserDSID;
@property(readonly, retain, nonatomic) NSNumber *itemID; // @synthesize itemID=_itemID;
@property(readonly, nonatomic) long long ratingRank; // @synthesize ratingRank=_ratingRank;
@property(readonly, retain, nonatomic) NSArray *externalAccessoryProtocols; // @synthesize externalAccessoryProtocols=_externalAccessoryProtocols;
@property(readonly, nonatomic) float minimumBrightnessLevel; // @synthesize minimumBrightnessLevel=_minimumBrightnessLevel;
@property(readonly, nonatomic) _Bool requiresPersistentWiFi; // @synthesize requiresPersistentWiFi=_requiresPersistentWiFi;
@property(readonly, nonatomic, getter=isExitsOnSuspend) _Bool exitsOnSuspend; // @synthesize exitsOnSuspend=_exitsOnSuspend;
@property(readonly, retain, nonatomic) FBApplicationDefaults *defaults; // @synthesize defaults=_defaults;
@property(readonly, nonatomic, getter=isBeta) _Bool beta; // @synthesize beta=_beta;
@property(readonly, nonatomic, getter=isBlocked) _Bool blocked; // @synthesize blocked=_blocked;
@property(readonly, nonatomic, getter=isRestricted) _Bool restricted; // @synthesize restricted=_restricted;
@property(readonly, nonatomic, getter=isNewsstand) _Bool newsstand; // @synthesize newsstand=_newsstand;
@property(readonly, nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(readonly, retain, nonatomic) NSArray *tags; // @synthesize tags=_tags;
@property(readonly, retain, nonatomic) NSArray *deviceFamilies; // @synthesize deviceFamilies=_deviceFamilies;
@property(readonly, retain, nonatomic) NSArray *requiredCapabilities; // @synthesize requiredCapabilities=_requiredCapabilities;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, retain, nonatomic) NSArray *customMachServices; // @synthesize customMachServices=_customMachServices;
@property(readonly, copy, nonatomic) NSString *sdkVersion; // @synthesize sdkVersion=_sdkVersion;
@property(readonly, nonatomic, getter=isProvisioningProfileValidated) _Bool provisioningProfileValidated; // @synthesize provisioningProfileValidated=_provisioningProfileValidated;
@property(readonly, nonatomic) _Bool hasViewServicesEntitlement; // @synthesize hasViewServicesEntitlement=_hasViewServicesEntitlement;
@property(readonly, retain, nonatomic) NSDictionary *environmentVariables; // @synthesize environmentVariables=_environmentVariables;
@property(readonly, copy, nonatomic) NSString *signerIdentity; // @synthesize signerIdentity=_signerIdentity;
@property(readonly, copy, nonatomic) NSString *preferenceDomain; // @synthesize preferenceDomain=_preferenceDomain;
@property(readonly, nonatomic) double lastModifiedDate; // @synthesize lastModifiedDate=_lastModifiedDate;
@property(readonly, retain, nonatomic) NSURL *sandboxURL; // @synthesize sandboxURL=_sandboxURL;
@property(readonly, retain, nonatomic) NSURL *dataContainerURL; // @synthesize dataContainerURL=_dataContainerURL;
@property(readonly, retain, nonatomic) NSURL *bundleContainerURL; // @synthesize bundleContainerURL=_bundleContainerURL;
@property(readonly, retain, nonatomic) NSURL *executableURL; // @synthesize executableURL=_executableURL;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (void)_lock_loadFolderNamesIfNecessary;
- (void)_loadFromProxy:(id)arg1;
- (void)_synchronize:(CDUnknownBlockType)arg1;
- (void)_overrideTags:(id)arg1;
- (long long)_mapSignatureStateFromTrustState:(unsigned long long)arg1;
- (id)_applicationTrustData;
@property(readonly, nonatomic, getter=hasUniversalProvisioningProfile) _Bool universalProvisioningProfile; // @dynamic universalProvisioningProfile;
@property(readonly, nonatomic, getter=hasFreeDeveloperProvisioningProfile) _Bool freeDeveloperProvisioningProfile; // @dynamic freeDeveloperProvisioningProfile;
@property(readonly, nonatomic) long long signatureState; // @dynamic signatureState;
- (_Bool)statusBarHiddenForInterfaceOrientation:(long long)arg1 onDisplay:(id)arg2;
- (_Bool)builtOnOrAfterSDKVersion:(id)arg1;
- (void)acceptApplicationSignatureIdentity;
- (_Bool)supportsDeviceFamily:(unsigned long long)arg1;
- (_Bool)supportsAllInterfaceOrientations;
- (_Bool)supportsInterfaceOrientation:(long long)arg1;
- (_Bool)supportsBackgroundMode:(id)arg1;
@property(readonly, retain, nonatomic) NSString *fallbackFolderName;
@property(readonly, retain, nonatomic) NSArray *folderNames;
@property(readonly, retain, nonatomic) NSDictionary *entitlements;
- (void)dealloc;
- (id)_initWithApplicationProxy:(id)arg1;
- (id)_initForProfileManagerTesting;
- (id)initWithApplicationProxy:(id)arg1;
- (id)_initWithBundleProxy:(id)arg1 overrideURL:(id)arg2;
- (id)_initWithBundleIdentifier:(id)arg1 url:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

