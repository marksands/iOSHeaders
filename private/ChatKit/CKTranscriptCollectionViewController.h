//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ChatKit/CKViewController.h>

#import "CKAssociatedMessageTranscriptCellDelegate.h"
#import "CKAudioControllerDelegate.h"
#import "CKFullScreenEffectManagerDelegate.h"
#import "CKLocationShareBalloonViewDelegate.h"
#import "CKLocationSharingDelegate.h"
#import "CKMovieBalloonViewDelegate.h"
#import "CKPluginPlaybackManagerDelegate.h"
#import "CKSendAnimationManagerDelegate.h"
#import "CKTitledImageBalloonViewDelegate.h"
#import "CKTranscriptCollectionViewDelegate.h"
#import "CNAvatarViewDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class CKAudioController, CKConversation, CKFullScreenEffectManager, CKImpactEffectManager, CKPluginPlaybackManager, CKTranscriptCollectionView, IMChat, NSArray, NSIndexPath, NSIndexSet, NSMutableSet, NSObject<OS_dispatch_group>, NSString, UITapGestureRecognizer, UIView, UIView<CKFullscreenEffectView>, UIView<CKGradientReferenceView>;

@interface CKTranscriptCollectionViewController : CKViewController <CKAudioControllerDelegate, CKLocationShareBalloonViewDelegate, CKLocationSharingDelegate, CKMovieBalloonViewDelegate, CKTitledImageBalloonViewDelegate, CKTranscriptCollectionViewDelegate, CNAvatarViewDelegate, UIAlertViewDelegate, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, CKFullScreenEffectManagerDelegate, CKPluginPlaybackManagerDelegate, CKAssociatedMessageTranscriptCellDelegate, CKSendAnimationManagerDelegate>
{
    NSIndexPath *_itemIndexPathToHighlight;
    _Bool _initialLoad;
    _Bool _shouldLoadDefaultConversationViewingMessageCountOnAppear;
    _Bool _transitionedFromComposing;
    _Bool _transcriptUpdateAnimated;
    _Bool _allowsPluginPlayback;
    _Bool _isPerformingRegenerateOnlyUpdate;
    _Bool _peeking;
    _Bool _hasHiddenItems;
    _Bool _isLoadingMoreMessages;
    _Bool _sizedFullTranscript;
    _Bool _shouldUseOpaqueMask;
    _Bool _filterAllButFirstMessage;
    _Bool _playedLastImpactEffectForTransitionFromComposing;
    NSArray *_chatItems;
    CKConversation *_conversation;
    NSArray *_associatedChatItems;
    double _balloonMaxWidth;
    id <CKTranscriptCollectionViewControllerDelegate> _delegate;
    UIView<CKGradientReferenceView> *_gradientReferenceView;
    NSObject<OS_dispatch_group> *_updateAnimationGroup;
    NSIndexSet *_hiddenItems;
    NSIndexSet *_hiddenBalloonViews;
    CKImpactEffectManager *_impactEffectManager;
    CKFullScreenEffectManager *_fullscreenEffectManager;
    double _pluginPlaybackDelay;
    NSString *___CurrentTestName;
    id <UIDragInteractionDelegate> _dragInteractionDelegate;
    UITapGestureRecognizer *_loggingTapGestureRecognizer;
    NSArray *_bulletins;
    CKTranscriptCollectionView *_collectionView;
    CKAudioController *_audioController;
    CKPluginPlaybackManager *_pluginPlaybackManager;
    CDUnknownBlockType _alertHandler;
    NSString *_speakerTransferGUID;
    UIView<CKFullscreenEffectView> *_topEffectView;
    NSMutableSet *_currentEffectDecorationViews;
    long long _contentAnimationPauseReasons;
    UIView *_snapshotOfPluginBeingReplacedByBreadcrumb;
    NSString *_mostRecentlyTouchedPlugin;
    CDUnknownBlockType _transcriptUpdateCompletion;
    struct CGPoint _peekSampleTranslation;
    struct UIEdgeInsets _marginInsets;
}

@property(copy, nonatomic) CDUnknownBlockType transcriptUpdateCompletion; // @synthesize transcriptUpdateCompletion=_transcriptUpdateCompletion;
@property(nonatomic) NSString *mostRecentlyTouchedPlugin; // @synthesize mostRecentlyTouchedPlugin=_mostRecentlyTouchedPlugin;
@property(retain, nonatomic) UIView *snapshotOfPluginBeingReplacedByBreadcrumb; // @synthesize snapshotOfPluginBeingReplacedByBreadcrumb=_snapshotOfPluginBeingReplacedByBreadcrumb;
@property(nonatomic) _Bool playedLastImpactEffectForTransitionFromComposing; // @synthesize playedLastImpactEffectForTransitionFromComposing=_playedLastImpactEffectForTransitionFromComposing;
@property(nonatomic) long long contentAnimationPauseReasons; // @synthesize contentAnimationPauseReasons=_contentAnimationPauseReasons;
@property(nonatomic) _Bool filterAllButFirstMessage; // @synthesize filterAllButFirstMessage=_filterAllButFirstMessage;
@property(retain, nonatomic) NSMutableSet *currentEffectDecorationViews; // @synthesize currentEffectDecorationViews=_currentEffectDecorationViews;
@property(retain, nonatomic) UIView<CKFullscreenEffectView> *topEffectView; // @synthesize topEffectView=_topEffectView;
@property(nonatomic) _Bool shouldUseOpaqueMask; // @synthesize shouldUseOpaqueMask=_shouldUseOpaqueMask;
@property(nonatomic) _Bool sizedFullTranscript; // @synthesize sizedFullTranscript=_sizedFullTranscript;
@property(copy, nonatomic) NSString *speakerTransferGUID; // @synthesize speakerTransferGUID=_speakerTransferGUID;
@property(nonatomic) _Bool isLoadingMoreMessages; // @synthesize isLoadingMoreMessages=_isLoadingMoreMessages;
@property(nonatomic) _Bool hasHiddenItems; // @synthesize hasHiddenItems=_hasHiddenItems;
@property(nonatomic, getter=isPeeking) _Bool peeking; // @synthesize peeking=_peeking;
@property(nonatomic) struct CGPoint peekSampleTranslation; // @synthesize peekSampleTranslation=_peekSampleTranslation;
@property(copy, nonatomic) CDUnknownBlockType alertHandler; // @synthesize alertHandler=_alertHandler;
@property(nonatomic) _Bool isPerformingRegenerateOnlyUpdate; // @synthesize isPerformingRegenerateOnlyUpdate=_isPerformingRegenerateOnlyUpdate;
@property(retain, nonatomic) CKPluginPlaybackManager *pluginPlaybackManager; // @synthesize pluginPlaybackManager=_pluginPlaybackManager;
@property(retain, nonatomic) CKAudioController *audioController; // @synthesize audioController=_audioController;
@property(retain, nonatomic) CKTranscriptCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(copy, nonatomic) NSArray *bulletins; // @synthesize bulletins=_bulletins;
@property(retain, nonatomic) UITapGestureRecognizer *loggingTapGestureRecognizer; // @synthesize loggingTapGestureRecognizer=_loggingTapGestureRecognizer;
@property(nonatomic) __weak id <UIDragInteractionDelegate> dragInteractionDelegate; // @synthesize dragInteractionDelegate=_dragInteractionDelegate;
@property(retain, nonatomic, setter=__setCurrentTestName:) NSString *__CurrentTestName; // @synthesize __CurrentTestName=___CurrentTestName;
@property(nonatomic) double pluginPlaybackDelay; // @synthesize pluginPlaybackDelay=_pluginPlaybackDelay;
@property(nonatomic) _Bool allowsPluginPlayback; // @synthesize allowsPluginPlayback=_allowsPluginPlayback;
@property(nonatomic, getter=isTranscriptUpdateAnimated) _Bool transcriptUpdateAnimated; // @synthesize transcriptUpdateAnimated=_transcriptUpdateAnimated;
@property(nonatomic) _Bool transitionedFromComposing; // @synthesize transitionedFromComposing=_transitionedFromComposing;
@property(retain, nonatomic) CKFullScreenEffectManager *fullscreenEffectManager; // @synthesize fullscreenEffectManager=_fullscreenEffectManager;
@property(retain, nonatomic) CKImpactEffectManager *impactEffectManager; // @synthesize impactEffectManager=_impactEffectManager;
@property(nonatomic) _Bool shouldLoadDefaultConversationViewingMessageCountOnAppear; // @synthesize shouldLoadDefaultConversationViewingMessageCountOnAppear=_shouldLoadDefaultConversationViewingMessageCountOnAppear;
@property(nonatomic, getter=isInitialLoad) _Bool initialLoad; // @synthesize initialLoad=_initialLoad;
@property(copy, nonatomic) NSIndexSet *hiddenBalloonViews; // @synthesize hiddenBalloonViews=_hiddenBalloonViews;
@property(copy, nonatomic) NSIndexSet *hiddenItems; // @synthesize hiddenItems=_hiddenItems;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *updateAnimationGroup; // @synthesize updateAnimationGroup=_updateAnimationGroup;
@property(retain, nonatomic) UIView<CKGradientReferenceView> *gradientReferenceView; // @synthesize gradientReferenceView=_gradientReferenceView;
@property(nonatomic) __weak id <CKTranscriptCollectionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double balloonMaxWidth; // @synthesize balloonMaxWidth=_balloonMaxWidth;
@property(nonatomic) struct UIEdgeInsets marginInsets; // @synthesize marginInsets=_marginInsets;
@property(copy, nonatomic) NSArray *associatedChatItems; // @synthesize associatedChatItems=_associatedChatItems;
@property(retain, nonatomic) CKConversation *conversation; // @synthesize conversation=_conversation;
@property(copy, nonatomic) NSArray *chatItems; // @synthesize chatItems=_chatItems;
- (void).cxx_destruct;
- (void)verticallyScrollTranscriptByAmount:(double)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)wantsDrawerLayout;
- (id)collectionViewLayout;
- (void)configureSpeakerButtonCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (void)reconfigureVisibleSpeakerButtonCells;
- (void)_refreshLocationsForRecipientsIfNecessary;
- (void)_tearDownLiveBubbles;
- (void)chatRegistryDidLoad:(id)arg1;
- (void)chatItemsDidChange:(id)arg1;
- (void)chatItemIsFilteredChanged:(id)arg1;
- (void)installedAppsChanged:(id)arg1;
- (void)addressBookChanged:(id)arg1;
- (void)transferUpdated:(id)arg1;
- (void)locationStringDidChange:(id)arg1;
- (void)snapshotDidChange:(id)arg1;
- (void)previewDidChange:(id)arg1;
- (void)snapshotTaken:(id)arg1;
- (void)transferRestored:(id)arg1;
- (void)_launchTapToRadar;
- (void)_resendMessageAtIndexPath:(id)arg1;
- (void)_downgradeMessageAtIndexPath:(id)arg1;
- (void)_replayLastImpactEffectIfNotFromMe;
- (void)_releaseActiveBalloonControllers;
- (struct CGRect)convertedBoundsToCullFromView:(id)arg1;
- (void)cullCellSubviews;
- (void)updateAnimationPaused;
- (void)removeContentAnimationPauseReasons:(long long)arg1;
- (void)addContentAnimationPauseReasons:(long long)arg1;
- (void)touchUpInsideCellReportSpamButton:(id)arg1;
- (void)touchUpInsideCellSpeakerButton:(id)arg1;
- (void)touchUpInsideCellStatusButton:(id)arg1;
- (void)touchUpInsideCellFailureButton:(id)arg1;
- (void)selectChatItem:(id)arg1;
- (id)cellForAssociatedChatItem:(id)arg1;
- (id)chatItemForCell:(id)arg1;
- (id)cellForChatItem:(id)arg1;
- (id)balloonViewForChatItem:(id)arg1;
- (id)balloonViewForIndexPath:(id)arg1;
- (id)balloonPluginForViewController:(id)arg1;
- (id)messagePartForBalloonView:(id)arg1;
- (id)indexPathForBalloonView:(id)arg1;
- (id)lastMessagePartChatItem;
- (void)scrollToTopOfLastBubbleCellAnimated:(_Bool)arg1;
- (void)loadEarlierMessagesIfNeeded;
- (void)loadEarlierMessages;
- (void)loadMoreRecentMessages;
- (void)setChatItems:(id)arg1 removedAssociatedIndexes:(id *)arg2 insertedAssociatedIndexes:(id *)arg3;
- (void)_diffAssociatedItemsWithOldAssociatedItems:(id)arg1 removedAssociatedIndexes:(id *)arg2 insertedAssociatedIndexes:(id *)arg3;
- (id)chatItemWithIMChatItem:(id)arg1;
- (id)chatItemsWithIMChatItems:(id)arg1;
- (id)chatItemWithBulletin:(id)arg1;
- (id)chatItemsWithBulletins:(id)arg1;
- (void)updateTranscriptChatItems:(id)arg1 inserted:(id)arg2 removed:(id)arg3 reload:(id)arg4 regenerate:(id)arg5 animated:(_Bool)arg6 completion:(CDUnknownBlockType)arg7;
- (void)updateTranscriptChatItems:(id)arg1 inserted:(id)arg2 removed:(id)arg3 reload:(id)arg4 regenerate:(id)arg5 animated:(_Bool)arg6 checkFiltered:(_Bool)arg7 completion:(CDUnknownBlockType)arg8;
- (void)_updatePluginPlaybackManagerForInsertedChatItems:(id)arg1;
- (unsigned long long)_indexOfBreadcrumbReplacingTranscriptPluginInChatItems:(id)arg1 inserted:(id)arg2 removed:(id)arg3 outIndexOfReplacedPlugin:(unsigned long long *)arg4 outIndexOfNewPlugin:(unsigned long long *)arg5;
- (void)_indicesOfTranscriptPluginChatItemRemoveAndInsertedWithoutFading:(id)arg1 inserted:(id)arg2 removed:(id)arg3 outInsertIndices:(id *)arg4 outRemoveIndices:(id *)arg5;
- (double)_balloonHorizontalOffsetForParentChatItem:(id)arg1 contentAlignmentRect:(struct CGRect)arg2 responsibleChatItems:(id *)arg3 individualOffsets:(id *)arg4;
- (void)configureAssociatedCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (void)_hideBalloonViewIfNecessaryForCell:(id)arg1 indexPath:(id)arg2;
- (void)configureCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (_Bool)_pluginChatItem:(id)arg1 hasControllerConformingToProtocol:(id)arg2;
- (_Bool)_allowsEffectAutoPlayback;
- (void)sendAnimationManagerDidStopAnimation:(id)arg1 context:(id)arg2;
- (void)sendAnimationManagerWillStartAnimation:(id)arg1 context:(id)arg2;
- (id)collectionViewControllerForImpactEffectManager:(id)arg1;
- (id)chatForSendAnimationManager:(id)arg1;
- (void)effectManager:(id)arg1 didStopEffect:(id)arg2;
- (void)effectManager:(id)arg1 didStartEffect:(id)arg2;
- (id)avatarView:(id)arg1 orderedPropertiesForProperties:(id)arg2 category:(id)arg3;
- (id)presentingViewControllerForAvatarView:(id)arg1;
- (void)audioControllerPlayingDidChange:(id)arg1;
- (void)audioControllerDidStop:(id)arg1;
- (void)audioControllerDidPause:(id)arg1;
- (void)audioController:(id)arg1 mediaObjectProgressDidChange:(id)arg2 currentTime:(double)arg3 duration:(double)arg4;
- (void)audioController:(id)arg1 mediaObjectDidFinishPlaying:(id)arg2;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)balloonViewTitleTapped:(id)arg1;
- (void)locationSharingClient:(id)arg1 showShareLocationMenuWithBalloonPluginView:(id)arg2;
- (void)locationShareBalloonViewShareButtonTapped:(id)arg1;
- (void)locationShareBalloonViewIgnoreButtonTapped:(id)arg1;
- (void)balloonView:(id)arg1 mediaObjectDidFinishPlaying:(id)arg2;
- (void)interactionStoppedFromPreviewItemControllerInBalloonView:(id)arg1;
- (void)interactionStartedFromPreviewItemControllerInBalloonView:(id)arg1;
- (void)liveViewController:(id)arg1 stageSticker:(id)arg2 skipShelf:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)liveViewController:(id)arg1 stagePayload:(id)arg2 skipShelf:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)liveViewController:(id)arg1 requestPresentationStyleExpanded:(_Bool)arg2;
- (void)associatedMessageTranscriptCellLongTouched:(id)arg1;
- (void)associatedMessageTranscriptCellDoubleTapped:(id)arg1;
- (void)_handleAssociatedMessageCellTapEvent:(id)arg1 isDoubleTap:(_Bool)arg2;
- (void)balloonViewDoubleTapped:(id)arg1;
- (void)balloonViewLongTouched:(id)arg1;
- (void)liveBalloonTouched:(id)arg1;
- (void)balloonViewTapped:(id)arg1;
- (id)currentEffectForCollectionView:(id)arg1 layout:(id)arg2;
- (void)collectionViewLayout:(id)arg1 sizeDidChange:(struct CGSize)arg2;
- (id)collectionView:(id)arg1 layout:(id)arg2 chatItemForSupplementaryViewAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 layout:(id)arg2 chatItemForItemAtIndexPath:(id)arg3;
- (void)_updateEffectViewMessageRect:(id)arg1 effect:(id)arg2;
- (void)endHoldingUpdatesAfterQuicklookCancelsDismiss;
- (void)updateEffectViewMessageRects;
- (void)collectionView:(id)arg1 didEndDisplayingSupplementaryView:(id)arg2 forElementOfKind:(id)arg3 atIndexPath:(id)arg4;
- (void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)collectionViewDidInset:(id)arg1;
- (void)collectionViewWillInset:(id)arg1 targetContentInset:(inout struct UIEdgeInsets *)arg2;
- (_Bool)collectionView:(id)arg1 isEditableItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)collectionViewWillProgrammaticallyScroll:(id)arg1 animated:(_Bool)arg2;
- (void)collectionViewWillScroll:(id)arg1 targetContentOffset:(inout struct CGPoint *)arg2;
- (void)_collectionViewDidRestAsync:(_Bool)arg1;
- (void)collectionViewLayoutRestingDidChange:(id)arg1;
- (void)pluginPlaybackManagerDidStopPlayback:(id)arg1;
- (void)_startPlaybackWithIndexPaths:(id)arg1;
- (void)_deferredStartPlayback;
- (void)startPluginPlaybackAfterDelay:(double)arg1;
- (void)stopPluginPlayback;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)clearRecentPluginTouch;
- (_Bool)hasRecentTouchForSendingPlugin:(id)arg1;
- (_Bool)isVisiblePlugin:(id)arg1;
- (void)stopFullscreenEffect;
- (void)startFullscreenEffectIfNeededForChatItem:(id)arg1;
- (void)raiseGestureRecognized:(id)arg1;
- (_Bool)canRaiseToTalk;
- (_Bool)canRaiseToListen;
- (void)stopPlayingAudio;
- (void)updateTranscript:(CDUnknownBlockType)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)reloadData;
- (void)_prewarmBalloonControllers;
- (void)sizeFullTranscriptIfNecessary;
- (void)invalidateChatItemLayoutWithBalloonMaxWidth:(double)arg1 marginInsets:(struct UIEdgeInsets)arg2;
- (void)setScrollAnchor:(double)arg1;
- (void)deleteSelectedItems:(id)arg1;
- (void)setSelectedItems:(id)arg1;
- (id)selectedItems;
- (void)highlightItemAtIndexPathWhenDisplayed:(id)arg1;
- (void)_highlightCell:(id)arg1;
@property(readonly, nonatomic) IMChat *chat;
- (id)initWithConversation:(id)arg1 bulletins:(id)arg2 balloonMaxWidth:(double)arg3 marginInsets:(struct UIEdgeInsets)arg4;
- (id)initWithConversation:(id)arg1 balloonMaxWidth:(double)arg2 marginInsets:(struct UIEdgeInsets)arg3;
- (void)_prewarmTranscriptAssetsIfNecessary;
- (void)viewDidAppearDeferredSetup;
- (void)viewDidAppear:(_Bool)arg1;
- (void)performResumeDeferredSetup;
- (void)prepareForSuspend;
- (void)parentControllerDidBecomeActive;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)didMoveToParentViewController:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)dealloc;
- (id)_remoteLogDumpButtonTitle;
- (id)_localLogDumpButtonTitle;
- (void)_performRemoteLogDump;
- (void)_performLocalLogDump;
- (void)__handleLoggingTapped:(id)arg1;
- (void)_showLoggingAlertIfNecessary;
- (void)_tearDownLoggingTapGestureRecognizer;
- (void)_setupLoggingTapGestureRecognizer;
- (_Bool)_shouldShowInternalUILogging;
- (_Bool)_shouldShowUILogging;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

