//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIPresentationController.h>

@class UIVisualEffectView;

@interface _UIProgressiveBlurPresentationController : UIPresentationController
{
    long long _blurStyle;
    UIVisualEffectView *_visualEffectView;
}

@property(readonly, nonatomic) UIVisualEffectView *visualEffectView; // @synthesize visualEffectView=_visualEffectView;
@property(nonatomic) long long blurStyle; // @synthesize blurStyle=_blurStyle;
- (void).cxx_destruct;
- (id)_preferredAnimationControllerForDismissal;
- (id)_preferredAnimationControllerForPresentation;
- (_Bool)_forcesPreferredAnimationControllers;
- (void)_animateWithCoordinator:(id)arg1 isPresenting:(_Bool)arg2;
- (void)_configureSubviews;
- (void)dismissalTransitionWillBegin;
- (void)presentationTransitionWillBegin;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;
- (long long)presentationStyle;

@end

