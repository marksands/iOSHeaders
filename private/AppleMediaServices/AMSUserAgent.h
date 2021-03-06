//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AMSLRUCache, NSString;

__attribute__((visibility("hidden")))
@interface AMSUserAgent : NSObject
{
    AMSLRUCache *_cache;
}

+ (id)shared;
- (void).cxx_destruct;
- (id)_sharedComponentFrameworkVersion;
- (_Bool)_iOSFairPlayDeviceType:(unsigned int *)arg1 error:(id *)arg2;
- (id)_iOSComponentProductVersion;
- (id)_iOSComponentParentheticalWithFairPlayDeviceType:(id)arg1;
- (id)_iOSComponentHardwarePlatform;
- (id)_iOSComponentFairPlayDeviceType;
- (id)_iOSComponentDeviceModel;
- (id)_iOSComponentClientInfoWithBundleID:(id)arg1;
- (id)_iOSComponentBuildVersion;
- (id)userAgentForBundleIdentifier:(id)arg1 additionalComponents:(id)arg2 addAccountMediaTypeComponent:(_Bool)arg3;
- (id)userAgentForBundleIdentifier:(id)arg1 additionalComponents:(id)arg2;
- (id)clientVersionForBundleIdentifier:(id)arg1;
- (id)clientNameForBundleIdentifier:(id)arg1;
- (void)cacheUserAgent:(id)arg1 forBundleIdentifier:(id)arg2;
- (id)cachedUserAgentForBundleIdentifier:(id)arg1;
@property(readonly, copy, nonatomic) NSString *clientVersion;
@property(readonly, copy, nonatomic) NSString *clientName;
- (id)init;

@end

