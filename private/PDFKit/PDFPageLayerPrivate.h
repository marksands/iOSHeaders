//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CALayer, NSDate, NSMutableArray, NSMutableDictionary, PDFPage, PDFRenderingProperties;
@protocol PDFPageLayerGeometryInterface;

__attribute__((visibility("hidden")))
@interface PDFPageLayerPrivate : NSObject
{
    PDFPage *page;
    NSObject<PDFPageLayerGeometryInterface> *geometryInterface;
    PDFRenderingProperties *renderingProperties;
    long long oldPageRotation;
    struct CGRect oldBoundsForBox;
    CALayer *tilesLayer;
    int generationCount;
    double lastLayoutZoomFactor;
    NSDate *lastZoomChange;
    _Bool zoomChangeScheduled;
    unsigned long long visibilityDelegateIndex;
    _Bool tileLayerHidden;
    NSMutableArray *tiles;
    NSMutableDictionary *pageLayerEffects;
    _Bool allowUpdate;
    // Error parsing type: AB, name: isTiling
    // Error parsing type: AB, name: requestedTiling
}

- (void).cxx_destruct;

@end

