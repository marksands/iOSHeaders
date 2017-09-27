//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSMutableSet, NSObject<OS_dispatch_queue>, NSOperationQueue, NSSet;

@interface MPStoreFollowStatusController : NSObject
{
    NSOperationQueue *_serverOperationsQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSSet *_followed;
    NSMutableSet *_transientFollowed;
    NSMutableSet *_transientUnfollowed;
    NSDate *_lastFollowListUpdate;
    _Bool _isAutoFollowing;
    NSDate *_lastAutoFollowingUpdate;
}

+ (id)activeDSID;
+ (id)sharedController;
- (void).cxx_destruct;
- (void)setAutoFollowStatus:(_Bool)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)autoFollowStatusIsEnabled:(CDUnknownBlockType)arg1;
- (_Bool)_shouldUpdate;
- (void)_updateFollowsFromStoreDictionary:(id)arg1;
- (id)_autofollowStatusURLFromBag:(id)arg1;
- (id)_enableAutofollowURLFromBag:(id)arg1 enable:(_Bool)arg2;
- (id)_followingURLFromBag:(id)arg1 accountDSID:(id)arg2;
- (id)_displayFollows;
- (void)_performCallback:(CDUnknownBlockType)arg1;
- (void)_barrierWrite:(CDUnknownBlockType)arg1;
- (void)_serialRead:(CDUnknownBlockType)arg1;
- (void)_actuallyUpdateCache:(CDUnknownBlockType)arg1;
- (void)_enqueueFollows:(id)arg1 unfollow:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) _Bool hasCacheEntries;
- (void)prepareCache:(CDUnknownBlockType)arg1;
- (void)unfollow:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)follow:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)cachedIsFollowingPerson:(id)arg1;
- (void)getFollowedStoreIDs:(CDUnknownBlockType)arg1;
- (void)getIsFollowingPerson:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;

@end

