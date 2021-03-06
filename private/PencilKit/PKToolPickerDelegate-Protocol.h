//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSUndoManager, PKCanvasView, PKInk, PKToolPicker;

@protocol PKToolPickerDelegate <NSObject>
- (PKCanvasView *)canvasViewForToolPicker:(PKToolPicker *)arg1;
- (NSUndoManager *)undoManagerForToolPicker:(PKToolPicker *)arg1;
- (PKInk *)selectedInkForToolPicker:(PKToolPicker *)arg1;
- (void)toolPicker:(PKToolPicker *)arg1 setSelectedInk:(PKInk *)arg2;
@end

