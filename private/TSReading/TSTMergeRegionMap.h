//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TSReading/TSPObject.h>

@interface TSTMergeRegionMap : TSPObject
{
    struct hash_map<TSUColumnRowCoordinate, TSUColumnRowCoordinate, TSTCellIDHasher, std::__1::equal_to<TSUColumnRowCoordinate>, std::__1::allocator<std::__1::pair<const TSUColumnRowCoordinate, TSUColumnRowCoordinate>>> mCellIDToMergeRegionTopLeft;
    struct hash_map<TSUColumnRowCoordinate, TSUColumnRowSize, TSTCellIDHasher, std::__1::equal_to<TSUColumnRowCoordinate>, std::__1::allocator<std::__1::pair<const TSUColumnRowCoordinate, TSUColumnRowSize>>> mMergeRegionTopLeftToMergeRegionSize;
    CDStruct_5f1f7aa9 mUnionedMergeRange;
}

+ (id)mergeRegionMapFromMap:(id)arg1 intersectingRange:(CDStruct_5f1f7aa9)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)hasRangeSpanningRows;
- (id)mergedGridIndicesForDimension:(int)arg1;
- (_Bool)find:(CDStruct_5f1f7aa9)arg1;
- (CDStruct_5f1f7aa9)unionedMergeRange;
- (_Bool)partiallyIntersectsCellRegion:(id)arg1;
- (_Bool)partiallyIntersectsCellRange:(CDStruct_5f1f7aa9)arg1;
- (CDStruct_5f1f7aa9)mergedRangeForCellID:(CDStruct_0441cfb5)arg1;
- (_Bool)remove:(CDStruct_5f1f7aa9)arg1;
- (_Bool)insert:(CDStruct_5f1f7aa9)arg1;
- (id)description;
- (unsigned long long)count;
- (id)iterator;
- (id)initWithContext:(id)arg1;
- (id)initRegionMapFromMap:(id)arg1 intersectingRange:(CDStruct_5f1f7aa9)arg2;
- (id)initRegionMapFromMap:(id)arg1 rowRemapping:(id)arg2;

@end

