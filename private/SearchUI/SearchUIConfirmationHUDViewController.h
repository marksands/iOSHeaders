//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <SearchUI/UIViewControllerTransitioningDelegate-Protocol.h>

@class NSString, SearchUIConfirmationHUDView;

@interface SearchUIConfirmationHUDViewController : UIViewController <UIViewControllerTransitioningDelegate>
{
}

- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)viewDidAppear:(_Bool)arg1;
@property(retain) SearchUIConfirmationHUDView *view; // @dynamic view;
- (void)setTitle:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
