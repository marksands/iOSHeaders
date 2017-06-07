//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/TSTCellIterating-Protocol.h>

@class NSMutableIndexSet, NSString, TSTCell, TSTCellRegion, TSTInfo, TSTMutableCellIteratorData;
@protocol TSTCellRegionIterating, TSTCellRegionIterating><TSTMutableCellIteratorDataUpdating, TSTDataStoreIterating><TSTCellRegionIterating><TSTMutableCellIteratorDataUpdating, TSTInfoDelegating;

__attribute__((visibility("hidden")))
@interface TSTCellIterator : NSObject <TSTCellIterating>
{
    _Bool _returnEmptyCells;
    _Bool _returnOneEmptyCell;
    _Bool _terminateRegionIterator;
    unsigned short _rowForColumnIndiciesWithMerges;
    id <TSTInfoDelegating> _infoDelegating;
    TSTInfo *_tableInfo;
    TSTCellRegion *_region;
    TSTCell *_cell;
    TSTMutableCellIteratorData *_cellData;
    id <TSTCellRegionIterating><TSTMutableCellIteratorDataUpdating> _contentIterator;
    id <TSTCellRegionIterating><TSTMutableCellIteratorDataUpdating> _strokeIterator;
    id <TSTCellRegionIterating> _regionIterator;
    id <TSTDataStoreIterating><TSTCellRegionIterating><TSTMutableCellIteratorDataUpdating> _dataStoreIterator;
    NSMutableIndexSet *_columnIndiciesWithMerges;
}

@property(retain, nonatomic) NSMutableIndexSet *columnIndiciesWithMerges; // @synthesize columnIndiciesWithMerges=_columnIndiciesWithMerges;
@property(nonatomic) unsigned short rowForColumnIndiciesWithMerges; // @synthesize rowForColumnIndiciesWithMerges=_rowForColumnIndiciesWithMerges;
@property(retain, nonatomic) id <TSTDataStoreIterating><TSTCellRegionIterating><TSTMutableCellIteratorDataUpdating> dataStoreIterator; // @synthesize dataStoreIterator=_dataStoreIterator;
@property(retain, nonatomic) id <TSTCellRegionIterating> regionIterator; // @synthesize regionIterator=_regionIterator;
@property(retain, nonatomic) id <TSTCellRegionIterating><TSTMutableCellIteratorDataUpdating> strokeIterator; // @synthesize strokeIterator=_strokeIterator;
@property(retain, nonatomic) id <TSTCellRegionIterating><TSTMutableCellIteratorDataUpdating> contentIterator; // @synthesize contentIterator=_contentIterator;
@property(nonatomic) _Bool terminateRegionIterator; // @synthesize terminateRegionIterator=_terminateRegionIterator;
@property(nonatomic) _Bool returnOneEmptyCell; // @synthesize returnOneEmptyCell=_returnOneEmptyCell;
@property(nonatomic) _Bool returnEmptyCells; // @synthesize returnEmptyCells=_returnEmptyCells;
@property(retain, nonatomic) TSTMutableCellIteratorData *cellData; // @synthesize cellData=_cellData;
@property(retain, nonatomic) TSTCell *cell; // @synthesize cell=_cell;
@property(readonly, nonatomic) TSTCellRegion *region; // @synthesize region=_region;
@property(readonly, retain, nonatomic) TSTInfo *tableInfo; // @synthesize tableInfo=_tableInfo;
@property(retain, nonatomic) id <TSTInfoDelegating> infoDelegating; // @synthesize infoDelegating=_infoDelegating;
- (void).cxx_destruct;
- (void)p_updateDataForCellID:(struct TSUCellCoord)arg1;
- (void)p_updateDataForMergeAtCellID:(struct TSUCellCoord)arg1;
- (struct TSUCellCoord)p_getNextCellID;
@property(readonly, nonatomic) unsigned short cellCountInRow;
- (void)terminate;
- (_Bool)getNextCellData:(id *)arg1;
- (id)nextCellData;
- (void)iterateCellsUsingBlock:(CDUnknownBlockType)arg1;
- (id)initWithTableInfo:(id)arg1 region:(id)arg2 flags:(unsigned long long)arg3 searchFlags:(unsigned long long)arg4;
- (id)initWithTableInfo:(id)arg1 range:(struct TSUCellRect)arg2 flags:(unsigned long long)arg3 searchFlags:(unsigned long long)arg4;
- (id)initWithTableInfo:(id)arg1 flags:(unsigned long long)arg2 searchFlags:(unsigned long long)arg3;
- (id)initWithTableInfo:(id)arg1 region:(id)arg2 flags:(unsigned long long)arg3 searchFlags:(unsigned long long)arg4 clampingRange:(struct TSUCellRect)arg5;
- (id)initWithTableInfo:(id)arg1 infoDelegating:(id)arg2 region:(id)arg3 flags:(unsigned long long)arg4 searchFlags:(unsigned long long)arg5 clampingRange:(struct TSUCellRect)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

