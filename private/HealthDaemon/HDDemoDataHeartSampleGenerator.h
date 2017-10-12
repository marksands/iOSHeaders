//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthDaemon/HDDemoDataBaseSampleGenerator.h>

@interface HDDemoDataHeartSampleGenerator : HDDemoDataBaseSampleGenerator
{
    double _nextRestingHeartRateSampleTime;
    double _nextWalkingHeartRateAverageSampleTime;
    double _lastRestingHeartRate;
    double _lastWalkingHeartRateAverage;
}

@property(nonatomic) double lastWalkingHeartRateAverage; // @synthesize lastWalkingHeartRateAverage=_lastWalkingHeartRateAverage;
@property(nonatomic) double lastRestingHeartRate; // @synthesize lastRestingHeartRate=_lastRestingHeartRate;
@property(nonatomic) double nextWalkingHeartRateAverageSampleTime; // @synthesize nextWalkingHeartRateAverageSampleTime=_nextWalkingHeartRateAverageSampleTime;
@property(nonatomic) double nextRestingHeartRateSampleTime; // @synthesize nextRestingHeartRateSampleTime=_nextRestingHeartRateSampleTime;
- (double)_computeWalkingHeartRateAverageForDemoPerson:(id)arg1 atTime:(double)arg2;
- (double)_computeRestingHeartRateForDemoPerson:(id)arg1 atTime:(double)arg2;
- (id)walkingHeartRateAverageForDemoPerson:(id)arg1 atTime:(double)arg2;
- (id)restingHeartRateForDemoPerson:(id)arg1 atTime:(double)arg2;
- (void)generateSamplesForDemoPerson:(id)arg1 atTime:(double)arg2 sampleDate:(id)arg3 objectCollection:(id)arg4;
- (void)setupWithDemoDataGenerator:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end
