//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CNAutocompleteObservableBuilder.h"

@class NSString;

@interface CNAutocompleteObservableBuilder : NSObject <CNAutocompleteObservableBuilder>
{
    _Bool _supplementalResultsUseNetwork;
    id <CNAutocompleteObservableBuilderBatchingHelper> _batchingHelper;
    id <CNAutocompleteProbeProvider> _probeProvider;
    double _networkActivityStartDelay;
    CDUnknownBlockType _networkActivityDidStartHandler;
    CDUnknownBlockType _networkActivityDidStopHandler;
    id <CNScheduler> _scheduler;
}

+ (_Bool)supplementalResultsUseNetwork:(unsigned long long)arg1;
+ (id)builderWithSearchType:(unsigned long long)arg1 scheduler:(id)arg2 probeProvider:(id)arg3;
@property(readonly, nonatomic) id <CNScheduler> scheduler; // @synthesize scheduler=_scheduler;
@property(copy, nonatomic) CDUnknownBlockType networkActivityDidStopHandler; // @synthesize networkActivityDidStopHandler=_networkActivityDidStopHandler;
@property(copy, nonatomic) CDUnknownBlockType networkActivityDidStartHandler; // @synthesize networkActivityDidStartHandler=_networkActivityDidStartHandler;
@property(nonatomic) _Bool supplementalResultsUseNetwork; // @synthesize supplementalResultsUseNetwork=_supplementalResultsUseNetwork;
@property(nonatomic) double networkActivityStartDelay; // @synthesize networkActivityStartDelay=_networkActivityStartDelay;
@property(readonly, nonatomic) id <CNAutocompleteProbeProvider> probeProvider; // @synthesize probeProvider=_probeProvider;
@property(readonly, nonatomic) id <CNAutocompleteObservableBuilderBatchingHelper> batchingHelper; // @synthesize batchingHelper=_batchingHelper;
- (void).cxx_destruct;
- (id)makeObservable;
- (id)combineObservablesInBatch:(id)arg1 scheduler:(id)arg2;
- (void)addCalendarServerObservable:(id)arg1;
- (void)addDirectoryServerObservable:(id)arg1;
- (void)addSupplementalObservable:(id)arg1;
- (void)addDuetObservable:(id)arg1 doOnTimeout:(CDUnknownBlockType)arg2;
- (void)addSuggestionsObservable:(id)arg1;
- (void)addCoreRecentsObservable:(id)arg1;
- (void)addContactsObservable:(id)arg1;
- (id)probeObservable:(id)arg1 forPerformanceWithBlock:(CDUnknownBlockType)arg2;
- (id)initWithBatchingHelper:(id)arg1 probeProvider:(id)arg2 scheduler:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

