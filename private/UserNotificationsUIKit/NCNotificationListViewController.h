//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewController.h>

#import <UserNotificationsUIKit/NCNotificationListCellDelegate-Protocol.h>
#import <UserNotificationsUIKit/NCNotificationListCollectionViewDelegate-Protocol.h>
#import <UserNotificationsUIKit/NCNotificationViewControllerDelegatePrivate-Protocol.h>
#import <UserNotificationsUIKit/UIGestureRecognizerDelegate-Protocol.h>

@class NCAnimationCoordinator, NCNotificationListTouchEater, NCNotificationViewController, NSHashTable, NSMutableDictionary, NSString;
@protocol NCNotificationListViewControllerDestinationDelegate, NCNotificationListViewControllerUserInteractionDelegate;

@interface NCNotificationListViewController : UICollectionViewController <NCNotificationListCellDelegate, UIGestureRecognizerDelegate, NCNotificationViewControllerDelegatePrivate, NCNotificationListCollectionViewDelegate>
{
    _Bool _backgroundBlurred;
    _Bool _needsReloadData;
    _Bool _notificationRequestRemovedWhileInLongLook;
    CDStruct_2eb613e6 _userInteractionDelegateFlags;
    id <NCNotificationListViewControllerUserInteractionDelegate> _userInteractionDelegate;
    id <NCNotificationListViewControllerDestinationDelegate> _destinationDelegate;
    NCNotificationViewController *_notificationViewControllerForSizing;
    NCNotificationViewController *_viewControllerPresentingLongLook;
    NSMutableDictionary *_cellsSizesCaches;
    NSHashTable *_observers;
    NCNotificationListTouchEater *_touchEater;
    NCAnimationCoordinator *_childPreferredContentSizeChangeCoordinator;
    struct UIEdgeInsets _insetMargins;
}

@property(nonatomic) CDStruct_2eb613e6 userInteractionDelegateFlags; // @synthesize userInteractionDelegateFlags=_userInteractionDelegateFlags;
@property(retain, nonatomic) NCAnimationCoordinator *childPreferredContentSizeChangeCoordinator; // @synthesize childPreferredContentSizeChangeCoordinator=_childPreferredContentSizeChangeCoordinator;
@property(nonatomic) _Bool notificationRequestRemovedWhileInLongLook; // @synthesize notificationRequestRemovedWhileInLongLook=_notificationRequestRemovedWhileInLongLook;
@property(nonatomic) _Bool needsReloadData; // @synthesize needsReloadData=_needsReloadData;
@property(retain, nonatomic) NCNotificationListTouchEater *touchEater; // @synthesize touchEater=_touchEater;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSMutableDictionary *cellsSizesCaches; // @synthesize cellsSizesCaches=_cellsSizesCaches;
@property(retain, nonatomic) NCNotificationViewController *viewControllerPresentingLongLook; // @synthesize viewControllerPresentingLongLook=_viewControllerPresentingLongLook;
@property(readonly, nonatomic) struct UIEdgeInsets insetMargins; // @synthesize insetMargins=_insetMargins;
@property(retain, nonatomic) NCNotificationViewController *notificationViewControllerForSizing; // @synthesize notificationViewControllerForSizing=_notificationViewControllerForSizing;
@property(nonatomic, getter=isBackgroundBlurred) _Bool backgroundBlurred; // @synthesize backgroundBlurred=_backgroundBlurred;
@property(nonatomic) __weak id <NCNotificationListViewControllerDestinationDelegate> destinationDelegate; // @synthesize destinationDelegate=_destinationDelegate;
@property(nonatomic) __weak id <NCNotificationListViewControllerUserInteractionDelegate> userInteractionDelegate; // @synthesize userInteractionDelegate=_userInteractionDelegate;
- (void).cxx_destruct;
- (id)_groupName;
- (void)_reloadRequestsAtIndices:(id)arg1;
- (void)_removeCachedSizesForNotificationRequest:(id)arg1;
- (void)_performCollectionViewOperationBlockIfNecessary:(CDUnknownBlockType)arg1;
- (void)_performCollectionViewOperationBlock:(CDUnknownBlockType)arg1;
- (_Bool)_forwardRequestToLongLookIfPresented:(id)arg1 forCoalescedNotification:(id)arg2;
- (_Bool)_isPointInWindowSpace:(struct CGPoint)arg1 insideCell:(id)arg2;
- (void)_handleEatenTouch:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)_installTouchEater;
- (void)notificationListCollectionView:(id)arg1 willSetFrame:(struct CGRect)arg2;
- (void)willTearDownNotificationListCell:(id)arg1;
- (void)longLookDidDismissForNotificationViewController:(id)arg1;
- (void)longLookWillDismissForNotificationViewController:(id)arg1;
- (void)longLookDidPresentForNotificationViewController:(id)arg1;
- (void)longLookWillPresentForNotificationViewController:(id)arg1;
- (_Bool)showAdditionalMessageLinesForNotificationViewController:(id)arg1;
- (_Bool)notificationViewControllerShouldAllowInteractionGesture:(id)arg1;
- (id)notificationViewController:(id)arg1 staticContentProviderForNotificationRequest:(id)arg2;
- (_Bool)notificationViewControllerShouldBlurShortLook:(id)arg1;
- (void)notificationViewController:(id)arg1 shouldFinishLongLookTransitionWithCompletionBlock:(CDUnknownBlockType)arg2;
- (id)notificationUsageTrackingStateForNotificationViewController:(id)arg1;
- (void)notificationViewController:(id)arg1 executeAction:(id)arg2 withParameters:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)notificationViewController:(id)arg1 requestPermissionToExecuteAction:(id)arg2 withParameters:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)collectionView:(id)arg1 performUpdatesAlongsideLayout:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (_Bool)collectionView:(id)arg1 canPerformAction:(SEL)arg2 forItemAtIndexPath:(id)arg3 withSender:(id)arg4;
- (_Bool)collectionView:(id)arg1 shouldShowMenuForItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (void)scrollViewDidZoom:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2;
- (void)setTouchEaterEnabled:(_Bool)arg1;
- (void)handleEatenTouchEndStateForGestureRecognizer:(id)arg1;
- (void)handleEatenTouchBeginStateForGestureRecognizer:(id)arg1;
- (_Bool)shouldReceiveTouch:(id)arg1 forGestureRecognizer:(id)arg2;
- (void)listViewControllerPresentedByUserAction;
@property(readonly, nonatomic) NSString *backgroundGroupName;
@property(readonly, nonatomic) double itemSpacing;
- (id)notificationRequestsPassingTest:(CDUnknownBlockType)arg1;
- (void)_forceTouchAvailabilityDidChange:(id)arg1;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)notifyContentObservers;
- (void)removeContentObserver:(id)arg1;
- (void)addContentObserver:(id)arg1;
- (void)_reloadCollectionViewDataIfNecessary;
- (_Bool)dismissModalFullScreenAnimated:(_Bool)arg1;
- (id)notificationRequestInLongLook;
- (_Bool)isContentExtensionVisible:(id)arg1;
- (_Bool)hasVisibleContent;
- (_Bool)hasContent;
- (void)showRequestsForNotificationSectionIdentifier:(id)arg1 subSectionIdentifier:(id)arg2;
- (void)hideRequestsForNotificationSectionIdentifier:(id)arg1 subSectionIdentifier:(id)arg2;
- (void)reloadNotificationRequest:(id)arg1;
- (void)reloadRequestsWithSuppressedContent;
- (void)clearAllNonPersistent;
- (void)clearAll;
- (id)indexPathForNotificationRequest:(id)arg1;
- (id)notificationRequestAtIndexPath:(id)arg1;
- (void)removeNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;
- (_Bool)modifyNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;
- (_Bool)insertNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;
- (id)init;
- (id)captureOnlyMaterialViewForCurrentState;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

