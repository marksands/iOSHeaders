//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreDuet/_DKSyncCompositeOperation.h>

@class NSDate, _CDMutablePerfMetric, _DKSync2Policy, _DKSyncHistory, _DKSyncPeer, _DKSyncType;

@interface _DKPerformSyncDownPeerDeletionsOperation : _DKSyncCompositeOperation
{
    id <_DKSyncLocalKnowledgeStorage> _localStorage;
    id <_DKSyncRemoteKnowledgeStorage> _transport;
    _DKSyncPeer *_peer;
    _DKSync2Policy *_policy;
    _DKSyncType *_type;
    _CDMutablePerfMetric *_perfMetric;
    struct _CDPerfEvent _perfEvent;
    _Bool _highPriority;
    _DKSyncHistory *_history;
    NSDate *_highWaterMark;
    unsigned long long _batchNumber;
}

+ (void)_updateEventStatsWithTotal:(unsigned long long)arg1 transportType:(long long)arg2;
+ (void)_updateEventStatsWithPreviousSyncDate:(id)arg1 transportType:(long long)arg2;
- (void).cxx_destruct;
- (void)endPerfMetrics;
- (void)startPerfMetrics;
- (void)endOperation;
- (void)handleFetchedDeletedEventIDs:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 untilDate:(id)arg4;
- (void)performSyncDownPeerDeletionsWithPreviousUntilDate:(id)arg1;
- (void)performSyncDownPeerDeletionsWithHighWaterMark:(id)arg1 orError:(id)arg2;
- (void)performSyncDownPeerDeletions;
- (void)main;
- (_Bool)isAsynchronous;
- (id)initWithParent:(id)arg1 localStorage:(id)arg2 transport:(id)arg3 peer:(id)arg4 policy:(id)arg5 type:(id)arg6;

@end

