//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIViewControllerAnimatedTransitioning.h"
#import "UIViewControllerInteractiveTransitioning.h"

@class NSString, UIViewPropertyAnimator;

__attribute__((visibility("hidden")))
@interface _UIPreviewInteractionPresentationTransition : NSObject <UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning>
{
    id <UIViewControllerContextTransitioning> _transitionContext;
    UIViewPropertyAnimator *_presentationAnimator;
    double _interactiveTransitionFraction;
    _Bool _shouldPerformAsDismissTransition;
    _Bool _didScheduleFinishTransition;
    _Bool _didScheduleCancelTransition;
}

- (void).cxx_destruct;
- (_Bool)_shouldReduceMotion;
- (void)_applyPushDecayEffectTransformToView:(id)arg1;
- (id)_newPushDecayAnimator;
- (id)_newReducedMotionTimingCurveProviderForPreviewTransition;
- (id)_newTimingCurveProviderForPreviewTransition;
- (id)_preparedPresentationAnimator;
- (id)_previewPresentationControllerForViewController:(id)arg1;
- (id)_previewPresentationControllerForTransitionContext:(id)arg1;
- (void)_performCancelTransition;
- (void)_performFinishTransition;
@property(readonly, nonatomic) _Bool wantsInteractiveStart;
- (void)startInteractiveTransition:(id)arg1;
- (void)animationEnded:(_Bool)arg1;
- (void)animateTransition:(id)arg1;
- (id)interruptibleAnimatorForTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)cancelTransition;
- (void)finishTransition;
- (void)updateInteractiveTransition:(double)arg1;
@property(readonly, nonatomic) double interactiveTransitionFraction; // @dynamic interactiveTransitionFraction;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) long long completionCurve;
@property(readonly, nonatomic) double completionSpeed;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

