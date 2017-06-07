//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HKValueRange, NSArray, NSDate, NSDateComponents;

@interface HKDateIntervalCache : NSObject
{
    NSDate *_minAnchorDate;
    NSDate *_maxAnchorDate;
    double _previousTimeInterval;
    _Bool _datesInvalidated;
    NSArray *_cachedDates;
    unsigned long long _dateAnchorUnit;
    NSDateComponents *_dateSpacingComponents;
    NSDateComponents *_minorDateSpacingComponents;
    HKValueRange *_dateRange;
}

@property(readonly, nonatomic) HKValueRange *dateRange; // @synthesize dateRange=_dateRange;
@property(retain, nonatomic) NSDateComponents *minorDateSpacingComponents; // @synthesize minorDateSpacingComponents=_minorDateSpacingComponents;
@property(retain, nonatomic) NSDateComponents *dateSpacingComponents; // @synthesize dateSpacingComponents=_dateSpacingComponents;
@property(nonatomic) unsigned long long dateAnchorUnit; // @synthesize dateAnchorUnit=_dateAnchorUnit;
- (void).cxx_destruct;
- (id)_generateCachedDates;
- (id)_nextMajorDateForDate:(id)arg1 calendar:(id)arg2;
@property(readonly, nonatomic) NSArray *datePoints;
- (id)_maxAnchorDateFromDate:(id)arg1;
- (id)_minAnchorDateFromDate:(id)arg1;
- (void)_updateAnchorDates;
- (void)_invalidateCachedDates;
- (_Bool)setDateRange:(id)arg1;
- (id)init;

@end

