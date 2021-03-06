//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIGestureRecognizerDelegate.h"
#import "UIPreviewInteractionDelegatePrivate.h"

@class NSString, UIPreviewInteraction, UIViewController<PLPreviewInteractionPresentable>, UIViewController<PLPreviewInteractionPresenting>, _UIPreviewInteractionViewControllerPresentation;

@interface PLPreviewInteractionManager : NSObject <UIGestureRecognizerDelegate, UIPreviewInteractionDelegatePrivate>
{
    _Bool _didPresent;
    UIViewController<PLPreviewInteractionPresenting> *_presentingViewController;
    UIPreviewInteraction *_previewInteraction;
    _UIPreviewInteractionViewControllerPresentation *_previewInteractionPresentation;
    CDUnknownBlockType _presentationCompletion;
    CDUnknownBlockType _dismissalCompletion;
    _Bool _didInteractionInitiateWithHint;
    _Bool _willPresent;
    id <PLPreviewInteractionManagerDelegate> _delegate;
    UIViewController<PLPreviewInteractionPresentable> *_presentedViewController;
}

+ (void)initialize;
@property(nonatomic, getter=_willPresent, setter=_setWillPresent:) _Bool willPresent; // @synthesize willPresent=_willPresent;
@property(nonatomic, setter=_setDidInteractionInitiateWithHint:) _Bool didInteractionInitiateWithHint; // @synthesize didInteractionInitiateWithHint=_didInteractionInitiateWithHint;
@property(readonly, nonatomic) __weak UIViewController<PLPreviewInteractionPresentable> *presentedViewController; // @synthesize presentedViewController=_presentedViewController;
@property(nonatomic) __weak id <PLPreviewInteractionManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)_previewInteractionShouldAutomaticallyTransitionToPreviewAfterDelay:(id)arg1;
- (id)_previewInteraction:(id)arg1 viewControllerPresentationForPresentingViewController:(id)arg2;
- (id)_previewInteractionHighlighterForPreviewTransition:(id)arg1;
- (void)previewInteractionDidCancel:(id)arg1;
- (void)previewInteraction:(id)arg1 didUpdatePreviewTransition:(double)arg2 ended:(_Bool)arg3;
- (_Bool)previewInteractionShouldBegin:(id)arg1;
- (void)_previewInteractionViewControllerTransitionDidDismiss:(_Bool)arg1;
- (void)_previewInteractionViewControllerTransitionDidPresent:(_Bool)arg1;
@property(readonly, nonatomic, getter=hasCommittedToPresentation) _Bool committedToPresentation;
- (void)resetForInitialInteraction;
- (_Bool)dismissIfPossible:(CDUnknownBlockType)arg1;
- (void)completeTransitionImmediately;
- (_Bool)presentIfPossible:(CDUnknownBlockType)arg1;
- (id)initWithPresentingViewController:(id)arg1;
- (_Bool)_dismissIfPossibleWithTrigger:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

