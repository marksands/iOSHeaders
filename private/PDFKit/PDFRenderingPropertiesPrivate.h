//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PDFLayerController, PDFView, UIColor;

__attribute__((visibility("hidden")))
@interface PDFRenderingPropertiesPrivate : NSObject
{
    PDFView *pdfView;
    PDFLayerController *pdfLayerController;
    long long displayBox;
    _Bool shouldAntiAlias;
    double greekingThreshold;
    long long interpolationQuality;
    double lineWidthThreshold;
    UIColor *pageColor;
    _Bool forceWebKitMainThread;
    _Bool enablePageShadows;
    _Bool enableTileEdgeColoring;
    _Bool enableAccessibilityDrawing;
    double screenScaleFactor;
    _Bool enableTileUpdates;
    _Bool isUsingPDFExtensionView;
    struct CGColorSpace *deviceColorSpace;
}

- (void).cxx_destruct;

@end

