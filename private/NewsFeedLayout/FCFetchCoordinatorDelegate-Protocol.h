//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FCFetchCoordinator, NSMutableSet, NSOperation, NSSet;

@protocol FCFetchCoordinatorDelegate <NSObject>
- (void)fetchCoordinator:(FCFetchCoordinator *)arg1 addFetchOperation:(NSOperation *)arg2 context:(id)arg3;
- (NSOperation *)fetchCoordinator:(FCFetchCoordinator *)arg1 fetchOperationForKeys:(NSSet *)arg2 context:(id)arg3 qualityOfService:(long long)arg4 relativePriority:(long long)arg5;
- (void)fetchCoordinator:(FCFetchCoordinator *)arg1 filterKeysToFetch:(NSMutableSet *)arg2 isFirstAttempt:(_Bool)arg3 context:(id)arg4;
@end

