//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HKQuantity, HKQuantityType, NSDate, NSDateComponents;

@interface HKQuantityTypeDataSourceValue : NSObject
{
    HKQuantity *_sumQuantity;
    HKQuantity *_minQuantity;
    HKQuantity *_maxQuantity;
    HKQuantity *_averageQuantity;
    HKQuantityType *_quantityType;
    long long _recordCount;
    NSDateComponents *_statisticsInterval;
    NSDate *_startDate;
    NSDate *_endDate;
}

@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(retain, nonatomic) NSDateComponents *statisticsInterval; // @synthesize statisticsInterval=_statisticsInterval;
@property(nonatomic) long long recordCount; // @synthesize recordCount=_recordCount;
@property(retain, nonatomic) HKQuantityType *quantityType; // @synthesize quantityType=_quantityType;
@property(retain, nonatomic) HKQuantity *averageQuantity; // @synthesize averageQuantity=_averageQuantity;
@property(retain, nonatomic) HKQuantity *maxQuantity; // @synthesize maxQuantity=_maxQuantity;
@property(retain, nonatomic) HKQuantity *minQuantity; // @synthesize minQuantity=_minQuantity;
@property(retain, nonatomic) HKQuantity *sumQuantity; // @synthesize sumQuantity=_sumQuantity;
- (void).cxx_destruct;

@end

