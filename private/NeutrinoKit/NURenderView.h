//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "CAAnimationDelegate.h"

@class CALayer, NSString, NUImageGeometry, _NUBackfillLayer, _NUContainerLayer, _NUROILayer;

@interface NURenderView : UIView <CAAnimationDelegate>
{
    _NUBackfillLayer *_backfillLayer;
    _NUROILayer *_roiLayer;
    _NUContainerLayer *_containerLayer;
    NUImageGeometry *_geometry;
    _Bool _transitionAnimationInFlight;
    _Bool _shouldRemoveAnimation;
    CALayer *_geometryAnimationLayer;
    _Bool _debugMode;
}

@property(nonatomic) _Bool debugMode; // @synthesize debugMode=_debugMode;
- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)animationDidStart:(id)arg1;
- (void)transitionToSize:(struct CGSize)arg1 offset:(struct CGPoint)arg2 duration:(double)arg3 animationCurve:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)transitionToSize:(struct CGSize)arg1 duration:(double)arg2 animationCurve:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)willMoveToWindow:(id)arg1;
- (struct CGRect)convertRectToImage:(struct CGRect)arg1;
@property(retain, nonatomic) NUImageGeometry *geometry;
- (void)layoutSubviews;
- (_Bool)inLiveResize;
- (id)_containerLayer;
- (id)_roiLayer;
- (id)_backfillLayer;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

