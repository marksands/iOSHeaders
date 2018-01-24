//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSIndexSet, NSMutableIndexSet, NSString, TSCECalculationEngine, TSCEUidTract, TSKDocumentRoot, TSUMutableUUIDSet, TSUUUIDSet, TSWPParagraphStyle;

@protocol TSCEReferenceResolving <NSObject>
+ (struct TSCEFormat)formatFromVector:(const struct TSCETableReferenceVector *)arg1 atIndex:(unsigned long long)arg2;
+ (int)getHidingAction:(const struct TSCETableReference *)arg1;
+ (struct TSCERangeRef)getRangeReference:(const struct TSCETableReference *)arg1;
+ (struct TSCERangeCoordinate)getRange:(const struct TSCETableReference *)arg1;
+ (struct TSCEFormat)format:(const struct TSCETableReference *)arg1 fromCell:(struct TSUCellCoord)arg2;
+ (int)mergeReferences:(struct TSCETableReference *)arg1 left:(const struct TSCETableReference *)arg2 right:(const struct TSCETableReference *)arg3;
+ (struct TSCEValue)scalarValue:(const struct TSCETableReference *)arg1 fromCell:(struct TSUCellCoord)arg2 permitAccessInsideMergeRegions:(_Bool)arg3 fetchRichTextAttributesIfPlainText:(_Bool)arg4;
+ (struct TSCETableReference)makeCellReferenceInSameTable:(const struct TSCETableReference *)arg1 cellID:(struct TSUCellCoord)arg2;
+ (void)prefetchData:(struct TSCEReferenceValue *)arg1 fromVectorObject:(struct TSCETableReferenceVector *)arg2 cellID:(struct TSUCellCoord)arg3;
+ (struct TSCETableReferenceVector)makeReferenceVectorWithReference:(const struct TSCETableReference *)arg1 rangeContext:(unsigned char)arg2 apparentRangePtr:(struct TSCERangeCoordinate *)arg3;
+ (struct TSCETableReference)canonicalCellReferenceForReference:(const struct TSCETableReference *)arg1;
+ (id <TSCEReferenceResolving>)resolverMatchingNameWithContextContainer:(NSString *)arg1 inDocumentRoot:(TSKDocumentRoot *)arg2 contextContainerName:(NSString *)arg3;
+ (id <TSCEReferenceResolving>)resolverMatchingName:(NSString *)arg1 inDocumentRoot:(TSKDocumentRoot *)arg2 contextResolver:(id <TSCEReferenceResolving>)arg3;
+ (id <TSCEResolverContainer>)resolverContainerMatchingName:(NSString *)arg1 inDocumentRoot:(TSKDocumentRoot *)arg2;
- (TSWPParagraphStyle *)cellTextStyle:(struct TSUCellCoord)arg1;
- (struct TSCERangeCoordinate)preMergeRangeFromUidTract:(TSCEUidTract *)arg1;
- (struct TSCERangeCoordinate)resolverExpandCellRangeToCoverMergedCells:(struct TSCERangeCoordinate)arg1;
- (TSUMutableUUIDSet *)UIDSetForRange:(struct _NSRange)arg1 isRows:(_Bool)arg2;
- (NSMutableIndexSet *)mutableIndexesForUIDSet:(TSUUUIDSet *)arg1 isRows:(_Bool)arg2 notFoundUIDs:(TSUMutableUUIDSet *)arg3;
- (TSUMutableUUIDSet *)UIDSetForIndexes:(NSIndexSet *)arg1 isRows:(_Bool)arg2;
- (vector_4dc5f307)UIDsForRange:(struct _NSRange)arg1 isRows:(_Bool)arg2;
- (NSMutableIndexSet *)indexesForUIDs:(const vector_4dc5f307 *)arg1 isRows:(_Bool)arg2;
- (vector_4dc5f307)UIDsForIndexes:(NSIndexSet *)arg1 isRows:(_Bool)arg2;
- (unsigned short)indexForUID:(const UUIDData_5fbc143e *)arg1 isRows:(_Bool)arg2;
- (UUIDData_5fbc143e)UIDForIndex:(unsigned short)arg1 isRows:(_Bool)arg2;
- (vector_4dc5f307)allColumnUIDs;
- (vector_4dc5f307)columnUIDsForColumnRange:(struct _NSRange)arg1;
- (NSMutableIndexSet *)mutableColumnIndexesForUIDs:(const vector_4dc5f307 *)arg1;
- (vector_4dc5f307)columnUIDsForColumnIndexes:(NSIndexSet *)arg1;
- (unsigned char)columnIndexForColumnUID:(const UUIDData_5fbc143e *)arg1;
- (UUIDData_5fbc143e)columnUIDForColumnIndex:(unsigned char)arg1;
- (vector_4dc5f307)allRowUIDs;
- (vector_4dc5f307)rowUIDsForRowRange:(struct _NSRange)arg1;
- (NSMutableIndexSet *)mutableRowIndexesForUIDs:(const vector_4dc5f307 *)arg1;
- (vector_4dc5f307)rowUIDsForRowIndexes:(NSIndexSet *)arg1;
- (unsigned short)rowIndexForRowUID:(const UUIDData_5fbc143e *)arg1;
- (UUIDData_5fbc143e)rowUIDForRowIndex:(unsigned short)arg1;
- (_Bool)hasNamesInHeaders;
- (NSString *)cellRangeName:(struct TSCERangeCoordinate)arg1 stickyBits:(unsigned char)arg2 suppressIdenticalEndReference:(_Bool)arg3 quoteComponents:(_Bool)arg4 forceEscaping:(_Bool)arg5 rangeNameContainsColumnOrRowName:(out _Bool *)arg6;
- (NSString *)tableName;
- (NSString *)sheetName;
- (struct TSCERangeCoordinate)apparentRangeForRange:(struct TSCERangeCoordinate)arg1 rangeContext:(unsigned char)arg2;
- (UUIDData_5fbc143e)conditionalStyleFormulaOwnerUID;
- (void)resetAllFormulaDependenciesForCell:(struct TSUCellCoord)arg1;
- (void)resetDependenciesForCell:(struct TSUCellCoord)arg1;
- (_Bool)cellWasModifiedInThisRecalcCycle:(struct TSUCellCoord)arg1;
- (struct TSCERangeCoordinate)footerRangeCoordinate;
- (struct TSCERangeCoordinate)tableRangeCoordinate;
- (struct TSCERangeCoordinate)bodyRangeCoordinate;
- (_Bool)hasCellID:(struct TSUCellCoord)arg1;
- (struct TSCETableReference)makeReference:(struct TSUCellCoord)arg1 bottomRight:(struct TSUCellCoord)arg2;
- (UUIDData_5fbc143e)resolverUID;
- (UUIDData_5fbc143e)mergeOwnerUID;
- (id)tableModel;
- (id)tableInfo;
- (_Bool)resolverIsATable;
- (TSCECalculationEngine *)calcEngine;
@end

