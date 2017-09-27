//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PXChangeDirectionNumberFilter, PXInitialHysteresisNumberFilter;

@interface PXSwipeDownTracker : NSObject
{
    _Bool _didStartTracking;
    struct CGPoint _initialTouchLocation;
    struct CGPoint _initialCenter;
    struct CGRect _initialBounds;
    struct CGAffineTransform _initialTransform;
    _Bool _shouldFinishDismissal;
    unsigned long long _options;
    double _dismissalProgress;
    double _finalAnimationDuration;
    double _finalAnimationSpringDamping;
    PXChangeDirectionNumberFilter *_verticalDirectionFilter;
    PXInitialHysteresisNumberFilter *_horizontalTranslationFilter;
    struct CGPoint _trackedCenter;
    struct CGRect _trackedBounds;
    struct PXDisplayVelocity _trackedVelocity;
    struct CGAffineTransform _trackedTransform;
}

@property(retain, nonatomic) PXInitialHysteresisNumberFilter *horizontalTranslationFilter; // @synthesize horizontalTranslationFilter=_horizontalTranslationFilter;
@property(retain, nonatomic) PXChangeDirectionNumberFilter *verticalDirectionFilter; // @synthesize verticalDirectionFilter=_verticalDirectionFilter;
@property(readonly, nonatomic) double finalAnimationSpringDamping; // @synthesize finalAnimationSpringDamping=_finalAnimationSpringDamping;
@property(readonly, nonatomic) double finalAnimationDuration; // @synthesize finalAnimationDuration=_finalAnimationDuration;
@property(nonatomic) struct PXDisplayVelocity trackedVelocity; // @synthesize trackedVelocity=_trackedVelocity;
@property(nonatomic) struct CGAffineTransform trackedTransform; // @synthesize trackedTransform=_trackedTransform;
@property(nonatomic) struct CGRect trackedBounds; // @synthesize trackedBounds=_trackedBounds;
@property(nonatomic) struct CGPoint trackedCenter; // @synthesize trackedCenter=_trackedCenter;
@property(nonatomic) _Bool shouldFinishDismissal; // @synthesize shouldFinishDismissal=_shouldFinishDismissal;
@property(nonatomic) double dismissalProgress; // @synthesize dismissalProgress=_dismissalProgress;
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
- (void).cxx_destruct;
- (void)trackGestureTranslation:(struct CGPoint)arg1 velocity:(struct CGPoint)arg2;
- (void)startTrackingCenter:(struct CGPoint)arg1 bounds:(struct CGRect)arg2 transform:(struct CGAffineTransform)arg3 withInitialGestureLocation:(struct CGPoint)arg4;
- (id)initWithOptions:(unsigned long long)arg1;
- (id)init;

@end

