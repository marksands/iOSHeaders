//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NCBannerPresentationAnimatorDelegate.h"
#import "NCViewControllerTransitioningDelegate.h"

@class NSString, UIGestureRecognizer, UIViewController;

@interface NCBannerPresentationTransitionDelegate : NSObject <NCBannerPresentationAnimatorDelegate, NCViewControllerTransitioningDelegate>
{
    UIViewController *_presentedViewController;
    _Bool _transitioning;
    id <NCBannerPresentationTransitioningDelegateObserver> _transitioningDelegateObserver;
    UIGestureRecognizer *_activeGesture;
}

@property(retain, nonatomic) UIGestureRecognizer *activeGesture; // @synthesize activeGesture=_activeGesture;
@property(readonly, nonatomic, getter=isTransitioning) _Bool transitioning; // @synthesize transitioning=_transitioning;
@property(nonatomic) __weak id <NCBannerPresentationTransitioningDelegateObserver> transitioningDelegateObserver; // @synthesize transitioningDelegateObserver=_transitioningDelegateObserver;
- (void).cxx_destruct;
- (void)transitionAnimator:(id)arg1 didCommitToTransitionWithCoordinator:(id)arg2;
- (void)bannerPresentationAnimator:(id)arg1 didFinishTransition:(_Bool)arg2;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)_animatorForPresentation:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

