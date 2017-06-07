//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDate, NSString, TSCERemoteDataCoordinator, TSCERemoteDataSpecifierSet, TSUNetworkReachability;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface TSCERemoteDataSourceFetcher : NSObject
{
    _Bool _offline;
    _Bool _doFullRefresh;
    _Bool _earlyRefreshRequested;
    TSCERemoteDataCoordinator *_coordinator;
    NSObject<OS_dispatch_queue> *_queue;
    TSCERemoteDataSpecifierSet *_allRequestedKeys;
    TSCERemoteDataSpecifierSet *_newlyRequestedKeys;
    TSUNetworkReachability *_serverReachability;
    TSUNetworkReachability *_internetReachability;
    NSObject<OS_dispatch_source> *_timer;
    NSDate *_lastRequestDate;
    NSDate *_lastFullRefreshDate;
    long long _state;
    long long _requestsInFlight;
}

+ (id)fetcherWithCoordinator:(id)arg1;
@property long long requestsInFlight; // @synthesize requestsInFlight=_requestsInFlight;
@property long long state; // @synthesize state=_state;
@property _Bool earlyRefreshRequested; // @synthesize earlyRefreshRequested=_earlyRefreshRequested;
@property _Bool doFullRefresh; // @synthesize doFullRefresh=_doFullRefresh;
@property _Bool offline; // @synthesize offline=_offline;
@property(retain, nonatomic) NSDate *lastFullRefreshDate; // @synthesize lastFullRefreshDate=_lastFullRefreshDate;
@property(retain, nonatomic) NSDate *lastRequestDate; // @synthesize lastRequestDate=_lastRequestDate;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) TSUNetworkReachability *internetReachability; // @synthesize internetReachability=_internetReachability;
@property(retain, nonatomic) TSUNetworkReachability *serverReachability; // @synthesize serverReachability=_serverReachability;
@property(readonly, nonatomic) TSCERemoteDataSpecifierSet *newlyRequestedKeys; // @synthesize newlyRequestedKeys=_newlyRequestedKeys;
@property(readonly, nonatomic) TSCERemoteDataSpecifierSet *allRequestedKeys; // @synthesize allRequestedKeys=_allRequestedKeys;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) __weak TSCERemoteDataCoordinator *coordinator; // @synthesize coordinator=_coordinator;
- (void).cxx_destruct;
- (void)autoCompleteQuotesWithInput:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchQuotesWithTickers:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sendRequestForKeys:(id)arg1;
- (id)fetchableKeysFromSet:(id)arg1;
- (_Bool)canFetchKey:(id)arg1;
@property(readonly, nonatomic) NSString *reachabilityCheckHost;
@property(readonly, nonatomic) double recommendedTimeBetweenRequestsForWWAN;
@property(readonly, nonatomic) double recommendedTimeBetweenRequests;
@property(readonly, nonatomic) double minimumTimeBetweenRequests;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly, nonatomic) long long dataKind;
- (void)stopUpdating;
- (void)resumeUpdating;
- (void)p_refreshSpecifiers;
- (void)requestCompleted;
- (void)requestLaunched;
- (void)enqueueRequestForKeys:(id)arg1;
- (id)removeRemoteDataInterest:(id)arg1;
- (id)addRemoteDataInterest:(id)arg1;
- (void)dealloc;
- (void)p_configureReachabilityWithHost:(id)arg1;
- (id)initWithCoordinator:(id)arg1;
- (id)init;

@end

