//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSArray, NSDate, NSString, _DKSyncHistory, _DKSyncPeer, _DKSyncWindow;

@protocol _DKSyncLocalKnowledgeStorage
- (_Bool)deleteEventsWithEventIDs:(NSArray *)arg1 error:(id *)arg2;
- (_Bool)saveEvents:(NSArray *)arg1 error:(id *)arg2;
- (_DKSyncHistory *)deletionsSyncHistoryForPeer:(_DKSyncPeer *)arg1 transportName:(NSString *)arg2 error:(id *)arg3;
- (_DKSyncHistory *)additionsSyncHistoryForPeer:(_DKSyncPeer *)arg1 transportName:(NSString *)arg2 error:(id *)arg3;
- (void)setLastSyncDownDeletionDate:(NSDate *)arg1 previousDate:(NSDate *)arg2 forPeer:(_DKSyncPeer *)arg3 transportName:(NSString *)arg4 error:(id *)arg5;
- (NSDate *)lastSyncDownDeletionDateForPeer:(_DKSyncPeer *)arg1 transportName:(NSString *)arg2 error:(id *)arg3;
- (_Bool)saveSyncedDownWindow:(_DKSyncWindow *)arg1 peer:(_DKSyncPeer *)arg2 transportName:(NSString *)arg3 error:(id *)arg4;
- (NSArray *)sortedSyncDownWindowsOverlappingBetweenDate:(NSDate *)arg1 andDate:(NSDate *)arg2 peer:(_DKSyncPeer *)arg3 error:(id *)arg4;
- (NSArray *)tombstonesSinceDate:(NSDate *)arg1 streamNames:(NSArray *)arg2 limit:(unsigned long long)arg3 endDate:(id *)arg4 error:(id *)arg5;
- (NSArray *)sortedEventsWithCreationDateBetweenDate:(NSDate *)arg1 andDate:(NSDate *)arg2 streamNames:(NSArray *)arg3 limit:(unsigned long long)arg4 fetchOrder:(long long)arg5 error:(id *)arg6;
@end

