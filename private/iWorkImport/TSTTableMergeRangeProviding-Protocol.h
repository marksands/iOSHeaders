//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TSTCellRegion, TSTMergeListWrapper;

@protocol TSTTableMergeRangeProviding <NSObject>
- (TSTCellRegion *)expandCellRegionToCoverMergedCells:(TSTCellRegion *)arg1;
- (struct TSUCellRect)expandCellRangeToCoverMergedCells:(struct TSUCellRect)arg1;
- (TSTMergeListWrapper *)mergesIntersectingCellRegion:(TSTCellRegion *)arg1;
- (TSTMergeListWrapper *)mergesIntersectingRange:(struct TSUCellRect)arg1;
@end

