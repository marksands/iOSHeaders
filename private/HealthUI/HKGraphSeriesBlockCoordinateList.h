//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface HKGraphSeriesBlockCoordinateList : NSObject
{
}

+ (id)coordinateListWithCoordinates:(id)arg1 blockPath:(CDStruct_6ca94699)arg2;
+ (id)coordinateListByCombiningSubCoordinates:(id)arg1 chartableValueRange:(id)arg2;
- (long long)_numCoordinatesInChartableRange:(id)arg1;
- (id)_coordinatesInChartableRange:(id)arg1;
- (id)lastCoordinateWithTransform:(struct CGAffineTransform)arg1 roundToViewScale:(_Bool)arg2;
- (id)firstCoordinateWithTransform:(struct CGAffineTransform)arg1 roundToViewScale:(_Bool)arg2;
- (void)_enumerateCoordinatesWithTransform:(struct CGAffineTransform)arg1 chartableValueRange:(id)arg2 roundToViewScale:(_Bool)arg3 block:(CDUnknownBlockType)arg4;
- (void)enumerateCoordinatesWithTransform:(struct CGAffineTransform)arg1 roundToViewScale:(_Bool)arg2 block:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) CDStruct_6ca94699 blockPathEnd;
@property(readonly, nonatomic) CDStruct_6ca94699 blockPathStart;
@property(readonly, nonatomic) long long numCoordinates;
@property(readonly, nonatomic) NSArray *coordinates;

@end

