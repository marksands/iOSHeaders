//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUICore/PXObservable.h>

#import "PXMutableNumberAnimator.h"

@class CADisplayLink, NSMutableArray;

@interface PXNumberAnimator : PXObservable <PXMutableNumberAnimator>
{
    _Bool _isPerformingChanges;
    struct {
        _Bool presentationValue;
    } _needsUpdateFlags;
    struct _PXValueAnimationSpec _currentAnimationSpec;
    NSMutableArray *_animations;
    CADisplayLink *_displayLink;
    double _value;
    double _presentationValue;
    double _epsilon;
}

@property(readonly, nonatomic) double epsilon; // @synthesize epsilon=_epsilon;
@property(nonatomic, setter=_setPresentationValue:) double presentationValue; // @synthesize presentationValue=_presentationValue;
@property(readonly, nonatomic) double value; // @synthesize value=_value;
- (void).cxx_destruct;
- (void)_updatePresentationValueIfNeeded;
- (void)_invalidatePresentationValue;
- (void)_updateIfNeeded;
- (void)_setNeedsUpdate;
- (_Bool)_needsUpdate;
- (void)setValue:(double)arg1;
- (void)didPerformChanges;
- (id)mutableChangeObject;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (void)_handleDisplayLink:(id)arg1;
- (void)_setAnimating:(_Bool)arg1;
- (void)performChangesUsingSpringAnimationWithStiffness:(double)arg1 dampingRatio:(double)arg2 initialVelocity:(double)arg3 changes:(CDUnknownBlockType)arg4;
- (void)performChangesUsingDefaultSpringAnimationWithInitialVelocity:(double)arg1 changes:(CDUnknownBlockType)arg2;
- (void)performChangesWithoutAnimation:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithValue:(double)arg1;
- (id)init;

@end

