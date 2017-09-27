//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CNAutocompleteUsageMonitor : NSObject
{
    id <CNAutocompleteProbeProvider> _probeProvider;
}

+ (void)userIgnoredResultsForRequest:(id)arg1 afterDelay:(double)arg2;
+ (void)userSelectedResult:(id)arg1 atSortedIndex:(unsigned long long)arg2 forRequest:(id)arg3 gotResultsFromDuet:(_Bool)arg4;
@property(readonly, nonatomic) id <CNAutocompleteProbeProvider> probeProvider; // @synthesize probeProvider=_probeProvider;
- (void).cxx_destruct;
- (void)userSawNumberOfResults:(unsigned long long)arg1 forBatch:(unsigned long long)arg2 includingNumberOfSuggestions:(unsigned long long)arg3 forRequest:(id)arg4;
- (void)userIgnoredResultsOfBatch:(unsigned long long)arg1 forRequest:(id)arg2 afterDelay:(double)arg3;
- (void)userSelectedResult:(id)arg1 atSortedIndex:(unsigned long long)arg2 forRequest:(id)arg3 gotResultsFromDuet:(_Bool)arg4;
- (id)initWithProbeProvider:(id)arg1;
- (id)init;

@end

