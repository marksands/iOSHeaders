//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QLNetworkStateListener.h"
#import "RadiosPreferencesDelegate.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>, NSString, RadiosPreferences;

__attribute__((visibility("hidden")))
@interface QLNetworkStateObserver : NSObject <RadiosPreferencesDelegate, QLNetworkStateListener>
{
    unsigned long long _stack;
    NSObject<OS_dispatch_queue> *_queue;
    struct __SCNetworkReachability *_reachability;
    int _iCloudDriveReachabilityToken;
    unsigned int _reachabilityFlags;
    RadiosPreferences *_radiosPreferences;
    NSMutableArray *_completionBlocks;
    unsigned long long _networkState;
    id <QLNetworkStateListener> _remoteObserver;
}

+ (_Bool)networkAccessShouldGoThroughCloudDocsDaemon;
+ (_Bool)usingRemoteNetworkObserver;
+ (id)sharedInstance;
@property(retain, nonatomic) id <QLNetworkStateListener> remoteObserver; // @synthesize remoteObserver=_remoteObserver;
@property(readonly, nonatomic) unsigned long long networkState; // @synthesize networkState=_networkState;
- (void).cxx_destruct;
- (void)_updateRemoteObserver;
- (void)updateState:(unsigned long long)arg1;
- (void)airplaneModeChanged;
- (void)_updateCompletionBlocks;
- (void)networkStateWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)setNetworkState:(unsigned long long)arg1;
- (void)_updateNetworkStateWithFlags:(unsigned int)arg1;
- (void)_setNetworkState:(unsigned long long)arg1;
- (void)_updateNetworkActivityIndicator;
- (void)_update;
- (_Bool)isWifiCapable;
- (_Bool)isConnected;
- (void)dealloc;
- (void)_unregisterReachability;
- (void)stopObserving;
- (void)startObserving;
- (void)_updateNetworkStateWithNotifyToken:(int)arg1;
- (void)popOperation;
- (void)pushOperation;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

