//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCache, NSMutableSet, NSObject<OS_dispatch_queue>, NSURLSession;

@interface STAppInfoCache : NSObject
{
    NSCache *_appInfoByBundleIdentifier;
    NSObject<OS_dispatch_queue> *_lookupQueue;
    NSURLSession *_urlSession;
    NSMutableSet *_bundleIdentifiersWithPendingRequests;
}

+ (id)sharedCache;
@property(readonly, nonatomic) NSMutableSet *bundleIdentifiersWithPendingRequests; // @synthesize bundleIdentifiersWithPendingRequests=_bundleIdentifiersWithPendingRequests;
@property(readonly, nonatomic) NSURLSession *urlSession; // @synthesize urlSession=_urlSession;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *lookupQueue; // @synthesize lookupQueue=_lookupQueue;
@property(readonly, nonatomic) NSCache *appInfoByBundleIdentifier; // @synthesize appInfoByBundleIdentifier=_appInfoByBundleIdentifier;
- (void).cxx_destruct;
- (id)_localAppNameForBundleIdentifier:(id)arg1;
- (id)_preloadedAppInfoWithBundleIdentifier:(id)arg1;
- (void)_finishedFetchingAppInfoByBundleIdentifier:(id)arg1;
- (void)_handleiTunesResponseForBundleIdentifiers:(id)arg1 response:(id)arg2 data:(id)arg3 error:(id)arg4;
- (void)_fetchAppInfoFromAppStoreAndNotifyWithBundleIdentifier:(id)arg1;
- (id)_fetchAppInfoFromLaunchServicesWithBundleIdentifier:(id)arg1;
- (id)appInfoForBundleIdentifier:(id)arg1;
- (void)dealloc;
- (id)init;

@end

