//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSDDrawableInfo.h>

#import "TSCECalculationEngineRegistration.h"
#import "TSCEFormulaOwning.h"
#import "TSCEReferenceResolving.h"
#import "TSCETableModeling.h"
#import "TSDCompatibilityAwareMediaContainer.h"
#import "TSDContainerInfo.h"
#import "TSDMixing.h"
#import "TSDReducibleImageContainer.h"
#import "TSDReplaceableMediaContainer.h"
#import "TSKModel.h"
#import "TSKSearchable.h"
#import "TSSPresetSource.h"
#import "TSSPropertySource.h"
#import "TSSStyleClient.h"
#import "TSTCustomStrokeProviding.h"
#import "TSTStyleProviding.h"
#import "TSTTableHiddenRowColumnProviding.h"
#import "TSTTableInternalGeometryProviding.h"
#import "TSTTableMergeRangeProviding.h"
#import "TSTTableStrokeProviding.h"
#import "TSWPStorageParent.h"
#import "TSWPTextStatisticsTrackerProvider.h"

@class NSArray, NSObject<TSDContainerInfo>, NSString, NSUUID, TSCECalculationEngine, TSCECellCoordinateVector, TSCEOwnerFormulaMap, TSCEOwnerUidMapper, TSDFill, TSDInfoGeometry, TSDStroke, TSPObject<TSDOwningAttachment>, TSTCell, TSTCellDictionary, TSTCellStyle, TSTConditionalStyleFormulaOwner, TSTHiddenStateFormulaOwner, TSTHiddenStateIndexSet, TSTImportWarningSetByCoordinateMap, TSTMasterLayout, TSTMergeOwner, TSTSortRuleReferenceTracker, TSTStrokeSidecar, TSTStructuredTextImportRecord, TSTTableFilterSet, TSTTableModel, TSTTablePartitioner, TSTTableSortOrder, TSTTableStyle, TSTTableStylePreset, TSWPParagraphStyle, TSWPShapeStyle;

__attribute__((visibility("hidden")))
@interface TSTInfo : TSDDrawableInfo <TSSPropertySource, TSDReplaceableMediaContainer, TSDReducibleImageContainer, TSDCompatibilityAwareMediaContainer, TSCEReferenceResolving, TSCECalculationEngineRegistration, TSCEFormulaOwning, TSCETableModeling, TSDContainerInfo, TSDMixing, TSKModel, TSKSearchable, TSSPresetSource, TSSStyleClient, TSTCustomStrokeProviding, TSTStyleProviding, TSTTableHiddenRowColumnProviding, TSTTableInternalGeometryProviding, TSTTableMergeRangeProviding, TSTTableStrokeProviding, TSWPStorageParent, TSWPTextStatisticsTrackerProvider>
{
    _Bool _hasReference;
    _Bool _migratingStylesOnly;
    TSTTablePartitioner *_partitioner;
    TSTMasterLayout *_masterLayout;
    TSTTableModel *_tableModel;
}

+ (unsigned long long)tableAreaForCellID:(struct TSUCellCoord)arg1 inTableWithHeaderColumns:(unsigned short)arg2 headerRows:(unsigned short)arg3 footerRows:(unsigned short)arg4 totalRows:(unsigned short)arg5;
+ (struct TSUCellRect)cellRangeForTableArea:(unsigned long long)arg1 givenTableSize:(CDStruct_d65e47c4)arg2 numberOfHeaderRows:(unsigned short)arg3 numberOfFooterRows:(unsigned short)arg4 numberOfHeaderColumns:(unsigned short)arg5;
+ (void)ensureAllTablesAreRegisteredInDocumentRoot:(id)arg1;
+ (void)performRewritesForInsertedTableInfos:(id)arg1;
+ (_Bool)validateNewName:(id)arg1 forTable:(id)arg2;
+ (id)presetKinds;
+ (void)bootstrapPresetsOfKind:(id)arg1 inTheme:(id)arg2 alternate:(int)arg3 reservedCount:(unsigned long long)arg4;
+ (void)bootstrapPresetsOfKind:(id)arg1 inTheme:(id)arg2 alternate:(int)arg3;
+ (_Bool)canPartition;
+ (_Bool)needsObjectUUID;
+ (id)tablePrototypeWithIndex:(long long)arg1 context:(id)arg2 geometry:(id)arg3 styles:(id)arg4 forTableInsertOnly:(_Bool)arg5;
+ (id)tablePrototypeWithIndex:(long long)arg1 context:(id)arg2 geometry:(id)arg3 styles:(id)arg4;
+ (id)geometryForPrototypeIndex:(long long)arg1 withCanvasPoint:(struct CGPoint)arg2;
+ (unsigned short)numberOfColumnsForProtoIndex:(unsigned long long)arg1;
+ (unsigned short)numberOfRowsForProtoIndex:(unsigned long long)arg1;
+ (id)localizedDescriptionForProtoIndex:(unsigned long long)arg1;
+ (struct TSCETableReference)makeCellReferenceInSameTable:(const struct TSCETableReference *)arg1 cellID:(struct TSUCellCoord)arg2;
+ (void)prefetchData:(struct TSCEReferenceValue *)arg1 fromVectorObject:(struct TSCETableReferenceVector *)arg2 cellID:(struct TSUCellCoord)arg3;
+ (struct TSCETableReferenceVector)makeReferenceVectorWithReference:(const struct TSCETableReference *)arg1 rangeContext:(unsigned char)arg2 apparentRangePtr:(struct TSCERangeCoordinate *)arg3;
+ (struct TSCETableReference)canonicalCellReferenceForReference:(const struct TSCETableReference *)arg1;
+ (id)resolverMatchingNameWithContextContainer:(id)arg1 inDocumentRoot:(id)arg2 contextContainerName:(id)arg3;
+ (id)resolverMatchingName:(id)arg1 inDocumentRoot:(id)arg2 contextResolver:(id)arg3;
+ (id)resolverContainerMatchingName:(id)arg1 inDocumentRoot:(id)arg2;
+ (int)getHidingAction:(const struct TSCETableReference *)arg1;
+ (struct TSCERangeRef)getRangeReference:(const struct TSCETableReference *)arg1;
+ (struct TSCERangeCoordinate)getRange:(const struct TSCETableReference *)arg1;
+ (struct TSCEFormat)format:(const struct TSCETableReference *)arg1 fromCell:(struct TSUCellCoord)arg2;
+ (struct TSCEFormat)formatFromVector:(const struct TSCETableReferenceVector *)arg1 atIndex:(unsigned long long)arg2;
+ (int)mergeReferences:(struct TSCETableReference *)arg1 left:(const struct TSCETableReference *)arg2 right:(const struct TSCETableReference *)arg3;
+ (struct TSCEValue)scalarValue:(const struct TSCETableReference *)arg1 fromCell:(struct TSUCellCoord)arg2 permitAccessInsideMergeRegions:(_Bool)arg3 fetchRichTextAttributesIfPlainText:(_Bool)arg4;
+ (struct TSUCellCoord)resolvedCellIDForScalarAccess:(struct TSCETableReference)arg1 fromCell:(struct TSUCellCoord)arg2;
+ (struct TSCEValue)valueForTable:(id)arg1 cellID:(struct TSUCellCoord)arg2 fetchRichTextAttributesIfPlainText:(_Bool)arg3;
@property(nonatomic) _Bool migratingStylesOnly; // @synthesize migratingStylesOnly=_migratingStylesOnly;
@property(retain, nonatomic) TSTTableModel *tableModel; // @synthesize tableModel=_tableModel;
@property(nonatomic) _Bool hasReference; // @synthesize hasReference=_hasReference;
@property(retain, nonatomic) TSTMasterLayout *masterLayout; // @synthesize masterLayout=_masterLayout;
@property(retain, nonatomic) TSTTablePartitioner *partitioner; // @synthesize partitioner=_partitioner;
- (void).cxx_destruct;
- (void)saveToArchiver:(id)arg1;
- (void)saveToArchive:(struct TableInfoArchive *)arg1 archiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (void)loadFromArchive:(const struct TableInfoArchive *)arg1 unarchiver:(id)arg2;
- (void)validate;
- (id)commandForSettingTableDirection:(int)arg1 icc:(id)arg2;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (void)updateTableRowColumnStylesWithBlock:(CDUnknownBlockType)arg1;
- (void)mapTableStylesToStylesheet:(id)arg1 withMapper:(id)arg2;
- (id)cellRegionForUIDRange:(const struct TSTCellUIDRange *)arg1;
- (struct TSTCellUIDRange)cellUIDRangeForCellRange:(struct TSUCellRect)arg1;
- (struct TSUCellRect)cellRangeForUIDRange:(const struct TSTCellUIDRange *)arg1;
- (id)cellRegionFromCellUIDList:(id)arg1;
- (id)cellUIDListFromCellRegion:(id)arg1;
- (id)mutableIndexesForUIDSet:(id)arg1 isRows:(_Bool)arg2 notFoundUIDs:(id)arg3;
- (id)mutableIndexesForUIDSet:(id)arg1 isRows:(_Bool)arg2;
- (id)UIDSetForIndexes:(id)arg1 isRows:(_Bool)arg2;
- (vector_4dc5f307)prunedRowUIDsFromRowUIDs:(const vector_4dc5f307 *)arg1;
- (vector_4dc5f307)prunedColumnUIDsFromColumnUIDs:(const vector_4dc5f307 *)arg1;
- (vector_4dc5f307)columnUIDsForColumnRange:(struct _NSRange)arg1;
- (id)mutableColumnIndexesForUIDs:(const vector_4dc5f307 *)arg1;
- (id)columnIndexesForUIDs:(const vector_4dc5f307 *)arg1;
- (vector_4dc5f307)columnUIDsForColumnIndexes:(id)arg1;
- (unsigned char)columnIndexForColumnUID:(const UUIDData_5fbc143e *)arg1;
- (UUIDData_5fbc143e)columnUIDForColumnIndex:(unsigned char)arg1;
- (vector_4dc5f307)rowUIDsForRowRange:(struct _NSRange)arg1;
- (id)mutableRowIndexesForUIDs:(const vector_4dc5f307 *)arg1;
- (id)rowIndexesForUIDs:(const vector_4dc5f307 *)arg1;
- (vector_4dc5f307)rowUIDsForRowIndexes:(id)arg1;
- (unsigned short)rowIndexForRowUID:(const UUIDData_5fbc143e *)arg1;
- (UUIDData_5fbc143e)rowUIDForRowIndex:(unsigned short)arg1;
- (_Bool)writeCellIDsInCellUIDList:(id)arg1 toVector:(vector_38b190b0 *)arg2;
- (id)prunedCellUIDListFromCellUIDList:(id)arg1 allowMergeFragment:(_Bool)arg2 addingPrunedIndicesToIndexSet:(id)arg3;
- (struct TSUCellCoord)cellIDForCellUID:(const struct TSTCellUID *)arg1;
- (struct TSTCellUID)cellUIDforCellID:(const struct TSUCellCoord *)arg1;
- (struct TSUCellCoord)cellIDForCellContainingRichTextStorage:(id)arg1;
- (_Bool)findChartableRangesFromTableRange:(struct TSCERangeCoordinate)arg1 getBodyRange:(out struct TSCERangeCoordinate *)arg2 headerColumnRange:(out struct TSCERangeCoordinate *)arg3 headerRowRange:(out struct TSCERangeCoordinate *)arg4;
- (void)upgradeFromPreUFF;
- (struct TSUCellRect)minPopulatedCellRange;
- (_Bool)cellWasModifiedInCurrentRecalcCycle:(struct TSUCellCoord)arg1;
- (struct TSCERangeRef)referenceToHiddenStateFromColumn:(unsigned char)arg1 toColumn:(unsigned char)arg2;
- (struct TSCERangeRef)referenceToHiddenStateFromRow:(unsigned short)arg1 toRow:(unsigned short)arg2;
- (void)registerAllFormulasWithCalculationEngine:(id)arg1;
- (void)reassignPasteboardCustomFormatKeys;
- (void)addPasteboardCustomFormatsToDocumentAndUpdateCells;
- (void)remapTableUIDsInFormulasWithMap:(const UUIDMap_b66c2694 *)arg1 calcEngine:(id)arg2 bakeForBadRefs:(_Bool)arg3;
- (void)setFormulaOwnerUIDsWithMap:(id)arg1 shouldStealReferences:(_Bool)arg2;
- (id)cellRegionWithConditionalStyleMatchingCell:(struct TSUCellCoord)arg1;
- (_Bool)hasCellID:(struct TSUCellCoord)arg1;
- (void)getValue:(out struct TSCEValue *)arg1 fromIteratorData:(id)arg2 fetchRichTextAttributesIfPlainText:(_Bool)arg3;
- (int)getValue:(out struct TSCEValue *)arg1 atCellID:(struct TSUCellCoord)arg2 fetchRichTextAttributesIfPlainText:(_Bool)arg3;
- (id)strokeLayerForBottomOfRow:(unsigned short)arg1;
- (id)strokeLayerForTopOfRow:(unsigned short)arg1;
- (id)strokeLayerForRightSideOfColumn:(unsigned char)arg1;
- (id)strokeLayerForLeftSideOfColumn:(unsigned char)arg1;
- (void)setStroke:(id)arg1 forRightOfColumn:(unsigned char)arg2 order:(int)arg3 rowRange:(struct TSTSimpleRange)arg4;
- (void)setStroke:(id)arg1 forLeftOfColumn:(unsigned char)arg2 order:(int)arg3 rowRange:(struct TSTSimpleRange)arg4;
- (void)setStroke:(id)arg1 forBottomOfRow:(unsigned short)arg2 order:(int)arg3 columnRange:(struct TSTSimpleRange)arg4;
- (void)setStroke:(id)arg1 forTopOfRow:(unsigned short)arg2 order:(int)arg3 columnRange:(struct TSTSimpleRange)arg4;
- (void)setStroke:(id)arg1 forRightOfColumn:(unsigned char)arg2 order:(int)arg3;
- (void)setStroke:(id)arg1 forLeftOfColumn:(unsigned char)arg2 order:(int)arg3;
- (void)setStroke:(id)arg1 forBottomOfRow:(unsigned short)arg2 order:(int)arg3;
- (void)setStroke:(id)arg1 forTopOfRow:(unsigned short)arg2 order:(int)arg3;
- (id)cellBorderAtCellID:(struct TSUCellCoord)arg1;
- (int)maxStrokeOrder;
- (id)strokeExporterReturningDefaultStrokes:(_Bool)arg1;
@property(readonly, nonatomic) TSDStroke *footerRowSeparatorStroke;
@property(readonly, nonatomic) TSDStroke *footerRowBodyRowStroke;
@property(readonly, nonatomic) TSDStroke *footerRowBodyColumnStroke;
@property(readonly, nonatomic) TSDStroke *footerRowBorderStroke;
@property(readonly, nonatomic) TSDStroke *headerRowSeparatorStroke;
@property(readonly, nonatomic) TSDStroke *headerRowBodyRowStroke;
@property(readonly, nonatomic) TSDStroke *headerRowBodyColumnStroke;
@property(readonly, nonatomic) TSDStroke *headerRowBorderStroke;
@property(readonly, nonatomic) TSDStroke *headerColumnSeparatorStroke;
@property(readonly, nonatomic) TSDStroke *headerColumnBodyRowStroke;
@property(readonly, nonatomic) TSDStroke *headerColumnBodyColumnStroke;
@property(readonly, nonatomic) TSDStroke *headerColumnBorderStroke;
@property(readonly, nonatomic) TSDStroke *bodyRowStrokeEvenIfNotVisible;
@property(readonly, nonatomic) TSDStroke *bodyRowStroke;
@property(readonly, nonatomic) TSDStroke *bodyColumnStroke;
@property(readonly, nonatomic) TSDStroke *defaultHorizontalBorderStrokeEvenIfNotVisible;
@property(readonly, nonatomic) TSDStroke *defaultVerticalBorderStroke;
@property(readonly, nonatomic) TSDStroke *defaultHorizontalBorderStroke;
- (id)fillForColumn:(unsigned char)arg1;
- (id)fillForRow:(unsigned short)arg1;
@property(readonly, nonatomic) TSDFill *footerRowsFill;
@property(readonly, nonatomic) TSDFill *headerRowsFill;
@property(readonly, nonatomic) TSDFill *headerColumnsFill;
@property(readonly, nonatomic) TSDFill *bodyFill;
@property(readonly, nonatomic) TSDFill *backgroundFill;
- (id)expandCellRegionToCoverMergedCells:(id)arg1;
- (struct TSUCellRect)expandCellRangeToCoverMergedCells:(struct TSUCellRect)arg1;
- (id)mergesIntersectingCellRegion:(id)arg1;
- (id)mergesIntersectingRange:(struct TSUCellRect)arg1;
- (id)mergeRangesForCellRegion:(id)arg1;
- (id)mergeRangesForCellRange:(struct TSUCellRect)arg1;
- (id)regionForValueOrCommentCellsInRange:(struct TSUCellRect)arg1;
- (id)mergedGridIndicesForDirection:(long long)arg1;
- (_Bool)hasMergeRangesIntersectingCellRegion:(id)arg1;
- (_Bool)hasMergeFragmentAtCellID:(struct TSUCellCoord)arg1;
- (_Bool)mergeRangesPartiallyIntersectingCellRange:(struct TSUCellRect)arg1;
- (_Bool)isSingleCellOrMergeRange:(struct TSUCellRect)arg1;
- (struct TSUCellRect)mergeRangeAtCellID:(struct TSUCellCoord)arg1;
- (_Bool)unmergeCellRange:(struct TSUCellRect)arg1;
- (_Bool)mergeCellRange:(struct TSUCellRect)arg1;
- (id)fontColorAtCellID:(struct TSUCellCoord)arg1 optionalCell:(id)arg2;
- (id)stringAtCellID:(struct TSUCellCoord)arg1 optionalCell:(id)arg2;
- (_Bool)anyHiddenColumnsInCellRange:(struct TSUCellRect)arg1;
- (_Bool)anyHiddenRowsInCellRange:(struct TSUCellRect)arg1;
- (unsigned char)indexOfVisibleColumnAfterAndIncludingColumnAtIndex:(unsigned char)arg1;
- (unsigned char)indexOfVisibleColumnAfterColumnAtIndex:(unsigned char)arg1;
- (unsigned char)indexOfVisibleColumnBeforeAndIncludingColumnAtIndex:(unsigned char)arg1;
- (unsigned char)indexOfVisibleColumnBeforeColumnAtIndex:(unsigned char)arg1;
- (unsigned short)indexOfVisibleRowAfterAndIncludingRowAtIndex:(unsigned short)arg1;
- (unsigned short)indexOfVisibleRowAfterRowAtIndex:(unsigned short)arg1;
- (unsigned short)indexOfVisibleRowBeforeAndIncludingRowAtIndex:(unsigned short)arg1;
- (unsigned short)indexOfVisibleRowBeforeRowAtIndex:(unsigned short)arg1;
- (_Bool)hasHiddenColumnAtIndex:(unsigned char)arg1;
- (_Bool)hasHiddenRowAtIndex:(unsigned short)arg1;
@property(readonly, nonatomic) unsigned short numberOfVisibleBodyColumns;
@property(readonly, nonatomic) unsigned short numberOfUserVisibleBodyRows;
@property(readonly, nonatomic) unsigned short numberOfVisibleBodyRows;
- (_Bool)isCellRangeHidden:(struct TSUCellRect)arg1;
- (_Bool)anyHiddenRowsInCellRange:(struct TSUCellRect)arg1 forAction:(unsigned char)arg2;
- (unsigned char)hidingActionForColumnAtIndex:(unsigned char)arg1;
- (unsigned char)hidingActionForRowAtIndex:(unsigned short)arg1;
- (id)indexesOfVisibleRowsInRowRange:(id)arg1;
- (id)indexesOfUserVisibleRowsInCellRange:(struct TSUCellRect)arg1;
- (id)indexesOfVisibleRowsInCellRange:(struct TSUCellRect)arg1;
- (id)indexesOfUserHiddenRowsInCellRange:(struct TSUCellRect)arg1;
- (id)indexesOfHiddenRowsInCellRange:(struct TSUCellRect)arg1;
- (id)indexesOfVisibleColumnsInColumnRange:(id)arg1;
- (id)indexesOfVisibleColumnsInCellRange:(struct TSUCellRect)arg1;
- (id)indexesOfHiddenColumnsInCellRange:(struct TSUCellRect)arg1;
- (_Bool)hasHiddenColumnAtIndex:(unsigned char)arg1 forAction:(unsigned char)arg2;
- (_Bool)hasHiddenRowAtIndex:(unsigned short)arg1 forAction:(unsigned char)arg2;
- (_Bool)showColumnAtIndex:(unsigned char)arg1 forAction:(unsigned char)arg2;
- (_Bool)showRowAtIndex:(unsigned short)arg1 forAction:(unsigned char)arg2;
- (unsigned short)numberOfHiddenColumnsInCellRange:(struct TSUCellRect)arg1;
- (unsigned short)numberOfUserHiddenRowsInCellRange:(struct TSUCellRect)arg1;
- (unsigned short)numberOfHiddenRowsInCellRange:(struct TSUCellRect)arg1;
- (_Bool)hideColumnAtIndex:(unsigned char)arg1 forAction:(unsigned char)arg2;
- (_Bool)hideRowAtIndex:(unsigned short)arg1 forAction:(unsigned char)arg2;
- (void)swapRowAtIndex:(unsigned short)arg1 withRowAtIndex:(unsigned short)arg2;
- (void)moveColumnRange:(struct _NSRange)arg1 toColumnIndex:(unsigned char)arg2;
- (void)moveRowRange:(struct _NSRange)arg1 toRowIndex:(unsigned short)arg2;
- (void)removeColumnsAtIndexes:(id)arg1;
- (void)removeRowsAtIndexes:(id)arg1;
- (void)removeColumnsAtIndex:(unsigned char)arg1 count:(unsigned short)arg2;
- (void)removeRowsAtIndex:(unsigned short)arg1 count:(unsigned short)arg2;
- (int)insertColumnsInRange:(struct _NSRange)arg1 uids:(const vector_4dc5f307 *)arg2 metadata:(id)arg3;
- (void)insertColumnsAtIndex:(unsigned char)arg1 count:(unsigned short)arg2 addBefore:(_Bool)arg3;
- (int)insertRowsInRange:(struct _NSRange)arg1 uids:(const vector_4dc5f307 *)arg2 metadata:(id)arg3 unsetFilterHidingAction:(_Bool)arg4;
- (int)insertRowsInRange:(struct _NSRange)arg1 uids:(const vector_4dc5f307 *)arg2 metadata:(id)arg3;
- (void)insertRowsAtIndex:(unsigned short)arg1 count:(unsigned short)arg2 addBefore:(_Bool)arg3;
- (struct TSUCellRect)bottomCornerRange;
- (struct TSUCellRect)topCornerRange;
- (struct TSUCellRect)footerRowRange;
- (struct TSUCellRect)actualHeaderColumnRange;
- (struct TSUCellRect)headerColumnRange;
- (struct TSUCellRect)headerRowRange;
- (struct TSUCellRect)bodyRowRange;
- (struct TSUCellRect)bodyColumnRange;
- (struct TSUCellRect)bodyRange;
- (struct TSUCellRect)range;
- (double)computeDefaultFontHeightForTableArea:(unsigned long long)arg1;
- (void)computeDefaultRowHeight;
@property NSArray *rowHeights;
@property NSArray *columnWidths;
- (void)setWidth:(double)arg1 ofColumnAtIndex:(unsigned char)arg2;
- (void)setHeight:(double)arg1 ofRowAtIndex:(unsigned short)arg2;
- (double)widthOfColumnAtIndex:(unsigned char)arg1 isDefault:(out _Bool *)arg2;
- (double)heightOfRowAtIndex:(unsigned short)arg1 isDefault:(out _Bool *)arg2;
- (struct TSUCellCoord)cellIDBelowCellID:(struct TSUCellCoord)arg1;
- (struct TSUCellCoord)cellIDAboveCellID:(struct TSUCellCoord)arg1;
- (struct TSUCellCoord)cellIDRightOfCellID:(struct TSUCellCoord)arg1;
- (struct TSUCellCoord)cellIDLeftOfCellID:(struct TSUCellCoord)arg1;
- (unsigned int)numberOfCells;
- (id)rowNameForCellID:(struct TSUCellCoord)arg1 cellRangeContainingName:(struct TSUCellRect *)arg2 restrictToBodyRange:(_Bool)arg3;
- (id)columnNameForCellID:(struct TSUCellCoord)arg1 cellRangeContainingName:(struct TSUCellRect *)arg2 restrictToBodyRange:(_Bool)arg3;
- (id)conditionalStyleSetAtCellID:(struct TSUCellCoord)arg1;
- (id)textStyleAtCellID:(struct TSUCellCoord)arg1 isDefault:(out _Bool *)arg2;
- (id)cellStyleAtCellID:(struct TSUCellCoord)arg1 isDefault:(out _Bool *)arg2;
- (int)setTextStyle:(id)arg1 atCellID:(struct TSUCellCoord)arg2;
- (int)setCellStyle:(id)arg1 atCellID:(struct TSUCellCoord)arg2;
- (_Bool)textStyle:(id)arg1 isEqualToDefaultTextStyleForCellID:(struct TSUCellCoord)arg2;
- (_Bool)cellStyle:(id)arg1 isEqualToDefaultCellStyleForCellID:(struct TSUCellCoord)arg2;
- (id)textStyleForCellWithEmptyStyleAtCellID:(struct TSUCellCoord)arg1 isDefault:(out _Bool *)arg2;
- (id)defaultTextStyleForTableArea:(unsigned long long)arg1;
- (id)defaultTextStyleForCellID:(struct TSUCellCoord)arg1;
- (id)cellStyleForCellWithEmptyStyleAtCellID:(struct TSUCellCoord)arg1 isDefault:(out _Bool *)arg2;
- (id)defaultCellStyleForTableArea:(unsigned long long)arg1;
- (id)defaultCellStyleForCellID:(struct TSUCellCoord)arg1;
- (id)textStyleOfColumnAtIndex:(unsigned char)arg1 isDefault:(out _Bool *)arg2;
- (id)cellStyleOfColumnAtIndex:(unsigned char)arg1 isDefault:(out _Bool *)arg2;
- (int)setTextStyle:(id)arg1 ofColumnAtIndex:(unsigned char)arg2;
- (int)setCellStyle:(id)arg1 ofColumnAtIndex:(unsigned char)arg2;
- (id)textStyleOfRowAtIndex:(unsigned short)arg1 isDefault:(out _Bool *)arg2;
- (id)cellStyleOfRowAtIndex:(unsigned short)arg1 isDefault:(out _Bool *)arg2;
- (int)setTextStyle:(id)arg1 ofRowAtIndex:(unsigned short)arg2;
- (int)setCellStyle:(id)arg1 ofRowAtIndex:(unsigned short)arg2;
- (int)cellValueTypeAtCellID:(struct TSUCellCoord)arg1;
- (id)formatAtCellID:(struct TSUCellCoord)arg1 formatIsImplicitOut:(_Bool *)arg2;
- (int)getCell:(id)arg1 atCellID:(struct TSUCellCoord)arg2 holdingReadLockWithAccessController:(id)arg3;
- (id)cellMapForRegion:(id)arg1 uidBased:(_Bool)arg2 suppressMergeContent:(_Bool)arg3;
- (int)setCellsWithCellMap:(id)arg1 ignoreFormulas:(_Bool)arg2 skipDirtyingNonFormulaCells:(_Bool)arg3 calculationEngine:(id)arg4;
- (int)setCellsWithCellMap:(id)arg1 calculationEngine:(id)arg2;
- (struct TSCEFormula *)formulaAtCellID:(struct TSUCellCoord)arg1;
- (int)updateCalculationEngineForFormula:(struct TSCEFormula *)arg1 inCellID:(struct TSUCellCoord)arg2;
- (int)setCell:(id)arg1 atCellID:(struct TSUCellCoord)arg2 ignoreFormula:(_Bool)arg3 clearImportWarnings:(_Bool)arg4 calculationEngine:(id)arg5;
- (int)setCell:(id)arg1 atCellID:(struct TSUCellCoord)arg2 clearWarnings:(_Bool)arg3;
- (int)setCell:(id)arg1 atCellID:(struct TSUCellCoord)arg2;
- (void)convertFormulasToUidForm:(id)arg1 atCellID:(struct TSUCellCoord)arg2;
- (void)convertFormulasToUidForm:(id)arg1 atCellID:(struct TSUCellCoord)arg2 preserveHostCell:(_Bool)arg3;
- (_Bool)hasFormulaAtCellID:(struct TSUCellCoord)arg1;
- (id)cellAtCellID:(struct TSUCellCoord)arg1;
- (int)getCell:(id)arg1 atCellID:(struct TSUCellCoord)arg2;
- (int)getCell:(id)arg1 atCellID:(struct TSUCellCoord)arg2 suppressCellBorder:(_Bool)arg3;
- (_Bool)cellExistsAtCellID:(struct TSUCellCoord)arg1;
- (int)getDefaultCell:(out id)arg1 forCellID:(struct TSUCellCoord)arg2;
- (int)getDefaultCell:(id)arg1 forTableArea:(unsigned long long)arg2;
- (id)tableAreasForCellRange:(struct TSUCellRect)arg1;
- (unsigned long long)tableAreaForColumn:(unsigned char)arg1;
- (unsigned long long)tableAreaForRow:(unsigned short)arg1;
- (unsigned long long)tableAreaForCellID:(struct TSUCellCoord)arg1;
- (struct TSUCellRect)cellRangeForTableArea:(unsigned long long)arg1;
- (void)chooseUniqueNameInContainer:(id)arg1 forPaste:(_Bool)arg2 needsNewName:(_Bool)arg3 avoidNames:(id)arg4;
- (void)chooseUniqueNameInContainer:(id)arg1 forPaste:(_Bool)arg2 needsNewName:(_Bool)arg3;
- (void)chooseUniqueNameInContainer:(id)arg1 forPaste:(_Bool)arg2;
- (int)parseNumberFromTableName:(id)arg1;
- (id)bandedFillObject;
- (_Bool)useBandedFill;
- (_Bool)canTranspose;
- (_Bool)hasFilterRulesInColumns:(id)arg1;
- (void)dirtyFilterState;
- (void)filterSetUpdated;
- (_Bool)hasActiveFilters;
- (void)setFilterSetType:(int)arg1;
- (void)enableFilterSet:(_Bool)arg1;
- (void)mutateFormulaFiltersUsingBlock:(CDUnknownBlockType)arg1;
- (void)setNeedsFilterFormulaRewriteForImport:(_Bool)arg1;
- (_Bool)needsFilterFormulaRewriteForImport;
- (id)duplicateFilterSetInUidForm;
- (id)duplicateFilterSet;
- (void)resetSortRuleReferenceTrackerForInsert;
- (void)notifyAboutStructuredTextImportState;
- (void)getTextPropertiesWithCell:(id)arg1 cellID:(struct TSUCellCoord)arg2 wraps:(_Bool *)arg3 alignment:(int *)arg4 verticalAlignment:(int *)arg5 padding:(id *)arg6;
- (void)applyWritingDirection:(int)arg1 toCell:(id)arg2 cellID:(struct TSUCellCoord)arg3;
- (int)writingDirectionForCellwithTableDefault:(id)arg1;
@property(readonly, nonatomic) TSCEOwnerUidMapper *identityOwnerUIDMapper;
@property(readonly, nonatomic) TSCEOwnerUidMapper *ownerUIDMapper;
- (void)bakeFormulas;
- (void)setDrawableIsBeingCopied:(_Bool)arg1;
- (void)setStylesheetForUpgradeToSingleStylesheet:(id)arg1;
- (void)upgradeDuringDocumentUpgradeIfNeeded:(unsigned long long)arg1;
- (void)setupDefaultCells;
- (void)resetStyles:(id)arg1;
- (id)allAnnotations;
- (id)commentHostingAtCellID:(struct TSUCellCoord)arg1;
- (id)commentHostingAtCellID:(struct TSUCellCoord)arg1 forCommentStorage:(id)arg2;
- (void)clearCommentHostingMapForCommentStorage:(id)arg1;
- (void)postCommentNotificationForStorage:(id)arg1 atCellID:(struct TSUCellCoord)arg2 notificationKey:(id)arg3;
- (int)removeCommentStorageAtCellID:(struct TSUCellCoord)arg1;
- (int)setCommentStorage:(id)arg1 atCellID:(struct TSUCellCoord)arg2;
- (_Bool)hasCommentAtCellID:(struct TSUCellCoord)arg1;
- (_Bool)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg1 styleComparisonBlock:(CDUnknownBlockType)arg2;
- (void)upgradeFormatsForCustomFormatListU2_0;
- (void)prepareForPasteWithSourceOffset:(CDStruct_945081a1)arg1;
- (void)didReplaceTextsInStoragesWithPlaceHolderString;
- (void)p_initializeDefaultHeight:(double)arg1 andWidth:(double)arg2;
@property(readonly, nonatomic) _Bool preventsComments;
@property(readonly, nonatomic) _Bool textIsLinked;
@property(readonly, nonatomic) _Bool textIsVertical;
@property(readonly, nonatomic) _Bool autoListTermination;
@property(readonly, nonatomic) _Bool autoListRecognition;
- (void)didCopy;
- (void)willCopyWithOtherDrawables:(id)arg1;
- (void)assertCollaborationConvergence;
- (_Bool)contentsAreRightToLeft;
- (struct CGPoint)autosizePositionOffsetForGeometry:(id)arg1 dynamicallyDraggedLayout:(id)arg2;
- (id)geometryForRTLTableWithGeometry:(id)arg1;
- (void)setInsertionCenterPosition:(struct CGPoint)arg1;
- (_Bool)shouldCancelScrollingToSelectionPath:(id)arg1 forChanges:(id)arg2;
- (id)presetKind;
- (_Bool)prohibitsModificationToChildren;
- (id)infoForSelectionPath:(id)arg1;
@property(readonly, nonatomic) NSArray *childInfos;
- (id)mergedContainedStorages;
- (void)replaceReferencedStylesUsingBlock:(CDUnknownBlockType)arg1;
- (id)referencedStyles;
- (id)childCommandForReplaceAllCommand:(id)arg1;
- (void)enumerateAllAnnotationsInModelWithHitBlock:(CDUnknownBlockType)arg1;
- (id)searchForAnnotationsWithHitBlock:(CDUnknownBlockType)arg1;
- (void)acceptVisitor:(id)arg1;
- (id)childEnumerator;
- (_Bool)canAspectRatioLockBeChangedByUser;
- (void)scaleInfoGeometry:(struct CGSize)arg1;
@property(nonatomic) long long contentWritingDirection;
@property(copy, nonatomic) TSDInfoGeometry *geometry; // @dynamic geometry;
- (void)setPrimitiveGeometry:(id)arg1;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (void)p_bakeMixedCellStrokesIntoTable:(id)arg1 outgoingTable:(id)arg2 incomingTable:(id)arg3 fraction:(double)arg4;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (_Bool)suppliesFinalTextures;
- (_Bool)requiresStagesBuildingInReverse;
- (unsigned long long)textureDeliveryStyleFromDeliveryString:(id)arg1;
- (id)textureDeliveryStylesLocalized:(_Bool)arg1 animationFilter:(id)arg2;
- (unsigned long long)chunkCountForTextureDeliveryStyle:(unsigned long long)arg1 animationFilter:(id)arg2;
- (void)p_performCommentStorageDOLC:(id)arg1;
- (id)applyCellDiff:(id)arg1 atCellID:(struct TSUCellCoord)arg2 migrationMap:(id)arg3 inverseCellDiff:(id)arg4 defaultCellStyle:(id)arg5 defaultTextStyle:(id)arg6;
- (id)applyCellDiff:(id)arg1 atCellID:(struct TSUCellCoord)arg2 migrationMap:(id)arg3;
@property(copy, nonatomic) TSTTableFilterSet *filterSet;
@property(retain, nonatomic) TSTStructuredTextImportRecord *textImportRecord;
- (vector_4dc5f307)columnUIDs;
- (vector_4dc5f307)rowUIDs;
- (id)allRichTextPayloadStorages;
- (_Bool)hasFormulas;
- (id)grabAllMergeRanges;
- (id)allMergeRanges;
- (_Bool)hasMergeRanges;
- (unsigned int)numberOfPopulatedCells;
- (id)newCell;
- (unsigned long long)numberOfComments;
- (Class)dataStoreIteratorClass;
- (Class)editorClass;
- (Class)layoutClass;
- (Class)repClass;
@property(nonatomic) _Bool wasUnarchivedFromAProvidedTable;
@property(nonatomic) _Bool presetNeedsStrongOwnership;
@property(readonly, nonatomic) TSTStrokeSidecar *strokeSidecar;
@property(readonly, nonatomic) TSTHiddenStateIndexSet *hiddenColumns;
@property(readonly, nonatomic) TSTHiddenStateIndexSet *userHiddenRows;
@property(readonly, nonatomic) TSTHiddenStateIndexSet *hiddenRows;
@property(readonly, nonatomic) TSTSortRuleReferenceTracker *sortRuleReferenceTracker;
@property(copy, nonatomic) TSTTableSortOrder *sortOrder;
@property(readonly, nonatomic) TSTHiddenStateFormulaOwner *hiddenStateFormulaOwnerForColumns;
@property(readonly, nonatomic) TSTHiddenStateFormulaOwner *hiddenStateFormulaOwnerForRows;
@property(readonly, nonatomic) TSTMergeOwner *mergeOwner;
@property(readonly, nonatomic) UUIDData_5fbc143e conditionalStyleFormulaOwnerUID;
@property(readonly, nonatomic) TSTConditionalStyleFormulaOwner *conditionalStyleFormulaOwner;
@property(readonly, nonatomic) TSCECellCoordinateVector *cellsToInvalidateNonoverflowingAfterRecalc;
@property(readonly, nonatomic) TSCECellCoordinateVector *cellsToInvalidateAfterRecalc;
@property(readonly, nonatomic) TSTCellDictionary *cellsPendingWrite;
@property(retain, nonatomic) TSTImportWarningSetByCoordinateMap *warningSetsForUndo;
@property(retain, nonatomic) TSCEOwnerFormulaMap *formulasForUndo;
@property(readonly, nonatomic) TSTCell *defaultFooterRowCell;
@property(readonly, nonatomic) TSTCell *defaultHeaderColumnCell;
@property(readonly, nonatomic) TSTCell *defaultHeaderRowCell;
@property(readonly, nonatomic) TSTCell *defaultBodyCell;
@property(retain, nonatomic) TSWPShapeStyle *tableNameShapeStyle;
@property(retain, nonatomic) TSWPParagraphStyle *tableNameStyle;
@property(retain, nonatomic) TSWPParagraphStyle *footerRowTextStyle;
@property(retain, nonatomic) TSWPParagraphStyle *headerColumnTextStyle;
@property(retain, nonatomic) TSWPParagraphStyle *headerRowTextStyle;
@property(retain, nonatomic) TSWPParagraphStyle *bodyTextStyle;
@property(retain, nonatomic) TSTCellStyle *footerRowCellStyle;
@property(retain, nonatomic) TSTCellStyle *headerColumnCellStyle;
@property(retain, nonatomic) TSTCellStyle *headerRowCellStyle;
@property(retain, nonatomic) TSTCellStyle *bodyCellStyle;
@property(retain, nonatomic) TSTTableStyle *tableStyle;
@property(retain, nonatomic) TSTTableStylePreset *tableStylePreset;
@property(nonatomic) _Bool styleApplyClearsAll;
@property(readonly, nonatomic) _Bool hasAlternatingRows;
@property(readonly, nonatomic) _Bool hasTableBorder;
@property(readonly, nonatomic) int tableWritingDirection;
@property(nonatomic) _Bool repeatingHeaderColumnsEnabled;
@property(nonatomic) _Bool repeatingHeaderRowsEnabled;
@property(readonly, nonatomic) TSDStroke *tableNameBorderStroke;
@property(nonatomic) _Bool tableNameBorderEnabled;
@property(nonatomic) double tableNameHeight;
@property(nonatomic) _Bool tableNameEnabled;
@property(retain, nonatomic) NSString *tableName;
@property(nonatomic) double defaultColumnWidth;
@property(nonatomic) double defaultRowHeight;
@property(readonly, nonatomic) unsigned short numberOfFilteredRows;
@property(readonly, nonatomic) unsigned short numberOfUserHiddenColumns;
@property(readonly, nonatomic) unsigned short numberOfUserHiddenRows;
@property(readonly, nonatomic) unsigned short numberOfHiddenColumns;
@property(readonly, nonatomic) unsigned short numberOfHiddenRows;
@property(nonatomic) _Bool headerColumnsFrozen;
@property(nonatomic) _Bool headerRowsFrozen;
@property(nonatomic) unsigned short numberOfFooterRows;
@property(nonatomic) unsigned short numberOfHeaderColumns;
@property(nonatomic) unsigned short numberOfHeaderRows;
@property(nonatomic) unsigned short numberOfColumns;
@property(nonatomic) unsigned short numberOfRows;
@property(nonatomic) _Bool wasCut;
@property(readonly, nonatomic) NSUUID *nsTableUID;
- (void)clearFromTableUID;
@property(nonatomic) UUIDData_5fbc143e fromTableUID;
@property(nonatomic) UUIDData_5fbc143e tableUID;
@property(nonatomic) TSCECalculationEngine *calcEngine;
@property(readonly, nonatomic, getter=isNewlyImported) _Bool newlyImported;
@property(readonly, nonatomic, getter=isReimportable) _Bool reimportable;
@property(readonly, nonatomic) _Bool supportsRichTextUndo;
- (_Bool)supportsAttachedComments;
- (int)elementKind;
- (id)p_masterLayoutCreateIfNeeded:(_Bool)arg1;
- (void)clearPartitioner;
- (_Bool)isSelectable;
- (_Bool)supportsHyperlinks;
- (Class)tableModelClass;
- (_Bool)isSafeToConvertToText;
- (_Bool)isSafeToConvertToAttributedString;
- (_Bool)isSafeToConvertToImageForImagePaste;
- (_Bool)isSafeToConvertToImage;
- (double)masterLayoutEffectiveTableNameHeight;
- (void)shiftGeometryToIncludeTableNameHeight;
- (id)componentRootObject;
- (id)additionalObjectsToCopy;
- (id)p_negativeImageFill;
- (id)p_positiveImageFill;
- (void)p_setFillOnCell:(id)arg1 positive:(_Bool)arg2;
- (void)p_setFormula:(struct TSCEFormula)arg1 atCellID:(struct TSUCellCoord)arg2;
- (void)p_setFormulaWithSymbolString:(id)arg1 atCellID:(struct TSUCellCoord)arg2;
- (void)p_setFormulaWithSymbolCellCoord:(struct TSUCellCoord)arg1 andAttributeCellCoord:(struct TSUCellCoord)arg2 atCellID:(struct TSUCellCoord)arg3;
- (void)p_setPopupMenuOnCell:(id)arg1 withItems:(id)arg2 andSelectedIndex:(double)arg3;
- (id)p_popupItemsForStrings:(id)arg1;
- (id)p_stockAttributesForDisplayArray;
- (void)p_setCell:(id)arg1 atColumn:(unsigned char)arg2 andRow:(unsigned short)arg3;
- (void)p_setupTableModelforStockPrototype;
- (void)p_setupTableModelforStockSwatch;
- (void)setupTableModelForPrototypeIndex:(long long)arg1 forTableInsertOnly:(_Bool)arg2;
@property(readonly, copy) NSString *description;
- (id)copyWithContext:(id)arg1;
- (void)dealloc;
- (void)willClose;
- (void)releaseMasterLayout;
- (id)initWithContext:(id)arg1 fromSourceInfo:(id)arg2 cellRegion:(id)arg3 tableModel:(id)arg4 waitForCalcEngine:(_Bool)arg5;
- (id)initWithContext:(id)arg1 fromSourceInfo:(id)arg2 cellRegion:(id)arg3 waitForCalcEngine:(_Bool)arg4;
- (id)initWithContext:(id)arg1 otherTableInfo:(id)arg2;
- (id)initWithContext:(id)arg1 geometry:(id)arg2;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 styles:(id)arg3;
- (id)initForTestingWithContext:(id)arg1 rows:(unsigned short)arg2 columns:(unsigned char)arg3;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 rows:(unsigned short)arg3 columns:(unsigned short)arg4;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 rows:(unsigned short)arg3 columns:(unsigned short)arg4 stylePreset:(id)arg5;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 rows:(unsigned short)arg3 columns:(unsigned short)arg4 styles:(id)arg5;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 rows:(unsigned short)arg3 columns:(unsigned short)arg4 stylePreset:(id)arg5 styles:(id)arg6;
- (float)floatValueForProperty:(int)arg1;
- (id)objectForProperty:(int)arg1;
- (_Bool)containsProperty:(int)arg1;
- (long long)mediaCompatibilityTypeForData:(id)arg1 associatedHint:(id)arg2;
- (id)compatibilityCheckerForData:(id)arg1 associatedHint:(id)arg2;
- (id)p_propertyMapForReplacingImageFill:(id)arg1 atCellID:(struct TSUCellCoord)arg2;
- (struct CGSize)targetSizeForImageData:(id)arg1 associatedHint:(id)arg2;
- (id)p_imageFillAtCellID:(struct TSUCellCoord)arg1;
- (void)iterateCellsInRegion:(id)arg1 flags:(unsigned long long)arg2 searchFlags:(unsigned long long)arg3 clampingRange:(struct TSUCellRect)arg4 usingBlock:(CDUnknownBlockType)arg5;
- (void)iterateCellsInRegion:(id)arg1 flags:(unsigned long long)arg2 searchFlags:(unsigned long long)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (void)iterateCellsInRange:(struct TSUCellRect)arg1 flags:(unsigned long long)arg2 searchFlags:(unsigned long long)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (void)iterateCellsWithFlags:(unsigned long long)arg1 searchFlags:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)p_iterateCellsAndTerminateWithIterator:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)cellIteratorWithRegion:(id)arg1 flags:(unsigned long long)arg2 searchFlags:(unsigned long long)arg3 clampingRange:(struct TSUCellRect)arg4;
- (id)cellIteratorWithRegion:(id)arg1 flags:(unsigned long long)arg2 searchFlags:(unsigned long long)arg3;
- (id)cellIteratorWithRange:(struct TSUCellRect)arg1 flags:(unsigned long long)arg2 searchFlags:(unsigned long long)arg3;
- (id)cellIteratorWithFlags:(unsigned long long)arg1 searchFlags:(unsigned long long)arg2;
- (id)cellTextStyle:(struct TSUCellCoord)arg1;
- (struct TSCERangeCoordinate)preMergeRangeFromUidTract:(id)arg1;
- (struct TSCERangeCoordinate)resolverExpandCellRangeToCoverMergedCells:(struct TSCERangeCoordinate)arg1;
- (id)UIDSetForRange:(struct _NSRange)arg1 isRows:(_Bool)arg2;
- (vector_4dc5f307)UIDsForRange:(struct _NSRange)arg1 isRows:(_Bool)arg2;
- (id)indexesForUIDs:(const vector_4dc5f307 *)arg1 isRows:(_Bool)arg2;
- (vector_4dc5f307)UIDsForIndexes:(id)arg1 isRows:(_Bool)arg2;
- (unsigned short)indexForUID:(const UUIDData_5fbc143e *)arg1 isRows:(_Bool)arg2;
- (UUIDData_5fbc143e)UIDForIndex:(unsigned short)arg1 isRows:(_Bool)arg2;
- (vector_4dc5f307)allColumnUIDs;
- (vector_4dc5f307)allRowUIDs;
- (_Bool)hasNamesInHeaders;
- (void)resetAllFormulaDependenciesForCell:(struct TSUCellCoord)arg1;
- (void)resetDependenciesForCell:(struct TSUCellCoord)arg1;
- (_Bool)cellWasModifiedInThisRecalcCycle:(struct TSUCellCoord)arg1;
- (struct TSCERangeCoordinate)apparentRangeForRange:(struct TSCERangeCoordinate)arg1 rangeContext:(unsigned char)arg2;
- (struct TSCERangeCoordinate)footerRangeCoordinate;
- (struct TSCERangeCoordinate)tableRangeCoordinate;
- (struct TSCERangeCoordinate)bodyRangeCoordinate;
- (struct TSCETableReference)makeReference:(struct TSUCellCoord)arg1 bottomRight:(struct TSUCellCoord)arg2;
- (id)cellRangeName:(struct TSCERangeCoordinate)arg1 stickyBits:(unsigned char)arg2 suppressIdenticalEndReference:(_Bool)arg3 quoteComponents:(_Bool)arg4 forceEscaping:(_Bool)arg5 rangeNameContainsColumnOrRowName:(out _Bool *)arg6;
- (id)sheetName;
- (UUIDData_5fbc143e)mergeOwnerUID;
- (_Bool)resolverIsATable;
- (UUIDData_5fbc143e)resolverUID;
- (id)tableInfo;
- (void)rearrangeWithMapping:(id)arg1;
- (id)mappingForSortWithRules:(id)arg1 inRows:(id)arg2;
- (void)p_gatherReorganizeValuesForColumn:(unsigned char)arg1 inRows:(id)arg2 outValues:(struct TSTCellReorganizeValue *)arg3;
- (id)objectToArchiveInDependencyTracker;
- (void)beginRewriteForCalculationEngine:(id)arg1 spec:(id)arg2;
- (void)rewriteForCalculationEngine:(id)arg1 formulaID:(CDStruct_ed6d627d)arg2 rewriteSpec:(id)arg3;
- (void)invalidateForCalculationEngine:(id)arg1;
- (void)writeResultsForCalculationEngine:(id)arg1;
- (CDStruct_2a4d9400)recalculateForCalculationEngine:(id)arg1 formulaID:(CDStruct_ed6d627d)arg2 isInCycle:(_Bool)arg3 hasCalculatedPrecedents:(_Bool)arg4;
- (void)notifyTableOfNewResults;
- (void)performReadForOneOffFormulaEvaluation:(id)arg1 forCellID:(struct TSUCellCoord *)arg2;
- (void)unregisterFromCalculationEngine:(id)arg1;
- (int)registerWithCalculationEngine:(id)arg1;
- (_Bool)isRegisteredWithCalculationEngine:(id)arg1;
- (_Bool)registerLast;
- (UUIDData_5fbc143e)formulaOwnerUID;
- (void)registerWithCalculationEngineForDocumentLoad:(id)arg1;
- (_Bool)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg1;

// Remaining properties
@property(readonly, nonatomic, getter=isAnchoredToText) _Bool anchoredToText; // @dynamic anchoredToText;
@property(readonly, nonatomic, getter=isAttachedToBodyText) _Bool attachedToBodyText;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic, getter=isFloatingAboveText) _Bool floatingAboveText; // @dynamic floatingAboveText;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=isInlineWithText) _Bool inlineWithText; // @dynamic inlineWithText;
@property(nonatomic) _Bool matchesObjectPlaceholderGeometry;
@property(nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment; // @dynamic owningAttachment;
@property(readonly, nonatomic) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse; // @dynamic owningAttachmentNoRecurse;
@property(nonatomic) NSObject<TSDContainerInfo> *parentInfo; // @dynamic parentInfo;
@property(readonly, nonatomic) _Bool storageChangesInvalidateWrap;
@property(readonly) Class superclass;

@end

