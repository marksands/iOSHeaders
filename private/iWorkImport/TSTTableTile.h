//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface TSTTableTile : TSPObject
{
    unsigned char _maxColumn;
    unsigned char _storageVersion;
    unsigned short _maxRow;
    unsigned short _numCells;
    unsigned short _numRows;
    NSMutableArray *_rowInfos;
}

@property(nonatomic) unsigned char storageVersion; // @synthesize storageVersion=_storageVersion;
@property(retain, nonatomic) NSMutableArray *rowInfos; // @synthesize rowInfos=_rowInfos;
@property(nonatomic) unsigned short numRows; // @synthesize numRows=_numRows;
@property(nonatomic) unsigned short numCells; // @synthesize numCells=_numCells;
@property(nonatomic) unsigned short maxRow; // @synthesize maxRow=_maxRow;
@property(nonatomic) unsigned char maxColumn; // @synthesize maxColumn=_maxColumn;
- (void).cxx_destruct;
- (void)mergeWithTile:(id)arg1 atRowOffset:(unsigned short)arg2;
- (id)splitAtRowIndex:(unsigned short)arg1;
@property(readonly, nonatomic) unsigned short midpointForRowSplit;
- (_Bool)shouldMergeRowsWithTile:(id)arg1;
@property(readonly, nonatomic) _Bool shouldMergeRows;
@property(readonly, nonatomic) _Bool shouldSplitRows;
- (void)spliceAtTileRowIndex:(unsigned short)arg1 withRowInfo:(id)arg2;
- (id)yankRowInfoAtTileRowIndex:(unsigned short)arg1;
- (void)yankRowsAtTileRowIndex:(unsigned short)arg1 numberOfRows:(unsigned short)arg2 outRowArray:(id)arg3;
- (void)removeRowsAtTileRowIndex:(unsigned short)arg1 numberOfRows:(unsigned short)arg2;
- (void)insertRowsAtTileRowIndex:(unsigned short)arg1 numberOfRows:(unsigned short)arg2;
- (void)moveColumnsAtColumnIndex:(unsigned char)arg1 numberOfColumns:(unsigned short)arg2 toDestColumnIndex:(unsigned char)arg3;
- (int)removeColumnsAtColumnIndex:(unsigned char)arg1 numberOfColumns:(unsigned short)arg2;
- (int)insertColumnsAtColumnIndex:(unsigned char)arg1 numberOfColumns:(unsigned short)arg2;
- (void)setCell:(id)arg1 atColumnIndex:(unsigned char)arg2 tileRowIndex:(unsigned short)arg3;
- (struct TSTCellStorage *)cellStorageRefAtColumnIndex:(unsigned char)arg1 tileRowIndex:(unsigned short)arg2;
- (id)rowInfoForTileArrayIndex:(unsigned short)arg1;
- (id)rowInfoAtOrAfterTileRowIndex:(unsigned short)arg1 outTileRowIndex:(out unsigned short *)arg2;
- (id)rowInfoForTileRowIndex:(unsigned short)arg1 createIfMissing:(_Bool)arg2;
- (void)p_removeRowInfo:(id)arg1;
- (id)p_addRowInfoAtTileRowIndex:(unsigned short)arg1;
- (void)p_insertRowInfo:(id)arg1 atTileRowIndex:(unsigned short)arg2;
- (void)pruneEmptyRows;
- (id)description;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (id)packageLocator;
- (id)initWithContext:(id)arg1;
- (id)initWithRows:(id)arg1 context:(id)arg2;
- (void)p_recalculateCellCount;
- (void)p_recalculateMaxRowAndColumn;
- (void)p_recalculateMaxColumn;
- (void)p_recalculateMaxRow;
- (void)i_upgradeTileRowInfosWithDataStore:(id)arg1;

@end

