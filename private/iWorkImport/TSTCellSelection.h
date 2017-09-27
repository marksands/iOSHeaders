//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSKSelection.h>

#import "TSDTextSelection.h"

@class NSString, TSTCellRegion;

__attribute__((visibility("hidden")))
@interface TSTCellSelection : TSKSelection <TSDTextSelection>
{
    struct TSUCellCoord _anchorCellID;
    struct TSUCellCoord _cursorCellID;
    TSTCellRegion *_cellRegion;
    long long _selectionType;
    TSTCellRegion *_baseRegion;
    struct _NSRange _searchReferenceRange;
}

+ (Class)archivedSelectionClass;
+ (id)selectionWithTableModel:(id)arg1 columnIndices:(id)arg2;
+ (id)selectionWithTableModel:(id)arg1 rowIndices:(id)arg2;
+ (id)selectionWithTableModel:(id)arg1 cellRegion:(id)arg2;
+ (id)selectionWithTableModel:(id)arg1 cellUID:(const struct TSTCellUID *)arg2;
+ (id)selectionWithTableModel:(id)arg1 cellID:(struct TSUCellCoord)arg2;
@property(nonatomic) struct _NSRange searchReferenceRange; // @synthesize searchReferenceRange=_searchReferenceRange;
@property(readonly, nonatomic) struct TSUCellCoord cursorCellID; // @synthesize cursorCellID=_cursorCellID;
@property(readonly, nonatomic) TSTCellRegion *baseRegion; // @synthesize baseRegion=_baseRegion;
@property(readonly, nonatomic) struct TSUCellCoord anchorCellID; // @synthesize anchorCellID=_anchorCellID;
@property(readonly, nonatomic) long long selectionType; // @synthesize selectionType=_selectionType;
@property(readonly, nonatomic) TSTCellRegion *cellRegion; // @synthesize cellRegion=_cellRegion;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isAtEndOfLine;
@property(readonly, nonatomic) struct _NSRange range;
- (_Bool)intersectsPartialMergeRangeInTable:(id)arg1;
@property(readonly, copy) NSString *description;
- (_Bool)canEditWithStockCellSubselectionInTable:(id)arg1;
- (_Bool)canEditWithControlCellSubselectionInTable:(id)arg1;
- (_Bool)canEditWithCellSubselectionInTable:(id)arg1;
- (_Bool)containsSingleCellOrMergeInTable:(id)arg1;
- (_Bool)containsCell:(struct TSUCellCoord)arg1;
- (_Bool)containsSelection:(id)arg1;
- (_Bool)areCellsInTheSameRegionInTable:(id)arg1;
- (_Bool)isEqualToSelection:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)remove:(long long)arg1 atIndex:(unsigned short)arg2 count:(unsigned short)arg3;
- (void)insert:(long long)arg1 atIndex:(unsigned short)arg2 count:(unsigned short)arg3;
- (void)setCellRange:(struct TSUCellRect)arg1;
- (id)selectionAdjustedForGeometryInTableInfo:(id)arg1;
- (id)selectionAdjustedForColumnVisibilityInTableInfo:(id)arg1;
- (id)selectionAdjustedForRowVisibilityInTableInfo:(id)arg1;
- (id)selectionByRemovingCellRange:(struct TSUCellRect)arg1 inTable:(id)arg2 withAnchor:(struct TSUCellCoord)arg3 cursor:(struct TSUCellCoord)arg4 selectionType:(long long)arg5;
- (id)selectionByAddingCellRange:(struct TSUCellRect)arg1 inTable:(id)arg2 withAnchor:(struct TSUCellCoord)arg3 cursor:(struct TSUCellCoord)arg4 selectionType:(long long)arg5;
- (id)selectionByExtendingWithCellRange:(struct TSUCellRect)arg1 inTable:(id)arg2 selectionType:(long long)arg3 cursorCell:(struct TSUCellCoord)arg4;
- (void)saveToArchive:(struct SelectionArchive *)arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct SelectionArchive *)arg1 unarchiver:(id)arg2;
- (struct TSUCellCoord)logicalCellIDInTable:(id)arg1;
@property(readonly, nonatomic) unsigned long long cellCount;
- (id)initWithTableModel:(id)arg1 columnIndices:(id)arg2;
- (id)initWithTableModel:(id)arg1 rowIndices:(id)arg2;
- (id)initWithTableModel:(id)arg1 cellRegion:(id)arg2;
- (id)initWithTableModel:(id)arg1 andPreviousSelection:(id)arg2 offsetBy:(CDStruct_945081a1)arg3;
- (id)initWithTableModel:(id)arg1 rowOrColumn:(long long)arg2 index:(unsigned short)arg3 count:(unsigned short)arg4;
- (id)initWithTableModel:(id)arg1 startingColumnIndex:(unsigned char)arg2 numberOfColumns:(unsigned short)arg3;
- (id)initWithTableModel:(id)arg1 startingRowIndex:(unsigned short)arg2 numberOfRows:(unsigned short)arg3;
- (id)initWithTableModel:(id)arg1 andCellID:(struct TSUCellCoord)arg2;
- (id)initWithTableModel:(id)arg1 cellID:(struct TSUCellCoord)arg2 selectionType:(long long)arg3;
- (id)initWithTableModel:(id)arg1 andCellRange:(struct TSUCellRect)arg2;
- (id)initWithTableModel:(id)arg1 selectionType:(long long)arg2;
- (id)initWithTableModel:(id)arg1 cellRange:(struct TSUCellRect)arg2 type:(long long)arg3 anchorCellID:(struct TSUCellCoord)arg4 cursorCellID:(struct TSUCellCoord)arg5;
- (id)initWithTableModel:(id)arg1 cellRegion:(id)arg2 anchorCellID:(struct TSUCellCoord)arg3 cursorCellID:(struct TSUCellCoord)arg4;
- (id)initWithTableModel:(id)arg1 cellRegion:(id)arg2 anchorCellID:(struct TSUCellCoord)arg3 cursorCellID:(struct TSUCellCoord)arg4 selectionType:(long long)arg5;
- (id)initWithTableModel:(id)arg1 cellRegion:(id)arg2 anchorCellID:(struct TSUCellCoord)arg3 cursorCellID:(struct TSUCellCoord)arg4 baseRegion:(id)arg5;
- (id)initWithTableModel:(id)arg1 cellRegion:(id)arg2 anchorCellID:(struct TSUCellCoord)arg3 cursorCellID:(struct TSUCellCoord)arg4 baseRegion:(id)arg5 selectionType:(long long)arg6;
- (id)initWithCellRegion:(id)arg1 anchorCellID:(struct TSUCellCoord)arg2 cursorCellID:(struct TSUCellCoord)arg3 baseRegion:(id)arg4 selectionType:(long long)arg5;
- (id)initWithCellRegion:(id)arg1 anchorCellID:(struct TSUCellCoord)arg2 cursorCellID:(struct TSUCellCoord)arg3 baseRegion:(id)arg4 selectionType:(long long)arg5 searchReferenceRange:(struct _NSRange)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

