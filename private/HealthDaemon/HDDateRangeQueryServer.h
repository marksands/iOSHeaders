//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthDaemon/HDQueryServer.h>

#import "HDDataObserver.h"
#import "HDDatabaseProtectedDataObserver.h"

@class NSMutableDictionary, NSMutableSet, NSString;

@interface HDDateRangeQueryServer : HDQueryServer <HDDataObserver, HDDatabaseProtectedDataObserver>
{
    _Bool _resultsDirty;
    NSMutableDictionary *_timePeriodsBySampleType;
    NSMutableSet *_sampleTypesToReFetch;
}

- (void).cxx_destruct;
- (void)_queue_protectedDataBecameAvailable;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(_Bool)arg2;
- (id)_queue_timePeriodForType:(id)arg1;
- (void)_deliverErrorToClient:(id)arg1;
- (void)_queue_sendUpdatedResultsToClient;
- (void)_queue_updateTimePeriodsForSampleTypes:(id)arg1;
- (void)_queue_samplesOfTypesWereRemoved:(id)arg1;
- (void)_queue_samplesAdded:(id)arg1;
- (void)samplesOfTypesWereRemoved:(id)arg1 anchor:(id)arg2;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)_queue_start;
- (_Bool)_shouldObserveAllSampleTypes;
- (_Bool)_shouldListenForUpdates;
- (id)_sampleTypeFromNumber:(id)arg1;
- (id)dateRangeClientProxy;
- (id)initWithQueryUUID:(id)arg1 configuration:(id)arg2 clientProxy:(id)arg3 client:(id)arg4 delegate:(id)arg5 profile:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

