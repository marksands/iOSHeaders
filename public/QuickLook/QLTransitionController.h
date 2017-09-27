//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QLTransitionControllerProtocol.h"
#import "UIViewControllerAnimatedTransitioning.h"

@class NSString, QLPreviewController, QLTransitionContext, UINavigationController, UIView, UIViewController, UIViewController<QLCustomTransitioning>;

__attribute__((visibility("hidden")))
@interface QLTransitionController : NSObject <UIViewControllerAnimatedTransitioning, QLTransitionControllerProtocol>
{
    UIView *_transitionBackgroundView;
    UINavigationController *_disabledNavigationController;
    CDUnknownBlockType _startTransitionBlock;
    _Bool _showing;
    QLTransitionContext *_quickLookTransitionContext;
    UIViewController<QLCustomTransitioning> *_animatedController;
    id <UIViewControllerContextTransitioning> _transitionContext;
    id _transitionDriver;
    double _duration;
}

@property double duration; // @synthesize duration=_duration;
@property(readonly) id transitionDriver; // @synthesize transitionDriver=_transitionDriver;
@property __weak id <UIViewControllerContextTransitioning> transitionContext; // @synthesize transitionContext=_transitionContext;
@property(readonly) UIViewController<QLCustomTransitioning> *animatedController; // @synthesize animatedController=_animatedController;
@property(retain) QLTransitionContext *quickLookTransitionContext; // @synthesize quickLookTransitionContext=_quickLookTransitionContext;
@property _Bool showing; // @synthesize showing=_showing;
- (void).cxx_destruct;
- (void)_view:(id)arg1 applyFrameFromTransitionContextAsFinalFrame:(_Bool)arg2 isToView:(_Bool)arg3;
- (void)_completeBackgroundTransition:(_Bool)arg1;
- (void)_completeOverlayTransition:(_Bool)arg1;
- (void)_updateBackgroundTransitionWithProgress:(double)arg1;
- (void)_updateOverlayTransitionWithProgress:(double)arg1;
- (CDStruct_3ea018b0)_requiredVisualStateTransitions;
- (void)completeTransition:(_Bool)arg1 withDuration:(double)arg2;
- (void)updateTransitionWithProgress:(double)arg1;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)_performTransition;
@property(readonly) QLPreviewController *previewController;
@property(readonly) UIViewController *presenterViewController;
- (void)tearDownTransition:(_Bool)arg1;
- (void)completeTransition:(_Bool)arg1;
- (void)_performStartBlockIfNeeded;
- (void)setUpWithTransitionContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

