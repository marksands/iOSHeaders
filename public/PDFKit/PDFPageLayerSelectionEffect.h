//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PDFKit/PDFPageLayerEffect.h>

__attribute__((visibility("hidden")))
@interface PDFPageLayerSelectionEffect : PDFPageLayerEffect
{
}

- (id)_createSelectionLollipop:(double)arg1 isLeftSide:(_Bool)arg2;
- (void)_generateSelectionIsFirstPage:(_Bool)arg1 isLastPage:(_Bool)arg2;
- (void)_updateHandleGraphics;
- (void)_updateGraphics;
- (void)enableTextSelectionHandles;
- (void)clearTextSelectionHandles;
- (struct CGImage *)_createTextMagnifierContentsImageAtPagePoint:(struct CGPoint)arg1 forLoupeType:(int)arg2 forSize:(struct CGSize)arg3;
- (void)_processloupeRenderRequest;
- (void)_updateMagnificationLoupeLayer:(int)arg1 withPagePoint:(struct CGPoint)arg2;
- (id)_createMagnificationLoupeLayer:(int)arg1;
- (void)setLollipopMagnifierPagePoint:(struct CGPoint)arg1;
- (void)clearLollipopMagnifier;
- (void)setTextSelectionMagnifierPagePoint:(struct CGPoint)arg1;
- (void)clearTextSelectionMagnifier;
- (id)_activeColor;
- (void)_generateRects;
- (void)setSelection:(id)arg1;
- (void)update;
- (id)selection;
- (void)dealloc;
- (id)initWithPDFPageLayer:(id)arg1;

@end

