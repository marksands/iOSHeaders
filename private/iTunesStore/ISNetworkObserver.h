//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SSDownloadQueueObserver.h"

@class NSMutableSet, NSObject<OS_dispatch_queue>, NSString;

@interface ISNetworkObserver : NSObject <SSDownloadQueueObserver>
{
    NSString *_dataStatusIndicator;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    _Bool _isCellularRestricted;
    double _lastNetworkTypeChangeTime;
    unsigned int _networkReachabilityFlags;
    long long _networkUsageCount;
    long long _networkType;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSMutableSet *_observedDownloadQueues;
    NSString *_operatorName;
    struct __SCNetworkReachability *_reachability;
    NSString *_registrationStatus;
    struct __CTServerConnection *_telephonyServer;
}

+ (void)setWiFiEnabled:(_Bool)arg1;
+ (void)setAirplaneModeEnabled:(_Bool)arg1;
+ (void)set3GEnabled:(_Bool)arg1;
+ (_Bool)isLikelyToReachRemoteServerWithReachabilityFlags:(unsigned int)arg1;
+ (id)sharedInstance;
- (long long)_setNetworkType:(long long)arg1;
- (void)_reloadNetworkTypeWithReachabilityFlags:(unsigned int)arg1;
- (void)_reloadNetworkType;
- (void)_reloadDataStatusIndicator;
- (void)_reloadCellularRestriction;
- (void)_postUsageChangedToValue:(_Bool)arg1;
- (void)_postTypeChangedNotificationFromValue:(long long)arg1 toValue:(long long)arg2;
- (void)_postReachabilityFlagsChangedNotificationFromValue:(unsigned int)arg1 toValue:(unsigned int)arg2;
- (_Bool)_ntsIsUsingNetwork;
- (long long)_networkTypeForReachabilityFlags:(unsigned int)arg1;
- (long long)_networkTypeFromDataIndicator:(id)arg1;
- (id)_dataStatusIndicator;
- (unsigned int)_currentNetworkReachabilityFlags;
- (void)_copyConnectionDataStatus:(CDUnknownBlockType)arg1;
- (void)_handleTelephonyNotificationWithName:(struct __CFString *)arg1 userInfo:(struct __CFDictionary *)arg2;
- (void)_applicationForegroundNotification:(id)arg1;
- (void)downloadQueueNetworkUsageChanged:(id)arg1;
- (void)downloadQueue:(id)arg1 changedWithRemovals:(id)arg2;
@property long long networkType;
- (void)reloadNetworkType;
@property(readonly) NSString *phoneNumber;
@property(readonly) NSString *providerName;
@property(readonly) NSString *operatorName;
@property(readonly) NSString *modemRegistrationStatus;
@property(readonly) NSString *mobileSubscriberNetworkCode;
@property(readonly) NSString *mobileSubscriberCountryCode;
@property(readonly, getter=isWiFiEnabled) _Bool wifiEnabled;
- (_Bool)isCellularDataEnabledForBundleIdentifier:(id)arg1;
@property(readonly) NSString *dataStatusIndicator;
@property(readonly) _Bool shouldShowCellularAutomaticDownloadsSwitch;
@property(readonly) unsigned int networkReachabilityFlags;
@property(readonly) double lastNetworkTypeChangeTime;
@property(readonly, getter=isUsingNetwork) _Bool usingNetwork;
- (void)endUsingNetwork;
- (void)endObservingDownloadQueue:(id)arg1;
- (id)copyValueForCarrierBundleKey:(id)arg1;
@property(readonly) NSString *connectionTypeHeader;
- (void)beginUsingNetwork;
- (void)beginObservingDownloadQueue:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

