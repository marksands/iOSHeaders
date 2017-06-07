//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HDAppAssertionManager, HDProfile, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface _HDAppAssertion : NSObject
{
    _Bool _invalidated;
    NSString *_bundleIdentifier;
    NSMutableArray *_pendingDataTypeCodes;
    double _lastLaunchAttempt;
    long long _launchErrorCount;
    HDProfile *_profile;
    HDAppAssertionManager *_assertionManager;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_pendingLaunchCompletions;
    NSMutableSet *_processAssertions;
    NSObject<OS_dispatch_source> *_processDeathSource;
}

@property(nonatomic) _Bool invalidated; // @synthesize invalidated=_invalidated;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *processDeathSource; // @synthesize processDeathSource=_processDeathSource;
@property(retain, nonatomic) NSMutableSet *processAssertions; // @synthesize processAssertions=_processAssertions;
@property(retain, nonatomic) NSMutableDictionary *pendingLaunchCompletions; // @synthesize pendingLaunchCompletions=_pendingLaunchCompletions;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak HDAppAssertionManager *assertionManager; // @synthesize assertionManager=_assertionManager;
@property(nonatomic) __weak HDProfile *profile; // @synthesize profile=_profile;
@property(readonly, nonatomic) long long launchErrorCount; // @synthesize launchErrorCount=_launchErrorCount;
@property(readonly, nonatomic) double lastLaunchAttempt; // @synthesize lastLaunchAttempt=_lastLaunchAttempt;
@property(readonly, nonatomic) NSMutableArray *pendingDataTypeCodes; // @synthesize pendingDataTypeCodes=_pendingDataTypeCodes;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) double nextLaunchAttempt;
- (void)_queue_invalidate;
- (void)invalidateForDataType:(long long)arg1;
- (void)extendForDataType:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_queue_acquireAssertionWithCompletion:(CDUnknownBlockType)arg1;
- (void)launchWithCompletion:(CDUnknownBlockType)arg1;
- (id)launchBundleIdentifier;
- (id)initWithBundleIdentifier:(id)arg1 assertionManager:(id)arg2 profile:(id)arg3 queue:(id)arg4;

@end

