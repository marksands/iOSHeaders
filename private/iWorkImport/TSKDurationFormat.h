//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSKFormat.h>

#import "NSCopying.h"

__attribute__((visibility("hidden")))
@interface TSKDurationFormat : TSKFormat <NSCopying>
{
    _Bool _useAutomaticUnits;
    int _durationUnitSmallest;
    int _durationUnitLargest;
    int _durationStyle;
}

@property(readonly, nonatomic) int durationStyle; // @synthesize durationStyle=_durationStyle;
@property(readonly, nonatomic) int durationUnitLargest; // @synthesize durationUnitLargest=_durationUnitLargest;
@property(readonly, nonatomic) int durationUnitSmallest; // @synthesize durationUnitSmallest=_durationUnitSmallest;
@property(readonly, nonatomic) _Bool useAutomaticUnits; // @synthesize useAutomaticUnits=_useAutomaticUnits;
- (id)asDurationFormat;
- (id)stringFromDurationTimeInterval:(double)arg1 locale:(id)arg2 showPrecision:(_Bool)arg3;
- (id)stringFromDurationTimeInterval:(double)arg1 locale:(id)arg2;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithUseAutomaticUnits:(_Bool)arg1 durationUnitSmallest:(int)arg2 durationUnitLargest:(int)arg3 durationStyle:(int)arg4;
- (id)initWithFormatType:(int)arg1;

@end

