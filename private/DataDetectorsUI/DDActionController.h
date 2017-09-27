//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DDActionDelegate.h"
#import "UIPopoverPresentationControllerDelegate.h"

@class DDAction, NSString, UIAlertController, UIView, UIViewController, UIWindow;

__attribute__((visibility("hidden")))
@interface DDActionController : NSObject <DDActionDelegate, UIPopoverPresentationControllerDelegate>
{
    UIViewController *_presentedViewController;
    UIView *_baseView;
    UIViewController *_currentBaseViewController;
    DDAction *_currentAction;
    id <DDDetectionControllerInteractionDelegate> _interactionDelegate;
    UIWindow *_originalWindow;
    NSString *_idsListenerID;
    UIAlertController *_alertController;
}

@property(retain, nonatomic) UIAlertController *alertController; // @synthesize alertController=_alertController;
@property(retain) DDAction *currentAction; // @synthesize currentAction=_currentAction;
@property(retain, nonatomic) UIView *baseView; // @synthesize baseView=_baseView;
@property(retain, nonatomic) id <DDDetectionControllerInteractionDelegate> interactionDelegate; // @synthesize interactionDelegate=_interactionDelegate;
- (void).cxx_destruct;
- (void)viewControllerRequiresModalInPopover:(_Bool)arg1;
- (_Bool)isPresentingInPopover;
- (void)cancelAction;
- (_Bool)actionIsCancellable;
- (_Bool)isPerformingAction;
- (void)actionDidFinish:(id)arg1;
- (void)failedToPrepareViewControllerForAction:(id)arg1;
- (void)action:(id)arg1 becameCancellable:(_Bool)arg2;
- (void)action:(id)arg1 viewControllerReady:(id)arg2;
- (void)performAction:(id)arg1;
- (void)_dismissCurrentViewControllerOurselves;
- (void)_presentCurrentViewControllerOurselves;
- (void)prepareForPopoverPresentation:(id)arg1;
- (id)presentationController:(id)arg1 viewControllerForAdaptivePresentationStyle:(long long)arg2;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (void)dismissCurrentController;
- (void)_didDismissActionViewController;
- (void)_willPresentViewController;
- (void)tellDelegateActionDidFinish;
- (void)_presentController:(id)arg1;
- (id)defaultActionForURL:(id)arg1 result:(struct __DDResult *)arg2 context:(id)arg3;
- (id)actionsForURL:(id)arg1 result:(struct __DDResult *)arg2 context:(id)arg3;
- (id)actionsForURL:(id)arg1 result:(struct __DDResult *)arg2 enclosingResult:(struct __DDResult *)arg3 context:(id)arg4;
- (_Bool)facetimeAvailable;
- (void)_cleanup;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

