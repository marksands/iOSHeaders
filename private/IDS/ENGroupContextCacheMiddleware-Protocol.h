//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDS/ENGroupContextMiddleware-Protocol.h>

@class ENGroup, ENGroupContext, ENGroupID, ENStableGroupID;

@protocol ENGroupContextCacheMiddleware <ENGroupContextMiddleware>
- (void)deleteCachedValueForForGroupContext:(ENGroupContext *)arg1 withGroupID:(ENGroupID *)arg2 completion:(void (^)(void))arg3;
- (void)deleteAllKnownGroupsForGroupContext:(ENGroupContext *)arg1 completion:(void (^)(void))arg2;
- (void)groupContext:(ENGroupContext *)arg1 fetchAllKnownGroups:(void (^)(NSArray *))arg2;
- (void)groupContext:(ENGroupContext *)arg1 latestCachedGroupWithStableID:(ENStableGroupID *)arg2 completion:(void (^)(ENGroup *))arg3;
- (void)groupContext:(ENGroupContext *)arg1 cachedGroupWithID:(ENGroupID *)arg2 completion:(void (^)(ENGroup *))arg3;
- (void)groupContext:(ENGroupContext *)arg1 cacheGroup:(ENGroup *)arg2 completion:(void (^)(void))arg3;
- (long long)middlewareCacheCostForContext:(ENGroupContext *)arg1;
@end

