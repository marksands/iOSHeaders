//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate;

@protocol GEOTransitTimeRange <NSObject>
@property(readonly, nonatomic) NSDate *endDate;
@property(readonly, nonatomic) NSDate *startDate;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) double startTime;
- (_Bool)contains:(NSDate *)arg1;
@end

