//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TSCEFormulaOwning.h"

@class NSString, TSCECalculationEngine, TSTFormulaStore, TSTMergeRangeCache, TSTTableModel;

__attribute__((visibility("hidden")))
@interface TSTMergeOwner : NSObject <TSCEFormulaOwning>
{
    TSTTableModel *_tableModel;
    TSCECalculationEngine *_calculationEngine;
    UUIDData_5fbc143e _ownerUID;
    TSTFormulaStore *_mergeRangeStorage;
    // Error parsing type: A@, name: _mergeRangeCache
    unordered_map_47ee37d2 _mergeOriginsMap;
    unordered_map_47ee37d2 _reverseOriginsMap;
}

@property(readonly, nonatomic) TSTFormulaStore *formulaStore; // @synthesize formulaStore=_mergeRangeStorage;
@property(readonly, nonatomic) TSTTableModel *tableModel; // @synthesize tableModel=_tableModel;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)assertCollaborationConvergence;
- (void)beginRewriteForCalculationEngine:(id)arg1 spec:(id)arg2;
- (void)rewriteForCalculationEngine:(id)arg1 formulaID:(CDStruct_ed6d627d)arg2 rewriteSpec:(id)arg3;
- (void)invalidateForCalculationEngine:(id)arg1;
- (void)writeResultsForCalculationEngine:(id)arg1;
- (CDStruct_2a4d9400)recalculateForCalculationEngine:(id)arg1 formulaID:(CDStruct_ed6d627d)arg2 isInCycle:(_Bool)arg3 hasCalculatedPrecedents:(_Bool)arg4;
- (void)unregisterFromCalculationEngine;
- (int)registerWithCalculationEngine:(id)arg1;
- (void)rewriteMergesForInsertedRange:(struct _NSRange)arg1 uids:(const vector_dadc1b26 *)arg2 isRows:(_Bool)arg3;
- (void)rewriteMergesForRemovedRange:(struct _NSRange)arg1 uids:(const vector_dadc1b26 *)arg2 isRows:(_Bool)arg3;
- (struct TSUCellRect)rewroteFormula:(struct TSCEFormula)arg1 atCoordinate:(struct TSUCellCoord *)arg2 withRewriteSpec:(id)arg3 isUndo:(_Bool)arg4;
- (void)commitRewritingTransaction;
- (void)openRewritingTransaction;
- (void)remapTableUIDsInFormulasWithMap:(const UUIDMap_727ee07e *)arg1 calcEngine:(id)arg2;
- (id)expandCellRegionToCoverMergedCells:(id)arg1;
- (struct TSUCellRect)expandCellRangeToCoverMergedCells:(struct TSUCellRect)arg1;
- (_Bool)hasRangeSpanningRowsForCellRange:(struct TSUCellRect)arg1;
- (_Bool)partiallyIntersectsCellRegion:(id)arg1;
- (_Bool)partiallyIntersectsCellRange:(struct TSUCellRect)arg1;
- (struct TSUCellCoord)mergeOriginForCellID:(struct TSUCellCoord)arg1;
- (struct TSUCellRect)mergedRangeForCellID:(struct TSUCellCoord)arg1;
- (id)regionForMergeRangesIntersectingRegion:(id)arg1;
- (_Bool)hasMergeRangesIntersectingCellRegion:(id)arg1;
- (id)mergesIntersectingCellRegion:(id)arg1;
- (id)mergesIntersectingRange:(struct TSUCellRect)arg1;
- (vector_db509b29)mergeRangesAndCrumbsIntersectingRange:(struct TSUCellRect)arg1;
- (vector_db509b29)mergeRangesIntersectingCellRegion:(id)arg1;
- (vector_db509b29)mergeRangesIntersectingRange:(struct TSUCellRect)arg1;
- (vector_db509b29)mergeRanges;
- (id)mergedGridIndicesForDimension:(long long)arg1;
- (void)insertAll:(id)arg1;
- (void)enumerateMergeFormulasUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateMergesIntersectingCellRegion:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateMergesIntersectingRange:(struct TSUCellRect)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateMergesUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)find:(struct TSUCellRect)arg1;
- (id)p_growReturningInverseForAction:(id)arg1;
- (_Bool)p_hasAnyMergesIntersectingRange:(struct TSUCellRect)arg1;
- (struct TSCEFormula)p_createFormulaForRange:(struct TSUCellRect)arg1 atIndex:(unsigned long long)arg2 tableUID:(const UUIDData_5fbc143e *)arg3;
- (struct TSUCellRect)p_growRangeFrom:(struct TSUCellRect)arg1 toDesired:(struct TSUCellRect)arg2;
- (id)p_shrinkReturningInverseForAction:(id)arg1;
- (id)shrinkReturningInverseForRegion:(id)arg1;
- (id)removeReturningInverseForRegion:(id)arg1;
- (id)performActionReturningInverse:(id)arg1;
- (void)removeMergeRange:(struct TSUCellRect)arg1;
- (_Bool)insertMergeRangeRemovingOverlaps:(struct TSUCellRect)arg1;
- (_Bool)insertMergeRange:(struct TSUCellRect)arg1;
- (void)upgradeFromMergeRegionMap;
- (void)p_dirtyCellsForMerge:(const struct TSUCellRect *)arg1;
- (void)loadMergeCache;
- (void)resetMergeCache;
- (void)reloadMergeCacheForIndexes:(id)arg1;
- (_Bool)isValidMergeRange:(struct TSUCellRect)arg1;
- (id)mergeActionForRegion:(id)arg1 nonOriginPartialsOnly:(_Bool)arg2;
- (id)mergeActionForRegion:(id)arg1;
- (void)createMergeRangeStorage;
- (id)p_shrinkMergesAtIndexes:(id)arg1 intersectedByRegion:(id)arg2;
- (void)p_moveCellFromCellID:(struct TSUCellCoord)arg1 toCellID:(struct TSUCellCoord)arg2;
- (void)p_updateOriginMapWithSourceCellID:(struct TSUCellCoord)arg1 destCellID:(struct TSUCellCoord)arg2;
- (unsigned long long)count;
- (id)mergeIndexesForCellRegion:(id)arg1;
- (id)mergeIndexesForRange:(struct TSUCellRect)arg1;
- (id)regionFromUIDMergeFormula:(const struct TSCEFormula *)arg1;
- (struct TSUCellRect)rangeFromMergeFormula:(const struct TSCEFormula *)arg1 atCoord:(const struct TSUCellCoord *)arg2;
- (void)resetMergeOriginMap;
@property(nonatomic) UUIDData_5fbc143e ownerUID;
- (void)saveToArchive:(struct MergeOwnerArchive *)arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct MergeOwnerArchive *)arg1 unarchiver:(id)arg2 forTableModel:(id)arg3;
@property(readonly, copy) NSString *description;
- (id)allMergesAsString;
- (void)rollbackToMark:(unsigned long long)arg1;
- (unsigned long long)markForRollback;
@property(readonly, nonatomic) TSTMergeRangeCache *mergeRangeCache;
- (void)dealloc;
- (id)initWithTableModel:(id)arg1;
- (id)initWithTableModel:(id)arg1 ownerUID:(const UUIDData_5fbc143e *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

