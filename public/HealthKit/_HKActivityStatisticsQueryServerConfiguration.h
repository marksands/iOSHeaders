//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthKit/HKQueryServerConfiguration.h>

@class NSDate, NSDateComponents;

__attribute__((visibility("hidden")))
@interface _HKActivityStatisticsQueryServerConfiguration : HKQueryServerConfiguration
{
    NSDate *_startDate;
    NSDate *_endDate;
    NSDateComponents *_moveIntervalComponents;
    NSDateComponents *_exerciseIntervalComponents;
    double _updateInterval;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) double updateInterval; // @synthesize updateInterval=_updateInterval;
@property(copy, nonatomic) NSDateComponents *exerciseIntervalComponents; // @synthesize exerciseIntervalComponents=_exerciseIntervalComponents;
@property(copy, nonatomic) NSDateComponents *moveIntervalComponents; // @synthesize moveIntervalComponents=_moveIntervalComponents;
@property(copy, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(copy, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

