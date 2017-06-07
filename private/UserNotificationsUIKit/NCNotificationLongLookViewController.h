//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UserNotificationsUIKit/NCNotificationViewController.h>

#import <UserNotificationsUIKit/NCLongLookPresentationControllerDelegate-Protocol.h>
#import <UserNotificationsUIKit/NCNotificationCustomContentDelegate-Protocol.h>
#import <UserNotificationsUIKit/NCNotificationLongLookViewDelegate-Protocol.h>

@class NCLongLookTransitionDelegate, NCNotificationShortLookViewController, NSString;

@interface NCNotificationLongLookViewController : NCNotificationViewController <NCNotificationLongLookViewDelegate, NCLongLookPresentationControllerDelegate, NCNotificationCustomContentDelegate>
{
    NCLongLookTransitionDelegate *_longLookTransitionDelegate;
    NCNotificationShortLookViewController *_presentingNotificationViewController;
    CDUnknownBlockType _notificationTapBlock;
}

+ (void)initialize;
@property(copy, nonatomic, getter=_notificationTapBlock, setter=_setNotificationTapBlock:) CDUnknownBlockType notificationTapBlock; // @synthesize notificationTapBlock=_notificationTapBlock;
@property(nonatomic) __weak NCNotificationShortLookViewController *presentingNotificationViewController; // @synthesize presentingNotificationViewController=_presentingNotificationViewController;
- (void).cxx_destruct;
- (_Bool)isLookStyleLongLook;
- (void)customContentDidLoadExtension:(id)arg1;
- (void)notificationLongLookView:(id)arg1 willInteractWithURL:(id)arg2;
- (_Bool)resignFirstResponder;
- (_Bool)canResignFirstResponder;
- (_Bool)becomeFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (double)_translationWithVelocity:(double)arg1 acceleration:(double)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)longLookPresentationControllerShouldAllowKeyboardOnAppearance:(id)arg1;
- (struct CGRect)longLookPresentationController:(id)arg1 frameForTransitionViewInPresentationSuperview:(id)arg2;
- (id)_presentingNotificationViewController;
- (long long)longLookTransitionTypeForTransitionDelegate:(id)arg1;
- (void)_handleBackgroundTap:(id)arg1;
- (void)_handleCloseButton:(id)arg1;
- (void)_handleNotificationTap:(id)arg1;
- (void)_handleIconButton:(id)arg1;
- (id)_extensionIdentifier;
- (void)_setPreferredCustomContentSize:(struct CGSize)arg1;
- (struct CGSize)_preferredCustomContentSizeForSize:(struct CGSize)arg1 parentContentContainerBounds:(struct CGRect)arg2;
- (void)_notificationViewControllerViewDidLoad;
- (void)_loadLookView;
- (void)_configureScrollViewIfNecessary;
- (_Bool)_shouldPadScrollViewContentSizeHeight;
- (void)_updateTitleWithProvidedCustomContent;
- (void)_updateWithProvidedCustomContent;
- (void)_updateWithProvidedStaticContent;
- (void)customContentDidUpdateTitle:(id)arg1;
- (void)contentProviderDismissCustomContent:(id)arg1 animated:(_Bool)arg2;
- (struct CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)restoreInputViews;
- (void)preserveInputViews;
- (_Bool)isContentExtensionVisible:(id)arg1;
- (_Bool)dismissPresentedViewControllerAndClearNotification:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setNotificationRequest:(id)arg1;
- (id)_initWithNotificationRequest:(id)arg1 revealingAdditionalContentOnPresentation:(_Bool)arg2;
- (id)_initWithNotificationRequest:(id)arg1 andPresentingNotificationViewController:(id)arg2 revealingAdditionalContentOnPresentation:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

