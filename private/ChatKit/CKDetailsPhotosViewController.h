//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ChatKit/CKViewController.h>

#import "CKAttachmentCellDelegate.h"
#import "CKFeedCollectionViewLayoutDatasource.h"
#import "CKFeedCollectionViewLayoutDelegate.h"
#import "CKQLPreviewControllerDelegate.h"
#import "CKSharedAssetsControllerProtocol.h"
#import "QLPreviewControllerDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDragSource.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIViewControllerPreviewingDelegate.h"
#import "UIViewControllerPreviewingDelegate_Private.h"

@class CKAttachmentCollectionView, CKFeedCollectionViewLayout, CKQLDetailsPreviewController, NSArray, NSString, UIBarButtonItem;

@interface CKDetailsPhotosViewController : CKViewController <CKFeedCollectionViewLayoutDelegate, CKAttachmentCellDelegate, CKFeedCollectionViewLayoutDatasource, CKQLPreviewControllerDelegate, UICollectionViewDragSource, UIViewControllerPreviewingDelegate, UIViewControllerPreviewingDelegate_Private, UIGestureRecognizerDelegate, UICollectionViewDataSource, QLPreviewControllerDelegate, CKSharedAssetsControllerProtocol>
{
    _Bool _initialLoad;
    _Bool _selectingAttachments;
    id <CKSharedAssetsControllerDelegate> _delegate;
    CKAttachmentCollectionView *_collectionView;
    NSArray *_mediaObjects;
    CKFeedCollectionViewLayout *_feedLayout;
    CKQLDetailsPreviewController *_qlPreviewController;
    UIBarButtonItem *_saveButton;
    UIBarButtonItem *_deleteButton;
    NSArray *_visibleMediaObjects;
    UIBarButtonItem *_parentRightBarButtonItem;
}

@property(retain, nonatomic) UIBarButtonItem *parentRightBarButtonItem; // @synthesize parentRightBarButtonItem=_parentRightBarButtonItem;
@property(retain, nonatomic) NSArray *visibleMediaObjects; // @synthesize visibleMediaObjects=_visibleMediaObjects;
@property(nonatomic, getter=isSelectingAttachments) _Bool selectingAttachments; // @synthesize selectingAttachments=_selectingAttachments;
@property(retain, nonatomic) UIBarButtonItem *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(retain, nonatomic) UIBarButtonItem *saveButton; // @synthesize saveButton=_saveButton;
@property(nonatomic, getter=isInitialLoad) _Bool initialLoad; // @synthesize initialLoad=_initialLoad;
@property(retain, nonatomic) CKQLDetailsPreviewController *qlPreviewController; // @synthesize qlPreviewController=_qlPreviewController;
@property(retain, nonatomic) CKFeedCollectionViewLayout *feedLayout; // @synthesize feedLayout=_feedLayout;
@property(retain, nonatomic) NSArray *mediaObjects; // @synthesize mediaObjects=_mediaObjects;
@property(retain, nonatomic) CKAttachmentCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak id <CKSharedAssetsControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (double)collectionView:(id)arg1 layout:(id)arg2 spacingBetweenSection:(long long)arg3 andHeaderForGroupID:(id)arg4;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 headerSizeForGroupID:(id)arg3 proposedSize:(struct CGSize)arg4;
- (id)collectionView:(id)arg1 layout:(id)arg2 groupIDForSection:(long long)arg3;
- (struct CKFeedSeparatorMetrics)collectionView:(id)arg1 layout:(id)arg2 metricsForSeparatorBetweenSection:(long long)arg3 andSection:(long long)arg4 proposedMetrics:(struct CKFeedSeparatorMetrics)arg5;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForFooterInSection:(long long)arg3 proposedSize:(struct CGSize)arg4;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForHeaderOfSections:(id)arg3 proposedSize:(struct CGSize)arg4;
- (_Bool)collectionView:(id)arg1 layout:(id)arg2 shouldHideHeaderInSection:(long long)arg3;
- (_Bool)collectionView:(id)arg1 layout:(id)arg2 shouldJoinSection:(long long)arg3 withSection:(long long)arg4;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForThumbnailInSection:(long long)arg3;
- (struct CKFeedSeparatorMetrics)collectionView:(id)arg1 layout:(id)arg2 metricsForSeparatorBetweenRowAtIndexPath:(id)arg3 andRowAtIndexPath:(id)arg4 proposedMetrics:(struct CKFeedSeparatorMetrics)arg5;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForRowAtIndexPath:(id)arg3 proposedSize:(struct CGSize)arg4;
- (void)collectionView:(id)arg1 layout:(id)arg2 referenceMaximumLength:(double *)arg3 minimumNumberOfTilesToOmit:(long long *)arg4 forSection:(long long)arg5;
- (id)collectionView:(id)arg1 layout:(id)arg2 batchIDForTileAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 captionSizeForTileAtIndexPath:(id)arg3 proposedSize:(struct CGSize)arg4;
- (_Bool)collectionView:(id)arg1 layout:(id)arg2 shouldShowCaptionForTileAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 mininumSizeForTileAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 imageSizeForTileAtIndexPath:(id)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 contentInsetsForSection:(long long)arg3;
- (long long)collectionView:(id)arg1 layout:(id)arg2 typeForSection:(long long)arg3;
- (_Bool)collectionView:(id)arg1 layout:(id)arg2 shouldHideSection:(long long)arg3;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1 forFeedLayout:(id)arg2;
- (unsigned long long)numberOfSectionsInFeedLayout:(id)arg1;
- (void)performAction:(SEL)arg1 forAttachmentCell:(id)arg2;
- (void)attachmentCellTapped:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)committedViewControllerForPreviewViewController:(id)arg1;
- (void)didDismissPreviewViewController:(id)arg1 committing:(_Bool)arg2;
- (void)willPresentPreviewViewController:(id)arg1 forLocation:(struct CGPoint)arg2 inSourceView:(id)arg3;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (id)previewController:(id)arg1 transitionViewForPreviewItem:(id)arg2 uncroppedSourceFrame:(struct CGRect *)arg3 realSize:(struct CGSize *)arg4;
- (struct CGRect)previewController:(id)arg1 frameForPreviewItem:(id)arg2 inSourceView:(id *)arg3;
- (_Bool)previewController:(id)arg1 shouldOpenURL:(id)arg2 forPreviewItem:(id)arg3;
- (void)previewControllerDidDismiss:(id)arg1;
- (_Bool)previewController:(id)arg1 canShareItem:(id)arg2;
- (void)previewControllerDidCancelDismiss:(id)arg1;
- (id)invisibleInkEffectControllerForPreviewController:(id)arg1;
- (id)_collectionView:(id)arg1 dragItemsForItemAtIndexPath:(id)arg2;
- (void)_deleteSelectedAttachments:(id)arg1;
- (void)_saveSelectedAttachments:(id)arg1;
- (void)_deleteAttachments:(id)arg1;
- (void)_saveAttachments:(id)arg1;
- (id)selectedAttachmentIndexes;
- (void)selectAttachments:(id)arg1;
- (void)_updateToolbar;
- (void)_configureCell:(id)arg1 withCollectionView:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)_iconForFileURL:(id)arg1 UTIType:(id)arg2;
- (void)_prewarmNextChunk;
- (void)_faultInAttachments;
- (void)reloadData;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 performAction:(SEL)arg2 forItemAtIndexPath:(id)arg3 withSender:(id)arg4;
- (_Bool)collectionView:(id)arg1 canPerformAction:(SEL)arg2 forItemAtIndexPath:(id)arg3 withSender:(id)arg4;
- (_Bool)collectionView:(id)arg1 shouldShowMenuForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)updateAttachmentItems:(id)arg1;
- (void)parentScrollViewDidScroll:(struct CGPoint)arg1;
- (struct CGSize)contentSizeThatFits:(struct CGSize)arg1;
- (unsigned long long)assetType;
- (struct CGSize)screenSize;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)didReceiveMemoryWarning;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppearDeferredSetup;
- (void)didMoveToParentViewController:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)loadView;
- (id)initWithAttachmentItems:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

