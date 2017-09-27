//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSSet, TSDTilingLayer, TSTSelectionDragController, TSTTableReferences;

@protocol TSTTableRepInternal
@property(copy, nonatomic) NSSet *visibleFillKnobs;
@property(readonly, nonatomic) _Bool usesWholeChromeResizer;
@property(readonly, nonatomic) _Bool selectsCellOnInitialTap;
@property(readonly, nonatomic) _Bool selectionUsesBezierPath;
@property(nonatomic) _Bool selectionDragAbortedOnNewSelection;
@property(nonatomic) __weak TSTSelectionDragController *cellDragController;
@property(readonly, nonatomic) _Bool zoomOperationIsInProgress;
@property(readonly, nonatomic) _Bool aspectOperationIsInProgress;
@property(readonly, nonatomic) TSTTableReferences *references;
@property(nonatomic) struct TSUCellCoord ratingsDragCellID;
@property(readonly, nonatomic) TSDTilingLayer *overlayFrozenHeaderRows;
@property(nonatomic) struct CGRect searchSelectionBounds;
@end

