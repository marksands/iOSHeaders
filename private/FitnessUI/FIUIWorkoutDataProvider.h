//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HKAnchoredObjectQuery, HKHealthStore, NSCalendar, NSMutableArray, NSMutableDictionary, _HKAnchoredObjectQueryManager;

@interface FIUIWorkoutDataProvider : NSObject
{
    HKHealthStore *_healthStore;
    _HKAnchoredObjectQueryManager *_queryManager;
    NSMutableDictionary *_workoutsByDay;
    NSMutableArray *_updateHandlers;
    HKAnchoredObjectQuery *_currentWorkoutAnchoredObjectQuery;
    NSCalendar *_gregorianCalendar;
    NSCalendar *_currentCalendar;
}

- (void).cxx_destruct;
- (void)_handleRemovedObjects:(id)arg1;
- (void)_handleAddedSamples:(id)arg1;
- (void)_runUpdateHandlers;
- (void)addUpdateHandler:(CDUnknownBlockType)arg1;
- (void)_fetchAllWorkoutsFromDate:(id)arg1;
- (void)stopFetching;
- (void)startFetchingFromDate:(id)arg1;
- (id)allWorkouts;
- (id)workoutsForDay:(id)arg1;
- (_Bool)hasWorkouts;
- (void)dealloc;
- (void)_timeZoneDidChange:(id)arg1;
- (void)_commonInit;
- (id)init;
- (id)initWithHealthStore:(id)arg1;

@end

