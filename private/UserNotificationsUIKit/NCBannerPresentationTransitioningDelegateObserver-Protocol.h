//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UserNotificationsUIKit/NCViewControllerTransitioningDelegateObserver-Protocol.h>

@class UIViewController;
@protocol UIViewControllerTransitioningDelegate;

@protocol NCBannerPresentationTransitioningDelegateObserver <NCViewControllerTransitioningDelegateObserver>

@optional
- (void)transitioningDelegate:(id <UIViewControllerTransitioningDelegate>)arg1 didFinishDismissalOfViewController:(UIViewController *)arg2 completed:(_Bool)arg3;
- (void)transitioningDelegate:(id <UIViewControllerTransitioningDelegate>)arg1 didFinishPresentationOfViewController:(UIViewController *)arg2 completed:(_Bool)arg3;
- (_Bool)wantsUseableContainerHeightForTransitionWithDelegate:(id <UIViewControllerTransitioningDelegate>)arg1;
@end
