//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PXSettings.h"

@interface PUPerformanceDiagnosticsSettings : PXSettings
{
    _Bool _shouldTracePerformance;
    double _scrollTestRampUpDuration;
    double _scrollTestCPUWarmupDuration;
    double _scrollTestCPUSustainDuration;
}

+ (id)settingsControllerModule;
+ (id)sharedInstance;
@property(nonatomic) double scrollTestCPUSustainDuration; // @synthesize scrollTestCPUSustainDuration=_scrollTestCPUSustainDuration;
@property(nonatomic) double scrollTestCPUWarmupDuration; // @synthesize scrollTestCPUWarmupDuration=_scrollTestCPUWarmupDuration;
@property(nonatomic) double scrollTestRampUpDuration; // @synthesize scrollTestRampUpDuration=_scrollTestRampUpDuration;
@property(nonatomic) _Bool shouldTracePerformance; // @synthesize shouldTracePerformance=_shouldTracePerformance;
- (void)setDefaultValues;
- (id)parentSettings;

@end

