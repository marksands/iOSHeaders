//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HKValueRange, NSArray;

@interface HKGraphSeriesDataBlock : NSObject
{
    NSArray *_chartPoints;
    HKValueRange *_yValueRange;
}

@property(readonly, nonatomic) HKValueRange *yValueRange; // @synthesize yValueRange=_yValueRange;
@property(copy, nonatomic) NSArray *chartPoints; // @synthesize chartPoints=_chartPoints;
- (void).cxx_destruct;

@end

