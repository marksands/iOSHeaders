//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <RelevanceEngine/RESingleton.h>

@class _DKKnowledgeStore;

@interface REDuetKnowledgeStore : RESingleton
{
    _DKKnowledgeStore *_knowledgeStore;
}

- (void).cxx_destruct;
- (void)_executeQuery:(id)arg1 responseQueue:(id)arg2 synchronouslyWithBatching:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)executeQuerySynchronouslyWithBatching:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)executeQuery:(id)arg1 responseQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_createTombstonesFromDuetEvents:(id)arg1;
- (id)_createActionsFromDuetEvents:(id)arg1;
- (id)_duetQueryForDonatedActionsAfterDate:(id)arg1 onStreams:(id)arg2 withPredicate:(id)arg3;
- (id)_duetDonationsStreams;
- (id)queryForDeletedActionsAfterDate:(id)arg1;
- (id)queryForAllRelevantShortcuts;
- (id)queryForDonatedActionsAfterDate:(id)arg1;
- (id)queryForAllDonatedActions;
- (id)_createEventsFromDuetEvents:(id)arg1;
- (id)_duetChargingEventStream;
- (id)queryForHistoricChargingEventsWithMinimumDuration:(double)arg1 inThePastDays:(unsigned long long)arg2;
- (id)queryForPredictedChargingEventsWithMinimumDuration:(double)arg1;
- (id)sleepInterval;
- (id)_createTimelineFromPredictionTimeline:(id)arg1 filterEmptyData:(_Bool)arg2;
- (id)queryForTopNApplications:(long long)arg1 withLikelihoodGreaterThan:(double)arg2 withTemporalResolution:(int)arg3;
- (id)init;
- (id)queryForUnfilteredDonations;
- (id)queryForDuetEventWithIdentifier:(id)arg1;

@end

