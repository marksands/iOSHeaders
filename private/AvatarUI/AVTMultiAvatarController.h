//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVTAvatarDisplayingController.h"
#import "AVTAvatarListContainerViewDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class AVTAvatarListCell, AVTAvatarRecordDataSource, AVTCenteringCollectionViewDelegate, AVTPlusButtonView, AVTRenderingScope, AVTTransitionCoordinator, AVTUIEnvironment, AVTViewSession, AVTZIndexEngagementListCollectionViewLayout, NSArray, NSString, UICollectionView, UIView, _AVTAvatarRecordImageProvider;

@interface AVTMultiAvatarController : NSObject <UICollectionViewDelegate, UICollectionViewDataSource, AVTAvatarListContainerViewDelegate, AVTAvatarDisplayingController>
{
    _Bool _allowsCreate;
    _Bool _hideImageForDisplayedRecord;
    id <AVTAvatarDisplayingControllerDelegate> delegate;
    id <AVTPresenterDelegate> presenterDelegate;
    double _decelerationRate;
    AVTRenderingScope *_renderingScope;
    UIView *_view;
    UICollectionView *_collectionView;
    AVTZIndexEngagementListCollectionViewLayout *_collectionViewLayout;
    AVTCenteringCollectionViewDelegate *_centeringDelegate;
    NSArray *_recordListItems;
    AVTViewSession *_avtViewSession;
    AVTPlusButtonView *_addItemView;
    id <AVTAvatarListItem> _addListItem;
    id <AVTAvatarRecord> _displayedRecord;
    AVTAvatarListCell *_liveCell;
    AVTTransitionCoordinator *_transitionCoordinator;
    AVTAvatarRecordDataSource *_dataSource;
    AVTUIEnvironment *_environment;
    id <AVTUILogger> _logger;
    _AVTAvatarRecordImageProvider *_thumbnailRenderer;
    id <AVTViewCarouselLayout> _avtViewLayout;
    struct CGPoint _lastContentOffset;
}

+ (id)listItemsForAvatarRecords:(id)arg1;
+ (id)newCollectionViewLayoutForEngagedCellSize:(struct CGSize)arg1 boundsSize:(struct CGSize)arg2 environment:(id)arg3;
+ (id)snapshotProviderFocusedOnRecordWithIdentifier:(id)arg1 size:(struct CGSize)arg2 avtViewAspectRatio:(struct CGSize)arg3 dataSource:(id)arg4 environment:(id)arg5;
@property(nonatomic) _Bool hideImageForDisplayedRecord; // @synthesize hideImageForDisplayedRecord=_hideImageForDisplayedRecord;
@property(nonatomic) struct CGPoint lastContentOffset; // @synthesize lastContentOffset=_lastContentOffset;
@property(retain, nonatomic) id <AVTViewCarouselLayout> avtViewLayout; // @synthesize avtViewLayout=_avtViewLayout;
@property(readonly, nonatomic) _AVTAvatarRecordImageProvider *thumbnailRenderer; // @synthesize thumbnailRenderer=_thumbnailRenderer;
@property(readonly, nonatomic) id <AVTUILogger> logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) AVTUIEnvironment *environment; // @synthesize environment=_environment;
@property(readonly, nonatomic) AVTAvatarRecordDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) AVTTransitionCoordinator *transitionCoordinator; // @synthesize transitionCoordinator=_transitionCoordinator;
@property(retain, nonatomic) AVTAvatarListCell *liveCell; // @synthesize liveCell=_liveCell;
@property(retain, nonatomic) id <AVTAvatarRecord> displayedRecord; // @synthesize displayedRecord=_displayedRecord;
@property(retain, nonatomic) id <AVTAvatarListItem> addListItem; // @synthesize addListItem=_addListItem;
@property(retain, nonatomic) AVTPlusButtonView *addItemView; // @synthesize addItemView=_addItemView;
@property(retain, nonatomic) AVTViewSession *avtViewSession; // @synthesize avtViewSession=_avtViewSession;
@property(retain, nonatomic) NSArray *recordListItems; // @synthesize recordListItems=_recordListItems;
@property(retain, nonatomic) AVTCenteringCollectionViewDelegate *centeringDelegate; // @synthesize centeringDelegate=_centeringDelegate;
@property(retain, nonatomic) AVTZIndexEngagementListCollectionViewLayout *collectionViewLayout; // @synthesize collectionViewLayout=_collectionViewLayout;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
@property(nonatomic) _Bool allowsCreate; // @synthesize allowsCreate=_allowsCreate;
@property(readonly, nonatomic) AVTRenderingScope *renderingScope; // @synthesize renderingScope=_renderingScope;
@property(nonatomic) double decelerationRate; // @synthesize decelerationRate=_decelerationRate;
@property(nonatomic) __weak id <AVTPresenterDelegate> presenterDelegate; // @synthesize presenterDelegate;
@property(nonatomic) __weak id <AVTAvatarDisplayingControllerDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)transitionCell:(id)arg1 toStopFocusingAnimated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)transitionCell:(id)arg1 indexPath:(id)arg2 toStartFocusingAnimated:(_Bool)arg3 session:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)transitionCenterCellToStartFocusing:(id)arg1 indexPath:(id)arg2;
- (void)transitionCenterCellIfPresentToStopFocusingAnimated:(_Bool)arg1;
- (void)transitionCenterCellIfPresentToStartFocusing;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)prepareToTransitionToVisible:(_Bool)arg1 completionHandler:(CDUnknownBlockType *)arg2;
- (void)stopUsingAVTViewSessionSynchronously:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)useAVTViewFromSession:(id)arg1 withLayout:(id)arg2;
- (void)reloadData;
- (void)reloadRecordListItems;
- (void)loadRecordsIfNeeded;
- (void)displayAvatarForRecord:(id)arg1 animated:(_Bool)arg2;
- (void)avatarListDidChangeSize:(struct CGSize)arg1;
- (void)avatarListWillChangeSize:(struct CGSize)arg1;
- (void)layoutDidChangeWhileMoving:(_Bool)arg1 offset:(struct CGPoint)arg2;
- (void)notifyDelegateForScrollingTowardItem:(id)arg1 ratio:(double)arg2;
- (void)notifyDelegateForScrollingTowardItemFromOffset:(struct CGPoint)arg1;
- (void)transitionCurrentDisplayedRecordAnimated:(_Bool)arg1;
- (void)setDisplayedRecordFromIndex:(unsigned long long)arg1;
- (void)updateDisplayedRecordIfNeeded;
- (_Bool)shouldCurrentlyDisplayedRecordTransitionToLive;
- (id)cellForRecordItem:(id)arg1;
- (id)indexPathForItemClosestToCenter;
- (id)recordForItem:(id)arg1;
- (unsigned long long)listItemIndexForRecord:(id)arg1;
- (void)scrollToViewAtIndex:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)scrollToViewForAvatarRecord:(id)arg1 animated:(_Bool)arg2;
- (void)scrollToDisplayedRecord;
- (void)createAvatar;
- (id)loadRecords;
- (void)preloadAll;
- (void)loadView;
- (void)buildCollectionViewAndConfigureLayoutIfNeeded;
- (void)setAllowsCreate:(_Bool)arg1 animated:(_Bool)arg2;
- (void)createAddItemViewIfNeeded;
- (id)getFirstItem;
- (_Bool)isViewLoaded;
- (id)listItemsForDisplay;
- (id)initWithDataSource:(id)arg1 environment:(id)arg2 initialAVTViewLayout:(id)arg3;
- (id)initWithDataSource:(id)arg1 environment:(id)arg2;
- (id)viewForSnapshot;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

