//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Vision/VNUniqueObservationClassCompoundRequest.h>

__attribute__((visibility("hidden")))
@interface VNImageAnalyzerCompoundRequest : VNUniqueObservationClassCompoundRequest
{
}

+ (Class)configurationClass;
+ (_Bool)warmUpRequestPerformer:(id)arg1 error:(id *)arg2;
+ (id)compoundRequestsForOriginalRequests:(id)arg1;
+ (void)_addCompoundRequestsToArray:(id)arg1 forModel:(unsigned long long)arg2 withGroupingConfigurations:(id)arg3;
- (_Bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id *)arg3;
- (_Bool)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;
- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)arg1;
- (_Bool)allowsCachingOfResults;
- (id)_configuredDetectorForRequestRevision:(unsigned long long)arg1 appliedConfigurationOptions:(id *)arg2 error:(id *)arg3;
- (id)initWithDetectorType:(id)arg1 groupingConfiguration:(id)arg2;

@end

