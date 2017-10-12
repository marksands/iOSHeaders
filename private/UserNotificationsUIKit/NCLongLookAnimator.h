//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIViewControllerAnimatedTransitioning.h"

@class NSPointerArray, NSString, UIView;

@interface NCLongLookAnimator : NSObject <UIViewControllerAnimatedTransitioning>
{
    UIView *_sourceView;
    NSPointerArray *_observers;
    _Bool _presenting;
}

@property(readonly, nonatomic, getter=isPresenting) _Bool presenting; // @synthesize presenting=_presenting;
- (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)_animatePresentation:(_Bool)arg1 withTransitionContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_presentedViewForPresentation:(_Bool)arg1 withTransitionContext:(id)arg2;
- (id)_presentedViewControllerForPresentation:(_Bool)arg1 withTransitionContext:(id)arg2;
- (id)_sourceViewForPresentation:(_Bool)arg1 withTransitionContext:(id)arg2;
- (id)_presentingViewForPresentation:(_Bool)arg1 withTransitionContext:(id)arg2;
- (id)_animationFactoryForLongLookPresentation:(_Bool)arg1;
- (_Bool)_isTransitionAnimated;
- (void)_notifyObserversWithBlock:(CDUnknownBlockType)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)initForPresentation:(_Bool)arg1 withSourceView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
