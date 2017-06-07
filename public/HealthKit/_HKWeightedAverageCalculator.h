//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HKUnit;

@interface _HKWeightedAverageCalculator : NSObject
{
    struct HDStatisticsCalculator<double> _standardStatistics;
    double _currentIntervalStart;
    struct HDStatisticsCalculator<double> _previousIntervals;
    struct HDStatisticsCalculator<double> _currentInterval;
    double _latestTime;
    HKUnit *_unit;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)getStatistics;
- (_Bool)addValue:(double)arg1 startTime:(double)arg2 endTime:(double)arg3;
- (id)initWithStartTime:(double)arg1 unit:(id)arg2;

@end
