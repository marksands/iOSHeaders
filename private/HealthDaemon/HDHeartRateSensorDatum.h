//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/HDQuantityDatum.h>

@class HKQuantity;

@interface HDHeartRateSensorDatum : HDQuantityDatum
{
}

@property(readonly, nonatomic) HKQuantity *heartRate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 dateInterval:(id)arg2 heartRate:(id)arg3 resumeContext:(id)arg4;

@end

