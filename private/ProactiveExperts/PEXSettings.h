//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSSet, NSString, NSUserDefaults, PEXSettingsKVOObserver;

@interface PEXSettings : NSObject
{
    NSString *_notificationName;
    struct _opaque_pthread_mutex_t {
        long long __sig;
        char __opaque[56];
    } _lock;
    NSSet *_disabledBundleIdentifiers;
    NSUserDefaults *_defaults;
    PEXSettingsKVOObserver *_kvoObserver;
    _Bool _appConnectionsLocationsEnabled;
}

+ (void)clearTestSettings;
+ (_Bool)servantShouldRespondToQuery:(id)arg1;
+ (void)disableBundleIdentifier:(id)arg1;
+ (id)sharedInstance;
+ (void)initialize;
@property(nonatomic, getter=isAppConnectionsLocationsEnabled) _Bool appConnectionsLocationsEnabled; // @synthesize appConnectionsLocationsEnabled=_appConnectionsLocationsEnabled;
- (void).cxx_destruct;
- (void)_clearTestSettings;
- (_Bool)_bundleIdentifierIsEnabled:(id)arg1;
- (void)_disableBundleIdentifier:(id)arg1;
- (void)_refreshDisabledBundleIds;
- (_Bool)_showLocationsFoundInApps;
- (void)_updateSettingsValues;
- (void)_unsubscribe;
- (void)dealloc;
- (id)initWithNotification:(id)arg1;

@end

