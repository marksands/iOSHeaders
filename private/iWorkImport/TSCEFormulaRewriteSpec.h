//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TSCEFormulaRewriteInfo_RowColumnInfo, TSCEFormulaRewrite_MergeOriginMovedInfo, TSCEFormulaRewrite_RegionMergedInfo, TSCEFormulaRewrite_RegionMovedInfo, TSCERewriteTableIDInfo, TSCETableTransposedInfo;

__attribute__((visibility("hidden")))
@interface TSCEFormulaRewriteSpec : NSObject
{
    int _type;
    UUIDData_5fbc143e _tableUID;
    UUIDData_5fbc143e _conditionalStyleOwnerUID;
    _Bool _isInverse;
    TSCETableTransposedInfo *_transposedInfo;
    TSCEFormulaRewriteInfo_RowColumnInfo *_rowColumnInfo;
    TSCEFormulaRewrite_RegionMovedInfo *_regionMovedInfo;
    TSCEFormulaRewrite_RegionMergedInfo *_mergeInfo;
    TSCEFormulaRewrite_MergeOriginMovedInfo *_mergeOriginMovedInfo;
    TSCERewriteTableIDInfo *_tableIDInfo;
}

@property(nonatomic) _Bool isInverse; // @synthesize isInverse=_isInverse;
@property(readonly, nonatomic) int rewriteType; // @synthesize rewriteType=_type;
@property(readonly, retain, nonatomic) TSCERewriteTableIDInfo *tableIDInfo; // @synthesize tableIDInfo=_tableIDInfo;
@property(readonly, retain, nonatomic) TSCEFormulaRewrite_MergeOriginMovedInfo *mergeOriginMovedInfo; // @synthesize mergeOriginMovedInfo=_mergeOriginMovedInfo;
@property(readonly, retain, nonatomic) TSCEFormulaRewrite_RegionMergedInfo *mergeInfo; // @synthesize mergeInfo=_mergeInfo;
@property(readonly, retain, nonatomic) TSCEFormulaRewrite_RegionMovedInfo *regionMovedInfo; // @synthesize regionMovedInfo=_regionMovedInfo;
@property(readonly, retain, nonatomic) TSCEFormulaRewriteInfo_RowColumnInfo *rowColumnInfo; // @synthesize rowColumnInfo=_rowColumnInfo;
@property(readonly, retain, nonatomic) TSCETableTransposedInfo *transposedInfo; // @synthesize transposedInfo=_transposedInfo;
@property(readonly, nonatomic) UUIDData_5fbc143e conditionalStyleOwnerUID; // @synthesize conditionalStyleOwnerUID=_conditionalStyleOwnerUID;
@property(readonly, nonatomic) UUIDData_5fbc143e tableUID; // @synthesize tableUID=_tableUID;
- (id).cxx_construct;
- (void)saveToMessage:(struct FormulaRewriteSpecArchive *)arg1 archiver:(id)arg2;
- (id)initFromMessage:(const struct FormulaRewriteSpecArchive *)arg1;
- (vector_4dc5f307)expandedRowColumnUuids;
- (struct TSCERangeCoordinate)affectedRange;
- (void)clearTableIndexes;
- (void)didModifyTable:(id)arg1;
- (void)didModifySrcTable:(id)arg1 dstTable:(id)arg2;
- (void)willModifySrcTable:(id)arg1 dstTable:(id)arg2;
- (void)willModifyTable:(id)arg1;
- (UUIDData_5fbc143e)previousTableUIDForUpdatedTableUID:(const UUIDData_5fbc143e *)arg1 updatedCellCoordinate:(struct TSUCellCoord)arg2;
- (UUIDData_5fbc143e)updatedTableUIDForOriginalTableUID:(const UUIDData_5fbc143e *)arg1 originalCellCoordinate:(struct TSUCellCoord)arg2;
- (struct TSUCellCoord)previousCellCoordinateForTableUID:(const UUIDData_5fbc143e *)arg1 updatedCellCoordinate:(struct TSUCellCoord)arg2;
- (struct TSUCellCoord)updatedCellCoordinateForTableUID:(const UUIDData_5fbc143e *)arg1 originalCellCoordinate:(struct TSUCellCoord)arg2;
- (UUIDData_5fbc143e)affectedConditionalStyleOwnerUID;
- (unordered_set_c6a929bd)affectedOwnerUIDs;
- (UUIDData_5fbc143e)affectedOwnerUID;
- (id)description;
- (id)miniDescription;
- (void)dealloc;
- (id)initForTableIDReassignment:(const UUIDMap_b66c2694 *)arg1;
- (id)initForMergeOriginsMovedWithMap:(const unordered_map_ddbde191 *)arg1 reverseMap:(const unordered_map_ddbde191 *)arg2 inTableUID:(const UUIDData_5fbc143e *)arg3;
- (id)initForUndoMergeCellsWithTableUID:(const UUIDData_5fbc143e *)arg1 columnUids:(const vector_4dc5f307 *)arg2 rowUids:(const vector_4dc5f307 *)arg3 mergeSource:(struct TSUCellCoord)arg4;
- (id)initForMergeCellsWithTableUID:(const UUIDData_5fbc143e *)arg1 columnUids:(const vector_4dc5f307 *)arg2 rowUids:(const vector_4dc5f307 *)arg3 mergeSource:(struct TSUCellCoord)arg4;
- (id)initForMovingRegionWithSrcTableUID:(const UUIDData_5fbc143e *)arg1 srcColumnUids:(const vector_4dc5f307 *)arg2 srcRowUids:(const vector_4dc5f307 *)arg3 dstTableUID:(const UUIDData_5fbc143e *)arg4 dstColumnUids:(const vector_4dc5f307 *)arg5 dstRowUids:(const vector_4dc5f307 *)arg6;
- (id)initForSortWithTableUID:(const UUIDData_5fbc143e *)arg1 rowUids:(const vector_4dc5f307 *)arg2;
- (id)initForMovingRowsOrColumnsInTable:(const UUIDData_5fbc143e *)arg1 rowColumnUuids:(const vector_4dc5f307 *)arg2 areRows:(_Bool)arg3;
@property(nonatomic) UUIDData_5fbc143e insertAtUid;
- (id)initForInsertingRowsOrColumnsIntoTable:(const UUIDData_5fbc143e *)arg1 rowColumnUuids:(const vector_4dc5f307 *)arg2 areRows:(_Bool)arg3;
- (id)initForRemoveRowsOrColumnsFromTable:(const UUIDData_5fbc143e *)arg1 rowColumnUuids:(const vector_4dc5f307 *)arg2 areRows:(_Bool)arg3;
- (id)initWithTransposeTable:(const UUIDData_5fbc143e *)arg1 transposedBodyRange:(struct TSCERangeCoordinate)arg2 numberOfFooterRows:(unsigned short)arg3;
- (id)initWithOwnerInsertion:(const UUIDData_5fbc143e *)arg1;
- (id)initWithOwnerDeletion:(const UUIDData_5fbc143e *)arg1;

@end

