//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface TSTPasteMap : NSObject
{
    set_fd9a82b7 mRowTgtToPbMaps;
    set_fd9a82b7 mColumnTgtToPbMaps;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)createTgtMergeMapFromPbMergeMap:(id)arg1 andTgtRegion:(id *)arg2 andTgtBodyRange:(struct TSUCellRect)arg3;
- (vector_e87daf7b *)p_tgtRangesForPbRange:(struct TSUCellRect)arg1 givenColumnMaps:(const multiset_10d8bac2 *)arg2 rowMaps:(const multiset_10d8bac2 *)arg3;
- (id)createTgtRegionByIntersectingPbRegion:(id)arg1 andTgtRegion:(id)arg2;
- (id)createTgtRegionFromPbRegion:(id)arg1;
- (struct TSUCellCoord)pbCellIDForTgtCellID:(struct TSUCellCoord)arg1;
- (struct TSUCellRect)pbRangeForTgtRange:(struct TSUCellRect)arg1;
- (struct TSUCellCoord)p_tgtCellIDForPbCellID:(struct TSUCellCoord)arg1 givenColumnMaps:(const multiset_10d8bac2 *)arg2 rowMaps:(const multiset_10d8bac2 *)arg3;
- (struct TSUCellRect)p_tgtRangeForPbRange:(struct TSUCellRect)arg1 givenColumnMaps:(const multiset_10d8bac2 *)arg2 rowMaps:(const multiset_10d8bac2 *)arg3;
- (struct _NSRange)p_tgtRangeFromPbRange:(const struct TSTColumnOrRowMap *)arg1 andMap:(const multiset_10d8bac2 *)arg2;
- (unsigned short)p_indexForTgtToPbMaps:(set_fd9a82b7 *)arg1 andMap:(struct TSTColumnOrRowMap *)arg2;
- (id)initWithPbTable:(id)arg1 pbRange:(struct TSUCellRect)arg2 tgtTable:(id)arg3 tgtRange:(struct TSUCellRect)arg4 flag:(int)arg5;
- (id)initWithPbRange:(struct TSUCellRect)arg1 tgtRange:(struct TSUCellRect)arg2;

@end

