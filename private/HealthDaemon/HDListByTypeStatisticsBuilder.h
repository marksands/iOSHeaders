//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthDaemon/HDStatisticsBuilder.h>

@class NSCalendar, NSDateInterval, NSMutableArray, NSMutableDictionary, NSNumber;

@interface HDListByTypeStatisticsBuilder : HDStatisticsBuilder
{
    NSDateInterval *_baseInterval;
    NSDateInterval *_sleepInterval;
    NSMutableArray *_lastUpdatedDataTypes;
    NSMutableDictionary *_calculatorByTypes;
    NSMutableDictionary *_statisticsByTypes;
    NSMutableDictionary *_summariesByTypes;
    NSMutableDictionary *_quantitiesByDataType;
    NSMutableDictionary *_datesByDataType;
    NSCalendar *_calendar;
    NSNumber *_lastAnchor;
    CDUnknownBlockType _shouldStopProcessing;
}

@property(copy, nonatomic) CDUnknownBlockType shouldStopProcessing; // @synthesize shouldStopProcessing=_shouldStopProcessing;
@property(retain, nonatomic) NSNumber *lastAnchor; // @synthesize lastAnchor=_lastAnchor;
- (void).cxx_destruct;
- (id)_latestAnchorFromDatabase:(id)arg1 withError:(id *)arg2;
- (id)_sqlListPlaceholderOfCount:(long long)arg1;
- (id)_sleepTypePredicate;
- (id)_sleepDatePredicate;
- (id)_predicateForTypesWithoutSleep:(id)arg1;
- (id)_predicateForTypesWithSleep:(id)arg1;
- (id)_predicateForAllTypes;
- (id)_predicateForObjectsOfTypes:(id)arg1;
- (id)updatedSummaries;
- (void)_updateSummaryTypeFromSample:(id)arg1;
- (id)_calculatedSummariesForDayWithDatabase:(id)arg1 error:(id *)arg2;
- (id)summariesForDayWithError:(id *)arg1;
- (_Bool)_setIfLatestTimestamp:(double)arg1 forObjectType:(id)arg2;
- (_Bool)_setIfLatestDate:(id)arg1 forObjectType:(id)arg2;
- (_Bool)_enumerateSamplesWithDatabase:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (_Bool)_enumerateSamplesOfType:(long long)arg1 interval:(id)arg2 database:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (id)_dateIntervalForType:(long long)arg1;
- (unsigned long long)mergeStrategyForType:(id)arg1;
- (id)collectionCalculatorForType:(id)arg1 from:(double)arg2 to:(double)arg3;
- (id)timeIntervalCalculatorForType:(id)arg1;
- (id)discreteCollectionCalculatorForType:(id)arg1;
- (void)_updateStatisticsForDataType:(id)arg1;
- (void)_updateStatisticsForAllCalculators;
- (_Bool)_resetCalculatorForDataType:(long long)arg1 bucketStartTime:(double)arg2 bucketEndTime:(double)arg3;
- (_Bool)addQuantitySamplesForType:(long long)arg1 value:(double)arg2 bucketStartTime:(double)arg3 bucketEndTime:(double)arg4 startTime:(double)arg5 endTime:(double)arg6 sourceId:(long long)arg7 enforceLatest:(_Bool)arg8;
- (_Bool)addCategorySamplesForType:(long long)arg1 value:(double)arg2 startTime:(double)arg3 endTime:(double)arg4 sourceId:(long long)arg5 enforceLatest:(_Bool)arg6;
- (_Bool)_addSleepSample:(id)arg1;
- (_Bool)_addWorkoutSample:(id)arg1;
- (_Bool)wasUpdated;
- (void)updateValuesWithAddedSample:(id)arg1 anchor:(id)arg2;
- (id)calculatedQuantitiesByDataType;
- (_Bool)_queryForSleepSamplesWithDatabase:(id)arg1 error:(id *)arg2;
- (_Bool)_queryForWorkoutSamplesWithDatabase:(id)arg1 error:(id *)arg2;
- (id)_sleepQueryResultBuilder;
- (id)_calculatedValuesForDatabase:(id)arg1 error:(id *)arg2;
- (id)initWithProfile:(id)arg1 baseInterval:(id)arg2 sleepInterval:(id)arg3 calendar:(id)arg4;

@end

