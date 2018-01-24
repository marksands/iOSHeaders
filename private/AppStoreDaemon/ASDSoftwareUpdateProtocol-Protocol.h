//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@protocol ASDSoftwareUpdateProtocol <NSObject>
- (void)showApplicationUpdatesBulletin;
- (void)showApplicationBadgeForPendingUpdates;
- (void)removeUpdateBulletins;
- (void)hideApplicationBadgeForPendingUpdates;
- (void)updateAllWithOrder:(NSArray *)arg1 completionBlock:(void (^)(_Bool, NSArray *, NSError *))arg2;
- (void)updateAllWithJobResults:(void (^)(_Bool, NSArray *, NSError *))arg1;
- (void)reloadFromServerInBackgroundWithCompletionBlock:(void (^)(NSArray *, NSError *))arg1;
- (void)reloadManagedUpdatesWithCompletionBlock:(void (^)(NSArray *, NSError *))arg1;
- (void)reloadFromServerWithCompletionBlock:(void (^)(NSArray *, NSError *))arg1;
- (void)refreshUpdatesWithCompletionBlock:(NSArray *)arg1 userInitiated:(_Bool)arg2 completionBlock:(void (^)(_Bool, NSError *))arg3;
- (void)refreshUpdateCountWithCompletionBlock:(void (^)(long long, NSError *))arg1;
- (void)migrateUpdatesStoreWithCompletionBlock:(void (^)(_Bool, NSError *))arg1;
- (void)getManagedUpdatesWithCompletionBlock:(void (^)(NSArray *, NSError *))arg1;
- (void)getUpdatesWithCompletionBlock:(void (^)(NSArray *, NSError *))arg1;
- (void)getUpdatesMetricsWithCompletionBlock:(void (^)(ASDSoftwareUpdateMetrics *, NSError *))arg1;
- (void)getUpdatesIncludingMetricsWithCompletionBlock:(void (^)(NSArray *, NSError *))arg1;
- (void)clearExpiredUpdateHistoryWithCompletionBlock:(void (^)(_Bool, NSError *))arg1;
@end

