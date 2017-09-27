//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUI/PUViewControllerTransition.h>

#import "UIViewControllerTransitioningDelegate.h"

@class NSString;

@interface PUModalTransition : PUViewControllerTransition <UIViewControllerTransitioningDelegate>
{
    long long __operation;
}

@property(nonatomic, setter=_setOperation:) long long _operation; // @synthesize _operation=__operation;
- (id)interactionControllerForDismissal:(id)arg1;
- (id)interactionControllerForPresentation:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)animateTransition:(id)arg1;
- (void)cancelInteractiveTransition;
- (void)finishInteractiveTransition;
- (id)presentingViewController;
- (void)imageModulationIntensityDidChange;
- (void)completeInteractiveDismissTransitionFinished:(_Bool)arg1;
- (void)completeInteractivePresentTransitionFinished:(_Bool)arg1;
- (void)transitionWillDismissInteractively:(_Bool)arg1;
- (void)transitionWillPresentInteractively:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

