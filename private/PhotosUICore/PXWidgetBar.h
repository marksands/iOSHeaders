//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PXTileSource.h"
#import "PXTilingControllerTransitionDelegate.h"

@class NSMutableSet, NSObject<PXAnonymousView>, NSString, PXBasicTileAnimator, PXScrollViewController, PXTilingController, PXWidgetBarLayout, PXWidgetBarSpec;

@interface PXWidgetBar : NSObject <PXTileSource, PXTilingControllerTransitionDelegate>
{
    _Bool _isPerformingChanges;
    _Bool _isPerformingUpdates;
    struct {
        _Bool view;
        _Bool viewHeight;
        _Bool layout;
    } _needsUpdateFlags;
    struct {
        _Bool didSelectSubtitle;
        _Bool didSelectDisclosureAffordance;
    } _delegateRespondsTo;
    _Bool _allowUserInteractionWithSubtitle;
    PXScrollViewController *_scrollViewController;
    id <PXWidgetBarDelegate> _delegate;
    PXTilingController *_tilingController;
    PXWidgetBarSpec *_spec;
    NSString *_title;
    NSString *_subtitle;
    NSString *_caption;
    NSString *_disclosureTitle;
    PXBasicTileAnimator *__tileAnimator;
    NSMutableSet *__tilesInUse;
    double __viewHeight;
    PXWidgetBarLayout *__layout;
    struct NSObject *_view;
}

@property(readonly, nonatomic) NSObject<PXAnonymousView> *view; // @synthesize view=_view;
@property(readonly, nonatomic) PXWidgetBarLayout *_layout; // @synthesize _layout=__layout;
@property(nonatomic, setter=_setViewHeight:) double _viewHeight; // @synthesize _viewHeight=__viewHeight;
@property(readonly, nonatomic) NSMutableSet *_tilesInUse; // @synthesize _tilesInUse=__tilesInUse;
@property(readonly, nonatomic) PXBasicTileAnimator *_tileAnimator; // @synthesize _tileAnimator=__tileAnimator;
@property(nonatomic) _Bool allowUserInteractionWithSubtitle; // @synthesize allowUserInteractionWithSubtitle=_allowUserInteractionWithSubtitle;
@property(copy, nonatomic) NSString *disclosureTitle; // @synthesize disclosureTitle=_disclosureTitle;
@property(copy, nonatomic) NSString *caption; // @synthesize caption=_caption;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) PXWidgetBarSpec *spec; // @synthesize spec=_spec;
@property(readonly, nonatomic) PXTilingController *tilingController; // @synthesize tilingController=_tilingController;
@property(nonatomic) __weak id <PXWidgetBarDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak PXScrollViewController *scrollViewController; // @synthesize scrollViewController=_scrollViewController;
- (void).cxx_destruct;
- (id)tilingController:(id)arg1 tileIdentifierConverterForChange:(id)arg2;
- (void)checkInTile:(void *)arg1 withIdentifier:(struct PXTileIdentifier)arg2;
- (void *)checkOutTileForIdentifier:(struct PXTileIdentifier)arg1 layout:(id)arg2;
- (void)_updateLayoutIfNeeded;
- (void)_invalidateLayout;
- (void)_updateViewHeightIfNeeded;
- (void)invalidateViewHeight;
- (void)_updateViewIfNeeded;
- (void)invalidateView;
- (void)_updateIfNeeded;
- (void)_setNeedsUpdate;
- (_Bool)_needsUpdate;
- (void)performChanges:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) double viewHeight;
- (void)updateView;
- (struct NSObject *)createView;
- (void)checkInTile:(id)arg1;
- (id)checkOutTileWithKind:(long long)arg1;
- (id)createTileAnimator;
- (void)didSelectDisclosureAffordance;
- (void)didSelectSubtitle;
- (id)initWithScrollViewController:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

