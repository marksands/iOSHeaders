//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TSTCellRegionIterating.h"
#import "TSTMutableCellIteratorDataUpdating.h"

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface TSTContentComposingIterator : NSObject <TSTCellRegionIterating, TSTMutableCellIteratorDataUpdating>
{
    struct TSUCellCoord _minCursorCellID;
    NSMutableArray *_iterators;
    vector_38b190b0 _cursorCellIDs;
}

@property(retain, nonatomic) NSMutableArray *iterators; // @synthesize iterators=_iterators;
@property(nonatomic) vector_38b190b0 cursorCellIDs; // @synthesize cursorCellIDs=_cursorCellIDs;
@property(nonatomic) struct TSUCellCoord minCursorCellID; // @synthesize minCursorCellID=_minCursorCellID;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)terminate;
- (struct TSUCellCoord)advanceToCellID:(struct TSUCellCoord)arg1;
- (struct TSUCellCoord)getNext;
- (void)updateCellData:(id)arg1;
- (void)addIterator:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

