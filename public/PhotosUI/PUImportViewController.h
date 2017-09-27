//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewController.h"

#import "PLCameraImporterDelegate.h"
#import "PLConfigurableNavigationDisplayOptions.h"
#import "PUSectionedGridLayoutDelegate.h"

@class NSCache, NSMutableIndexSet, NSString, NSTimer, PLCameraImporter, PLEmptyAlbumView, PLImportSessionInfo, PLTemporaryImageTable, PUPhotosGridViewControllerSpec, UIBarButtonItem, UIImage, UIView, _UIContentUnavailableView;

@interface PUImportViewController : UICollectionViewController <PUSectionedGridLayoutDelegate, PLCameraImporterDelegate, PLConfigurableNavigationDisplayOptions>
{
    PLCameraImporter *_importer;
    NSMutableIndexSet *_itemsAlreadyInLibraryIndexes;
    _Bool _readingImportItems;
    _Bool _completedAnImport;
    PLTemporaryImageTable *_thumbnailTable;
    NSMutableIndexSet *_thumbnailsNotYetLoaded;
    PLImportSessionInfo *_importSessionInfo;
    struct __CFUserNotification *_importCompleteNotification;
    UIBarButtonItem *_importButtonItem;
    UIBarButtonItem *_deleteButtonItem;
    UIBarButtonItem *_stopBarItem;
    UIView *_customTitleView;
    NSString *_customTitle;
    NSTimer *_deletedItemsTimer;
    NSTimer *_icSleepPreventionTimer;
    UIView *_loadingIndicatorView;
    PLEmptyAlbumView *_emptyAlbumView;
    unsigned long long _busyCount;
    _Bool _canSkipDupCheckOnDelete;
    _Bool _skipDupCheckOnDelete;
    _Bool _containsMultiRepAssets;
    _Bool _allowsSelection;
    id _mstreamd_pause_context;
    NSCache *_extensionPlaceholdersCache;
    int __thumbnailImageFormat;
    UIImage *__missingThumbnailPlaceholder;
    PUPhotosGridViewControllerSpec *__spec;
    double __collectionViewLayoutReferenceWidth;
    id __pendingViewSizeTransitionContext;
    id __cachedViewSizeTransitionContext;
    _UIContentUnavailableView *__placeholderView;
    struct CGSize __cachedViewSizeTransitionContextSize;
}

+ (id)_newGridLayoutFromSpec:(id)arg1;
@property(retain, nonatomic, setter=_setPlaceholderView:) _UIContentUnavailableView *_placeholderView; // @synthesize _placeholderView=__placeholderView;
@property(nonatomic, setter=_setCachedViewSizeTransitionContextSize:) struct CGSize _cachedViewSizeTransitionContextSize; // @synthesize _cachedViewSizeTransitionContextSize=__cachedViewSizeTransitionContextSize;
@property(retain, nonatomic, setter=_setCachedViewSizeTransitionContext:) id _cachedViewSizeTransitionContext; // @synthesize _cachedViewSizeTransitionContext=__cachedViewSizeTransitionContext;
@property(retain, nonatomic, setter=_setPendingViewSizeTransitionContext:) id _pendingViewSizeTransitionContext; // @synthesize _pendingViewSizeTransitionContext=__pendingViewSizeTransitionContext;
@property(nonatomic, setter=_setCollectionViewLayoutReferenceWidth:) double _collectionViewLayoutReferenceWidth; // @synthesize _collectionViewLayoutReferenceWidth=__collectionViewLayoutReferenceWidth;
@property(retain, nonatomic, setter=_setSpec:) PUPhotosGridViewControllerSpec *_spec; // @synthesize _spec=__spec;
@property(retain) UIView *customTitleView; // @synthesize customTitleView=_customTitleView;
@property(copy) NSString *customTitle; // @synthesize customTitle=_customTitle;
@property(retain, nonatomic) PLCameraImporter *importer; // @synthesize importer=_importer;
- (void).cxx_destruct;
- (void)stopImport:(id)arg1;
- (void)delete:(id)arg1;
- (void)import:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)importSelected:(id)arg1;
- (void)importAll:(id)arg1;
- (void)_importItems;
- (void)_alertViewDidDismiss;
- (void)_importItemsAtIndexes:(id)arg1;
- (void)setImportDevice:(id)arg1;
- (id)_thumbnailPathString;
- (void)_cancelAlerts;
- (id)importDevice;
- (_Bool)isImporting;
- (_Bool)isBusy;
@property(readonly, nonatomic) int _thumbnailImageFormat; // @synthesize _thumbnailImageFormat=__thumbnailImageFormat;
- (id)_placeholderExtenstionForItem:(id)arg1;
- (id)_placeholderForItem:(id)arg1;
- (id)_newGenericImageForItemWithExtension:(id)arg1 size:(struct CGSize)arg2;
@property(readonly, nonatomic) UIImage *_missingThumbnailPlaceholder; // @synthesize _missingThumbnailPlaceholder=__missingThumbnailPlaceholder;
- (void)importer:(id)arg1 didCompleteRemovalOfItems:(id)arg2;
- (void)importer:(id)arg1 didRemoveImportItems:(id)arg2 atIndexes:(id)arg3;
- (void)importer:(id)arg1 didCompleteImportForItems:(id)arg2;
- (void)handleImportCompleteAlertResponse:(struct __CFUserNotification *)arg1 flags:(unsigned long long)arg2;
- (void)_deleteItems:(id)arg1;
- (void)_endImport;
- (void)importer:(id)arg1 didImportItem:(id)arg2 error:(id)arg3;
- (void)importer:(id)arg1 didCopyOriginalForItem:(id)arg2 error:(id)arg3;
- (void)importerDidFinishReadingImportItems:(id)arg1 error:(id)arg2;
- (void)importer:(id)arg1 didChangeImportItem:(id)arg2 changeType:(int)arg3 error:(id)arg4;
- (void)_updateThumbnailDataForImportItem:(id)arg1;
- (void)importer:(id)arg1 didAddImportItem:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)_requestNextThumbnail;
- (void)_beginImportForItemAtIndex:(unsigned long long)arg1;
- (void)_scrollToCurrentImportIndex;
- (void)_endUninterruptibleOperation;
- (void)_beginUninterruptibleOperation;
- (void)_icSleepPreventionTimerFired:(id)arg1;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)sectionedGridLayoutAnchorItemForAdjustingContentOffset:(id)arg1;
- (id)_bestReferenceItemIndexPath;
- (void)_getRotationContentSettings:(CDStruct_e950349b *)arg1;
- (id)_gridLayout;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)_updateLayoutMetrics;
- (void)_updateContentOffsetForPendingViewSizeTransition;
- (_Bool)updateSpec;
- (void)_invalidateCachedViewSizeTransitionContext;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithSpec:(id)arg1;
- (id)init;
- (id)_loadingIndicatorView;
- (void)_removeEmptyAlbumViewAnimated:(_Bool)arg1;
- (void)_addEmptyAlbumViewWithError:(id)arg1 animated:(_Bool)arg2;
- (id)_newEmptyPlaceholderView;
- (void)_dismissPopupsAnimated:(_Bool)arg1;
- (void)_photosDatabaseHasChanged:(id)arg1;
- (void)_deletedItemsTimerFired:(id)arg1;
- (void)_updateItemViewAtIndex:(unsigned long long)arg1;
- (void)_updateCell:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)_updateToolbarAnimated:(_Bool)arg1;
- (id)_deletableIndexesOfItemsAtIndexes:(id)arg1;
- (void)_updateThumbnailForCell:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)showImportedBadgesForItemsAtIndexes:(id)arg1;
- (_Bool)_isItemVisibleAtIndex:(long long)arg1;
- (void)_setSelectedIndexes:(id)arg1;
- (id)_selectedIndexes;
- (void)_reloadDataAndKeepSelection;
- (id)_localizedCameraName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

