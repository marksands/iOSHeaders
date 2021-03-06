//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HDProfile, NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>;

@interface HDAppAssertionManager : NSObject
{
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_appAssertions;
    NSMutableSet *_activeAssertions;
    NSMutableArray *_pendingAssertions;
}

@property(retain, nonatomic) NSMutableArray *pendingAssertions; // @synthesize pendingAssertions=_pendingAssertions;
@property(retain, nonatomic) NSMutableSet *activeAssertions; // @synthesize activeAssertions=_activeAssertions;
@property(retain, nonatomic) NSMutableDictionary *appAssertions; // @synthesize appAssertions=_appAssertions;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak HDProfile *profile; // @synthesize profile=_profile;
- (void).cxx_destruct;
- (void)_queue_assertionDidFinish:(id)arg1;
- (id)_queue_pendingAssertionsReadyForLaunch;
- (void)_queue_retryAppLaunchForAssertion:(id)arg1;
- (void)_queue_considerLaunchingApp;
- (void)_queue_invalidateAssertionWithBundleID:(id)arg1 dataCode:(long long)arg2 anchor:(id)arg3;
- (void)invalidateAssertionWithBundleID:(id)arg1 dataCode:(long long)arg2 anchor:(id)arg3;
- (void)_queue_extendAssertionWithBundleID:(id)arg1 dataCode:(long long)arg2 anchor:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)extendAssertionWithBundleID:(id)arg1 dataCode:(long long)arg2 anchor:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)initWithProfile:(id)arg1;
- (id)init;

@end

