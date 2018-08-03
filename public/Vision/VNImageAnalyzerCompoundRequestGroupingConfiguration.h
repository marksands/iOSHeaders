//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface VNImageAnalyzerCompoundRequestGroupingConfiguration : NSObject
{
    NSMutableDictionary *_detectorConfigurationOptions;
    NSMutableArray *_originalRequests;
    NSMutableArray *_observationClasses;
}

- (void).cxx_destruct;
- (_Bool)preferBackgroundProcessing;
- (id)processingDevice;
- (id)observationClasses;
- (id)originalRequests;
- (id)detectorConfigurationOptions;
- (void)addOriginalRequest:(id)arg1 withObservationClass:(Class)arg2;
- (void)setDetectorConfigurationOption:(id)arg1 value:(id)arg2;
- (id)init;

@end

