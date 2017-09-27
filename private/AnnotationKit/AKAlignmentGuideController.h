//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AKPageController;

@interface AKAlignmentGuideController : NSObject
{
    struct CGPoint _initialDraggedAnnotationsCombinedCenter;
    struct CGPoint *_otherAnnotationCenters;
    unsigned long long _otherAnnotationCentersCount;
    _Bool _exifHasFlippedAxes;
    AKPageController *_pageController;
    double _screenToModelScaleFactor;
}

@property double screenToModelScaleFactor; // @synthesize screenToModelScaleFactor=_screenToModelScaleFactor;
@property _Bool exifHasFlippedAxes; // @synthesize exifHasFlippedAxes=_exifHasFlippedAxes;
@property __weak AKPageController *pageController; // @synthesize pageController=_pageController;
- (void).cxx_destruct;
- (struct CGPoint)guideAlignedPointForPoint:(struct CGPoint)arg1 withEvent:(id)arg2 orRecognizer:(id)arg3;
- (void)dealloc;
- (id)initWithPageController:(id)arg1;

@end

