//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CALayer, NSMutableDictionary, PDFPage, PDFSelection, PDFTimer;

__attribute__((visibility("hidden")))
@interface PDFPageSelectionLayerPrivate : NSObject
{
    PDFPage *page;
    long long displayBox;
    PDFSelection *selection;
    NSMutableDictionary *selectionRects;
    _Bool showTextSelectionHandle;
    _Bool isOnFirstPage;
    _Bool isOnLastPage;
    struct CGRect firstPageRect;
    struct CGRect lastPageRect;
    CALayer *selectionStartHandle;
    CALayer *selectionEndHandle;
    PDFTimer *zoomTimer;
}

- (void).cxx_destruct;

@end

