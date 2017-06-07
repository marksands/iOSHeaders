//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVMLKit/_TVMLCollectionViewController.h>

#import <TVMLKit/TVAppTemplateImpressionable-Protocol.h>
#import <TVMLKit/UICollectionViewDelegateFlowLayout-Protocol.h>
#import <TVMLKit/_TVListViewCellDelegate-Protocol.h>

@class IKViewElement, NSDictionary, NSIndexPath, NSMutableArray, NSString, UIViewController;
@protocol _TVListViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface _TVListViewController : _TVMLCollectionViewController <_TVListViewCellDelegate, TVAppTemplateImpressionable, UICollectionViewDelegateFlowLayout>
{
    _Bool _relatedContentElementValid;
    IKViewElement *_relatedContentElement;
    IKViewElement *_previewElement;
    _Bool _previewUpdated;
    UIViewController *_previewController;
    double _cachedCellWidth;
    NSDictionary *_cachedListItemLockupHeightsBySection;
    NSMutableArray *_cachedListChildViewControllers;
    NSIndexPath *_pendingPreviewIndexPath;
    NSIndexPath *_lastPreviewedIndexPath;
    NSIndexPath *_secondCellIndexPath;
    _Bool _secondIndexPathFocused;
    _Bool _indexDisplayEnabled;
    id <_TVListViewControllerDelegate> _delegate;
}

+ (id)_shadowCollectionElementForCollectionElement:(id)arg1;
@property(nonatomic, getter=isIndexDisplayEnabled) _Bool indexDisplayEnabled; // @synthesize indexDisplayEnabled=_indexDisplayEnabled;
@property(nonatomic) __weak id <_TVListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (struct UIEdgeInsets)_marginForHeaderCellForElement:(id)arg1 section:(long long)arg2;
- (struct CGSize)_expectedHeaderCellSizeForElement:(id)arg1 section:(long long)arg2;
- (struct CGSize)_expectedCellSizeForElement:(id)arg1 inSectionIndex:(long long)arg2;
- (id)_cachedViewControllerForElement:(id)arg1;
- (id)_viewControllerForElement:(id)arg1;
- (id)_previewControllerWithElement:(id)arg1 previewElement:(id *)arg2;
- (void)_updatedPreviewWithItemAtIndexPath:(id)arg1;
- (id)_relatedContentElementForIndexPath:(id)arg1;
- (_Bool)_relatedElementIsGridAtIndexPath:(id)arg1;
- (void)_delayedUpdatePreview;
- (void)_updateCellMetrics;
- (id)impressionableElementsContainedInDocument:(id)arg1;
- (_Bool)listCell:(id)arg1 shouldAppearSelectedForPreviouslyFocusedView:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)collectionView:(id)arg1 shouldHandleLongPressForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;
- (void)templateControllerDidUpdateFocusFromView:(id)arg1;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)updateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)didUpdateCollectionViewByNeedingReload:(_Bool)arg1 focusUpdate:(_Bool)arg2;
- (void)updateSupplementaryViewsForSectionAtOldIndex:(long long)arg1 oldElement:(id)arg2 withNewIndex:(long long)arg3 newElement:(id)arg4 requiresReload:(_Bool *)arg5 requiresRelayout:(_Bool *)arg6;
- (void)updateVisibleCell:(id)arg1 atIndexPath:(id)arg2 withElement:(id)arg3;
- (struct CGSize)expectedCellSizeForElement:(id)arg1 atIndexPath:(id)arg2;
- (Class)cellClassForElement:(id)arg1;
- (void)updateViewLayoutAnimated:(_Bool)arg1 relayout:(_Bool)arg2;
- (_Bool)contentFlowsVertically;
- (id)makeCollectionViewWithFrame:(struct CGRect)arg1;
- (void)viewDidLayoutSubviews;
- (void)didMoveToParentViewController:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)updateWithViewElement:(id)arg1 cellMetrics:(struct TVCellMetrics)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

