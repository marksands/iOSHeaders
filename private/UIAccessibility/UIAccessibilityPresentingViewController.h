//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class UIWindow;

@interface UIAccessibilityPresentingViewController : UIViewController
{
    UIWindow *_presentationWindow;
}

- (void).cxx_destruct;
- (void)_voiceOverStatusChanged;
- (void)_cleanUpPresentationWindow;
- (void)dismissViewControllerWithTransition:(int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)loadView;
- (void)dealloc;
- (id)init;

@end

