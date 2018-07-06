//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "_DKSyncLocalKnowledgeStorage.h"

@class _DKKnowledgeStorage;

@interface _DKSyncLocalKnowledgeStorage : NSObject <_DKSyncLocalKnowledgeStorage>
{
    _DKKnowledgeStorage *_storage;
}

+ (void)_updateEventStatsWithFetchTombstonesTotal:(unsigned long long)arg1 streamNameCounts:(id)arg2;
+ (void)_updateEventStatsWithFetchEventsTotal:(unsigned long long)arg1 streamNameCounts:(id)arg2;
@property(retain, nonatomic) _DKKnowledgeStorage *storage; // @synthesize storage=_storage;
- (void).cxx_destruct;
- (_Bool)deleteEventsWithEventIDs:(id)arg1 error:(id *)arg2;
- (_Bool)saveEvents:(id)arg1 error:(id *)arg2;
- (id)deletionsSyncHistoryForPeer:(id)arg1 transportName:(id)arg2 error:(id *)arg3;
- (id)additionsSyncHistoryForPeer:(id)arg1 transportName:(id)arg2 error:(id *)arg3;
- (id)syncHistoryForPeer:(id)arg1 streamName:(id)arg2 transportName:(id)arg3 type:(id)arg4 error:(id *)arg5;
- (void)setLastSyncDownDeletionDate:(id)arg1 previousDate:(id)arg2 forPeer:(id)arg3 transportName:(id)arg4 error:(id *)arg5;
- (id)lastSyncDownDeletionDateForPeer:(id)arg1 transportName:(id)arg2 error:(id *)arg3;
- (_Bool)saveSyncedDownWindow:(id)arg1 peer:(id)arg2 transportName:(id)arg3 error:(id *)arg4;
- (id)sortedSyncDownWindowsOverlappingBetweenDate:(id)arg1 andDate:(id)arg2 peer:(id)arg3 error:(id *)arg4;
- (id)deletedEventIDsSinceDate:(id)arg1 streamNames:(id)arg2 limit:(unsigned long long)arg3 endDate:(id *)arg4 error:(id *)arg5;
- (id)sortedEventsWithCreationDateBetweenDate:(id)arg1 andDate:(id)arg2 streamNames:(id)arg3 limit:(unsigned long long)arg4 fetchOrder:(long long)arg5 error:(id *)arg6;
- (id)initWithKnowledgeStorage:(id)arg1;

@end

