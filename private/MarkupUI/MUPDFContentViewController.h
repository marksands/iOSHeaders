//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MarkupUI/MUContentViewController.h>

#import "MUContentViewControllerProtocol.h"
#import "PDFAKControllerDelegateProtocol.h"
#import "PDFViewDelegatePrivate.h"
#import "_UIViewBoundingPathChangeObserver.h"

@class MUPDFPageLabelView, NSArray, NSLayoutConstraint, NSString, PDFDocument, PDFPage, PDFThumbnailView, PDFView, UIScrollView, UIView;

@interface MUPDFContentViewController : MUContentViewController <PDFAKControllerDelegateProtocol, PDFViewDelegatePrivate, _UIViewBoundingPathChangeObserver, MUContentViewControllerProtocol>
{
    PDFDocument *_pdfDocument;
    _Bool _showsThumbnailView;
    _Bool _navigationModeHorizontal;
    _Bool _forcesPDFViewTopAlignment;
    _Bool _constraintsAreHorizontal;
    _Bool _viewIsTransitioningBetweenSizes;
    _Bool _viewTransitionPreviousAutoscalingState;
    _Bool _didSetup;
    NSArray *_sourceContentReplacedAnnotationMaps;
    PDFView *_pdfView;
    PDFThumbnailView *_thumbnailView;
    unsigned long long _inkStyle;
    UIView *_thumbnailViewHolder;
    NSArray *_thumbnailViewHolderConstraints;
    NSLayoutConstraint *_thumbnailViewHolderRevealConstraint;
    MUPDFPageLabelView *_pageLabelView;
    PDFPage *_viewTransitionPageToCenter;
    double _viewTransitionPreviousScale;
    struct CGPoint _viewTransitionPointOnPageToCenter;
    struct UIEdgeInsets _edgeInsets;
    struct UIEdgeInsets _cachedThumnailViewInsets;
}

@property(nonatomic) struct UIEdgeInsets cachedThumnailViewInsets; // @synthesize cachedThumnailViewInsets=_cachedThumnailViewInsets;
@property _Bool didSetup; // @synthesize didSetup=_didSetup;
@property _Bool viewTransitionPreviousAutoscalingState; // @synthesize viewTransitionPreviousAutoscalingState=_viewTransitionPreviousAutoscalingState;
@property double viewTransitionPreviousScale; // @synthesize viewTransitionPreviousScale=_viewTransitionPreviousScale;
@property struct CGPoint viewTransitionPointOnPageToCenter; // @synthesize viewTransitionPointOnPageToCenter=_viewTransitionPointOnPageToCenter;
@property __weak PDFPage *viewTransitionPageToCenter; // @synthesize viewTransitionPageToCenter=_viewTransitionPageToCenter;
@property _Bool viewIsTransitioningBetweenSizes; // @synthesize viewIsTransitioningBetweenSizes=_viewIsTransitioningBetweenSizes;
@property(retain) MUPDFPageLabelView *pageLabelView; // @synthesize pageLabelView=_pageLabelView;
@property(retain) NSLayoutConstraint *thumbnailViewHolderRevealConstraint; // @synthesize thumbnailViewHolderRevealConstraint=_thumbnailViewHolderRevealConstraint;
@property(retain) NSArray *thumbnailViewHolderConstraints; // @synthesize thumbnailViewHolderConstraints=_thumbnailViewHolderConstraints;
@property _Bool constraintsAreHorizontal; // @synthesize constraintsAreHorizontal=_constraintsAreHorizontal;
@property(retain) UIView *thumbnailViewHolder; // @synthesize thumbnailViewHolder=_thumbnailViewHolder;
@property(nonatomic) unsigned long long inkStyle; // @synthesize inkStyle=_inkStyle;
@property(nonatomic) _Bool forcesPDFViewTopAlignment; // @synthesize forcesPDFViewTopAlignment=_forcesPDFViewTopAlignment;
@property(retain) PDFThumbnailView *thumbnailView; // @synthesize thumbnailView=_thumbnailView;
@property(retain) PDFView *pdfView; // @synthesize pdfView=_pdfView;
@property(nonatomic) _Bool navigationModeHorizontal; // @synthesize navigationModeHorizontal=_navigationModeHorizontal;
@property(nonatomic) _Bool showsThumbnailView; // @synthesize showsThumbnailView=_showsThumbnailView;
@property(retain) NSArray *sourceContentReplacedAnnotationMaps; // @synthesize sourceContentReplacedAnnotationMaps=_sourceContentReplacedAnnotationMaps;
@property(nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property(readonly) PDFDocument *pdfDocument; // @synthesize pdfDocument=_pdfDocument;
- (void).cxx_destruct;
- (struct CGAffineTransform)_compensatingAffineTransformForPage:(id)arg1;
- (void)_userChangedScrollViewMagnificationNotification:(id)arg1;
- (void)_updateMinMaxZoomFactor;
- (struct CGSize)_medianSizeForCurrentDocumentInPDFViewWithGetter:(CDUnknownBlockType)arg1;
- (void)_recoverFromRotation;
- (void)_prepareToRotate;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)highlight:(id)arg1;
- (id)contentSnapshot;
- (struct CGRect)visibleContentRectInCoordinateSpace:(id)arg1;
- (struct CGRect)visibleContentRect;
- (void)_updatePageNumberOverlayToPage:(unsigned long long)arg1 animate:(_Bool)arg2;
- (void)pdfDocumentDidUnlock:(id)arg1;
- (void)pdfViewDidChangeCurrentPage:(id)arg1;
- (void)uninstallAllAnnotationControllerOverlays;
- (void)_teardownPDFViewIfNecessary;
- (void)_createPDFView;
@property(readonly, nonatomic) NSString *documentUnlockedWithPassword;
- (void)_updateThumbnailViewAppearance;
- (void)_updateThumbnailViewHolderConstraints;
- (_Bool)_updateCachedThumbnailViewInsets;
- (void)_boundingPathMayHaveChangedForView:(id)arg1 relativeToBoundsOriginOnly:(_Bool)arg2;
- (void)_updatePDFViewDisplayMode;
@property(readonly) unsigned long long pageCount;
- (void)controllerWillDismissSignatureManagerView:(id)arg1;
- (void)controllerWillShowSignatureManagerView:(id)arg1;
- (void)controllerWillDismissSignatureCaptureView:(id)arg1;
- (void)controllerWillShowSignatureCaptureView:(id)arg1;
- (void)penStrokeCompletedForAnnotationController:(id)arg1;
- (void)editCheckpointReachedForAnnotationController:(id)arg1;
- (void)editDetectedForAnnotationController:(id)arg1;
- (id)popoverPresentingViewControllerForAnnotationController:(id)arg1;
- (void)positionSketchOverlay:(id)arg1 forAnnotationController:(id)arg2;
- (id)controller:(id)arg1 willSetToolbarItems:(id)arg2;
- (_Bool)shouldShowAnnotationsOfType:(id)arg1;
- (_Bool)PDFView:(id)arg1 shouldHandleLink:(id)arg2;
- (id)menuItems:(id)arg1 forPage:(id)arg2;
@property(readonly, nonatomic) UIScrollView *contentViewScrollView;
@property(readonly, nonatomic) long long defaultToolTag;
- (struct CGSize)idealContentSizeForScreenSize:(struct CGSize)arg1 windowDecorationSize:(struct CGSize)arg2;
- (struct CGSize)contentSize;
- (void)loadContentWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)teardown;
- (void)setup;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithPDFDocument:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(nonatomic) _Bool centersIgnoringContentInsets;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

