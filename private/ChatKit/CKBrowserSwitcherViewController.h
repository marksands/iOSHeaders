//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <ChatKit/CKBrowserSwitcherFooterViewDelegate-Protocol.h>
#import <ChatKit/CKBrowserSwitcherScrollPreventerDelegate-Protocol.h>
#import <ChatKit/CKBrowserTransitionCoordinatorDelegate-Protocol.h>
#import <ChatKit/UICollectionViewDataSource-Protocol.h>
#import <ChatKit/UICollectionViewDelegate-Protocol.h>
#import <ChatKit/UIGestureRecognizerDelegate-Protocol.h>
#import <ChatKit/UIScrollViewDelegate-Protocol.h>

@class CKAppGrabberView, CKBrowserSwitcherFooterView, CKBrowserSwitcherFooterViewDataSource, CKBrowserSwitcherScrollPreventer, CKBrowserTransitionCoordinator, IMBalloonPlugin, IMScheduledUpdater, NSArray, NSDate, NSMutableDictionary, NSString, UICollectionView, UICollectionViewFlowLayout, UILongPressGestureRecognizer, UIPanGestureRecognizer, UITapGestureRecognizer, UIView;
@protocol CKBrowserSwitcherViewControllerDelegate><CKBrowserTransitionCoordinatorDelegate, CKBrowserViewControllerProtocol;

@interface CKBrowserSwitcherViewController : UIViewController <UIGestureRecognizerDelegate, UIScrollViewDelegate, UICollectionViewDelegate, UICollectionViewDataSource, CKBrowserSwitcherScrollPreventerDelegate, CKBrowserTransitionCoordinatorDelegate, CKBrowserSwitcherFooterViewDelegate>
{
    CKAppGrabberView *_grabberView;
    UITapGestureRecognizer *_expandTapRecognizer;
    _Bool _dragging;
    _Bool _browserViewReadyForUserInteraction;
    _Bool _insertedViaCollapse;
    _Bool _inManualContentOffsetChange;
    _Bool _inDragAndDrop;
    _Bool _interactiveExpandStarted;
    _Bool _transitioningFromSnapshotToLiveView;
    _Bool _allowFooterLabelUpdates;
    _Bool _allowPluginLaunchNotifications;
    _Bool _viewHasLaidOutSubviews;
    _Bool _browserIsCollapsingFromFullscreen;
    id <CKBrowserSwitcherViewControllerDelegate><CKBrowserTransitionCoordinatorDelegate> _delegate;
    UIViewController<CKBrowserViewControllerProtocol> *_currentViewController;
    CKBrowserTransitionCoordinator *_transitionCoordinator;
    CKBrowserSwitcherFooterView *_footerView;
    UIView *_contentView;
    UICollectionView *_collectionView;
    UICollectionViewFlowLayout *_flowLayout;
    NSMutableDictionary *_livePluginIdentifierToTimestampMap;
    UILongPressGestureRecognizer *_horizontalSwipePreventer;
    CKBrowserSwitcherScrollPreventer *_scrollPreventer;
    IMScheduledUpdater *_scrollUpdater;
    UIPanGestureRecognizer *_expandGestureRecognizer;
    IMBalloonPlugin *_currentVisiblePlugin;
    CKBrowserSwitcherFooterViewDataSource *_footerViewDataSource;
    id _cancelTouchesToken;
    IMBalloonPlugin *_balloonPlugin;
    NSArray *_gutterDividerViews;
    CDUnknownBlockType _performAfterFirstLayoutBlock;
    NSDate *_timeOfLastScrollingDecelerationEnded;
}

@property(nonatomic) _Bool browserIsCollapsingFromFullscreen; // @synthesize browserIsCollapsingFromFullscreen=_browserIsCollapsingFromFullscreen;
@property(retain, nonatomic) NSDate *timeOfLastScrollingDecelerationEnded; // @synthesize timeOfLastScrollingDecelerationEnded=_timeOfLastScrollingDecelerationEnded;
@property(nonatomic) _Bool viewHasLaidOutSubviews; // @synthesize viewHasLaidOutSubviews=_viewHasLaidOutSubviews;
@property(copy, nonatomic) CDUnknownBlockType performAfterFirstLayoutBlock; // @synthesize performAfterFirstLayoutBlock=_performAfterFirstLayoutBlock;
@property(nonatomic) _Bool allowPluginLaunchNotifications; // @synthesize allowPluginLaunchNotifications=_allowPluginLaunchNotifications;
@property(nonatomic) _Bool allowFooterLabelUpdates; // @synthesize allowFooterLabelUpdates=_allowFooterLabelUpdates;
@property(nonatomic, getter=isTransitioningFromSnapshotToLiveView) _Bool transitioningFromSnapshotToLiveView; // @synthesize transitioningFromSnapshotToLiveView=_transitioningFromSnapshotToLiveView;
@property(retain, nonatomic) NSArray *gutterDividerViews; // @synthesize gutterDividerViews=_gutterDividerViews;
@property(retain, nonatomic) IMBalloonPlugin *balloonPlugin; // @synthesize balloonPlugin=_balloonPlugin;
@property(nonatomic) _Bool interactiveExpandStarted; // @synthesize interactiveExpandStarted=_interactiveExpandStarted;
@property(retain, nonatomic) id cancelTouchesToken; // @synthesize cancelTouchesToken=_cancelTouchesToken;
@property(nonatomic, getter=isInDragAndDrop) _Bool inDragAndDrop; // @synthesize inDragAndDrop=_inDragAndDrop;
@property(nonatomic) _Bool inManualContentOffsetChange; // @synthesize inManualContentOffsetChange=_inManualContentOffsetChange;
@property(nonatomic) _Bool insertedViaCollapse; // @synthesize insertedViaCollapse=_insertedViaCollapse;
@property(retain, nonatomic) CKBrowserSwitcherFooterViewDataSource *footerViewDataSource; // @synthesize footerViewDataSource=_footerViewDataSource;
@property(retain, nonatomic) IMBalloonPlugin *currentVisiblePlugin; // @synthesize currentVisiblePlugin=_currentVisiblePlugin;
@property(retain, nonatomic) UIPanGestureRecognizer *expandGestureRecognizer; // @synthesize expandGestureRecognizer=_expandGestureRecognizer;
@property(retain, nonatomic) IMScheduledUpdater *scrollUpdater; // @synthesize scrollUpdater=_scrollUpdater;
@property(retain, nonatomic) CKBrowserSwitcherScrollPreventer *scrollPreventer; // @synthesize scrollPreventer=_scrollPreventer;
@property(retain, nonatomic) UILongPressGestureRecognizer *horizontalSwipePreventer; // @synthesize horizontalSwipePreventer=_horizontalSwipePreventer;
@property(retain, nonatomic) NSMutableDictionary *livePluginIdentifierToTimestampMap; // @synthesize livePluginIdentifierToTimestampMap=_livePluginIdentifierToTimestampMap;
@property(retain, nonatomic) UICollectionViewFlowLayout *flowLayout; // @synthesize flowLayout=_flowLayout;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) CKBrowserSwitcherFooterView *footerView; // @synthesize footerView=_footerView;
@property(nonatomic, getter=isBrowserReadyForUserInteraction) _Bool browserViewReadyForUserInteraction; // @synthesize browserViewReadyForUserInteraction=_browserViewReadyForUserInteraction;
@property(nonatomic, getter=isDragging) _Bool dragging; // @synthesize dragging=_dragging;
@property(retain, nonatomic) CKBrowserTransitionCoordinator *transitionCoordinator; // @synthesize transitionCoordinator=_transitionCoordinator;
@property(readonly, nonatomic) UIViewController<CKBrowserViewControllerProtocol> *currentViewController; // @synthesize currentViewController=_currentViewController;
@property(nonatomic) __weak id <CKBrowserSwitcherViewControllerDelegate><CKBrowserTransitionCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (double)_horizontalOffsetForVisibleSwitcherPluginIndex:(unsigned long long)arg1;
- (unsigned long long)_visibleSwitcherPluginIndexForHorizontalOffset:(double)arg1;
- (struct CGSize)_browserSize;
- (void)dragManagerDidEndDragging:(id)arg1;
- (void)dragManagerDidStartDrag:(id)arg1;
- (void)_scrollUpdaterFired;
- (void)_endHoldingScrollUpdatesForKey:(id)arg1;
- (void)_beginHoldingScrollUpdatesForKey:(id)arg1;
- (_Bool)_scrollToVisiblePluginWithIdentifier:(id)arg1;
- (void)_loadBrowserForBalloonPlugin:(id)arg1 datasource:(id)arg2;
- (void)handleExpandButton:(id)arg1;
- (void)setCurrentViewController:(id)arg1;
- (void)_cleanupOffscreenChildViewControllers;
- (void)_cleanupOffscreenChildViewControllersWithDelay;
- (void)_moveLiveBrowserViewsToUpdatedVisibleIndices;
- (void)_updateActiveBrowserTimestampForCurrentBalloonPlugin;
- (void)_removeBrowserFromViewHierarchy:(id)arg1;
- (void)_removeBrowserWithPluginIdentifierFromViewHierarchy:(id)arg1;
- (void)_updateBrowserViewPositionForPluginAndInsertIfNecessary:(id)arg1;
- (void)_insertCurrentBrowserAndRemoveOldBrowsersIfNeeded;
- (_Bool)shouldAutorotate;
- (_Bool)_shouldHideFooterView;
- (void)_removeFooterView;
- (void)_addFooterView;
- (void)_transitionSnapshotViewToBrowserView;
- (void)_handleRemoteViewControllerConnectionInterrupted:(id)arg1;
- (void)_transitionSnapshotViewToBrowserViewAfterViewDidPrepareForDisplay:(id)arg1;
- (void)_updateVisibleBrowserView;
- (void)_deferredUpdateVisibleBrowserView;
- (double)_delayWhenScrollingBeforeLoadingNewBrowser;
- (id)currentSwitcherCell;
- (void)_snapshotCurrentViewController;
- (void)_updateGutterDividerViewsForCurrentVisibleBrowser;
- (void)_updateAppNameAndPageForOffset:(struct CGPoint)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)_expandPanGestureRecognized:(id)arg1;
- (void)_updatePluginFromScrollPosition;
- (_Bool)_pluginHasLiveBrowserViewInSwitcher:(id)arg1;
- (void)_updateForEndScrolling;
- (void)_updateForBeginScrolling;
- (void)_updateCurrentBrowserSnapshotIfPossible;
- (void)_handleVisibleSwitcherPluginsChanged:(id)arg1;
- (void)saveSnapshotForCurrentBrowserViewControllerIfPossible;
- (void)animateOutCompactWithCompletion:(CDUnknownBlockType)arg1;
- (void)animateInCompactWithCompletion:(CDUnknownBlockType)arg1;
- (void)showBrowserFullscreenForPlugin:(id)arg1 datasource:(id)arg2;
- (void)showBrowserInSwitcherForPlugin:(id)arg1 datasource:(id)arg2 reloadData:(_Bool)arg3;
- (void)unloadRemoteViewControllers;
- (void)_performAfterFirstLayout:(CDUnknownBlockType)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollPreventerDidEndDecelerating:(id)arg1;
- (void)scrollPreventer:(id)arg1 didReceiveTouchAtDate:(id)arg2;
- (void)scrollPreventer:(id)arg1 scrolledToOffset:(struct CGPoint)arg2;
- (void)scrollPreventerWillBeginDragging:(id)arg1;
- (void)scrollPreventerDidLayoutSubviews:(id)arg1;
- (void)browserTransitionCoordinator:(id)arg1 wantsToSwitchToPlugin:(id)arg2;
- (void)browserTransitionCoordinatorWantsPresentationOfAppManager:(id)arg1;
- (void)browserTransitionCoordinatorWantsPresentationOfAppStore:(id)arg1;
- (void)browserTransitionCoordinatorDidCollapseOrDismiss:(id)arg1 withReason:(long long)arg2;
- (void)browserTransitionCoordinatorWillCollapseOrDismiss:(id)arg1 withReason:(long long)arg2;
- (void)browserTransitionCoordinatorDidTransitionOrPresentToFullscreen:(id)arg1 withReason:(long long)arg2;
- (void)browserTransitionCoordinatorWillTransitionOrPresentToFullscreen:(id)arg1 withReason:(long long)arg2;
- (void)browserTransitionCoordinator:(id)arg1 browserWillBecomeInactive:(id)arg2;
- (void)browserTransitionCoordinator:(id)arg1 expandedStateDidChange:(_Bool)arg2 withReason:(long long)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)dismissBrowserFullscreenAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)reinsertSwitcherFooterViewForBrowserTransitionCoordinator:(id)arg1;
- (id)switcherFooterViewForBrowserTransitionCoordinator:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)browserTransitionCoordinator:(id)arg1 didTransitionFromOrientation:(long long)arg2 toOrientation:(long long)arg3;
- (struct CGRect)browserTransitionCoordinator:(id)arg1 preferredBoundsForBrowser:(id)arg2;
- (void)transitionToCollapsed;
- (void)transitionToFullscreen;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)layoutMarginsDidChange;
- (_Bool)isBrowserSwitcherFirstLaunch;
- (void)viewDidLayoutSubviews;
- (void)switcherView:(id)arg1 didMagnify:(_Bool)arg2;
- (id)indexPathOfCurrentlySelectedPluginInSwitcherView:(id)arg1;
- (void)switcherView:(id)arg1 didSelectPluginAtIndex:(id)arg2;
- (void)updateFooterViewFrame;
- (id)activeBrowserView;
- (void)loadView;
- (id)initWithConversation:(id)arg1 sendDelegate:(id)arg2 presentingViewController:(id)arg3;
- (void)dealloc;
- (void)scrollCollectionViewToPlugin:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

