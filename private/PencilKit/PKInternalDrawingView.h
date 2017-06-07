//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PencilKit/PKInternalDrawingLightView.h>

#import <PencilKit/PKControllerDelegate-Protocol.h>
#import <PencilKit/PKDrawingGestureTarget-Protocol.h>
#import <PencilKit/UIGestureRecognizerDelegate-Protocol.h>

@class CADisplayLink, NSObject, NSString, NSTimer, PKController, PKDrawingGestureRecognizer, PKFreeTransformGestureRecognizer, PKInk, PKOpenGLESView, PKSelectionController, PKUndoSwipeGestureRecognizer, UIActivityIndicatorView, UIView;
@protocol OS_dispatch_queue, PKInternalDrawingViewDelegate;

@interface PKInternalDrawingView : PKInternalDrawingLightView <PKControllerDelegate, PKDrawingGestureTarget, UIGestureRecognizerDelegate>
{
    UIView *_transitionBackgroundView;
    UIView *_transitionImageView;
    CADisplayLink *_displayLink;
    CDUnknownBlockType _drawTimerBlock;
    NSObject<OS_dispatch_queue> *_drawTimerQueue;
    _Bool _shouldPause;
    struct CGAffineTransform _imageTransform;
    _Bool _didCancelSelection;
    _Bool _isSelecting;
    struct CGPoint _drawingBeganLocation;
    _Bool _isErasingObjects;
    _Bool _isDrawing;
    _Bool _disableWideGamut;
    _Bool _zooming;
    _Bool _allowLiveInteraction;
    _Bool _editable;
    _Bool _pinchingFromSmallestState;
    _Bool _pinchValid;
    _Bool _fullySetup;
    _Bool _claimedLiveDrawing;
    _Bool _layerFixedPixelSize;
    id <PKInternalDrawingViewDelegate> _delegate;
    PKInk *_ink;
    PKDrawingGestureRecognizer *_drawingGestureRecognizer;
    PKFreeTransformGestureRecognizer *_pinchGestureRecognizer;
    PKController *_drawingController;
    PKOpenGLESView *_glView;
    id _undoTarget;
    SEL _undoSelector;
    UIActivityIndicatorView *_activityView;
    double _minimumZoomScale;
    double _maximumZoomScale;
    double _drawingStartTimestamp;
    NSTimer *_imageTransformTimer;
    double _initialDrawingBoundsYOrigin;
    PKUndoSwipeGestureRecognizer *_undoGestureRecognizer;
    PKUndoSwipeGestureRecognizer *_redoGestureRecognizer;
    PKSelectionController *_selectionController;
    struct CGPoint _drawingStartPointInScreenSpace;
    struct CGAffineTransform _pinchStartAffineTransform;
}

+ (void)setupDefaults;
+ (void)initialize;
@property(nonatomic) _Bool layerFixedPixelSize; // @synthesize layerFixedPixelSize=_layerFixedPixelSize;
@property(readonly, nonatomic) __weak PKSelectionController *selectionController; // @synthesize selectionController=_selectionController;
@property(nonatomic) _Bool didCancelSelection; // @synthesize didCancelSelection=_didCancelSelection;
@property(nonatomic) _Bool claimedLiveDrawing; // @synthesize claimedLiveDrawing=_claimedLiveDrawing;
@property(nonatomic) _Bool fullySetup; // @synthesize fullySetup=_fullySetup;
@property(nonatomic) _Bool pinchValid; // @synthesize pinchValid=_pinchValid;
@property(nonatomic) struct CGAffineTransform pinchStartAffineTransform; // @synthesize pinchStartAffineTransform=_pinchStartAffineTransform;
@property(nonatomic) _Bool pinchingFromSmallestState; // @synthesize pinchingFromSmallestState=_pinchingFromSmallestState;
@property(retain, nonatomic) PKUndoSwipeGestureRecognizer *redoGestureRecognizer; // @synthesize redoGestureRecognizer=_redoGestureRecognizer;
@property(retain, nonatomic) PKUndoSwipeGestureRecognizer *undoGestureRecognizer; // @synthesize undoGestureRecognizer=_undoGestureRecognizer;
@property(nonatomic) double initialDrawingBoundsYOrigin; // @synthesize initialDrawingBoundsYOrigin=_initialDrawingBoundsYOrigin;
@property(retain, nonatomic) NSTimer *imageTransformTimer; // @synthesize imageTransformTimer=_imageTransformTimer;
@property double drawingStartTimestamp; // @synthesize drawingStartTimestamp=_drawingStartTimestamp;
@property(nonatomic) _Bool shouldPause; // @synthesize shouldPause=_shouldPause;
@property(nonatomic) struct CGPoint drawingStartPointInScreenSpace; // @synthesize drawingStartPointInScreenSpace=_drawingStartPointInScreenSpace;
@property(nonatomic) double maximumZoomScale; // @synthesize maximumZoomScale=_maximumZoomScale;
@property(nonatomic) double minimumZoomScale; // @synthesize minimumZoomScale=_minimumZoomScale;
@property(nonatomic) __weak UIActivityIndicatorView *activityView; // @synthesize activityView=_activityView;
@property(nonatomic) SEL undoSelector; // @synthesize undoSelector=_undoSelector;
@property(nonatomic) __weak id undoTarget; // @synthesize undoTarget=_undoTarget;
@property(readonly, nonatomic) PKOpenGLESView *glView; // @synthesize glView=_glView;
@property(readonly, nonatomic) PKController *drawingController; // @synthesize drawingController=_drawingController;
@property(nonatomic, getter=isEditable) _Bool editable; // @synthesize editable=_editable;
@property(nonatomic) _Bool allowLiveInteraction; // @synthesize allowLiveInteraction=_allowLiveInteraction;
@property(nonatomic) _Bool zooming; // @synthesize zooming=_zooming;
@property(retain, nonatomic) PKFreeTransformGestureRecognizer *pinchGestureRecognizer; // @synthesize pinchGestureRecognizer=_pinchGestureRecognizer;
@property(retain, nonatomic) PKDrawingGestureRecognizer *drawingGestureRecognizer; // @synthesize drawingGestureRecognizer=_drawingGestureRecognizer;
@property(nonatomic) _Bool disableWideGamut; // @synthesize disableWideGamut=_disableWideGamut;
@property(nonatomic) _Bool isDrawing; // @synthesize isDrawing=_isDrawing;
@property(retain, nonatomic) PKInk *ink; // @synthesize ink=_ink;
@property(nonatomic) __weak id <PKInternalDrawingViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setDisplayLinkPaused:(_Bool)arg1;
- (void)setIsDrawingForRecap:(_Bool)arg1;
- (void)selectionBegan:(id)arg1;
- (id)accessibilityElements;
@property(readonly, nonatomic) id pkaxOpenGLView;
- (void)updatePanEdgesForTransform:(struct CGAffineTransform)arg1;
- (void)paste:(id)arg1;
- (void)cut:(id)arg1;
- (void)copy:(id)arg1;
- (void)delete:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)dismissEditMenuIfNecessary;
- (void)toggleEditMenuAtLocation:(struct CGPoint)arg1;
- (void)pinchGesture:(id)arg1;
- (struct CGAffineTransform)pinchTransform:(id)arg1 elasticity:(double)arg2;
- (struct CGPoint)translationOffsetForTransform:(struct CGAffineTransform)arg1;
- (double)offsetForCenteringRangeMin:(double)arg1 size:(double)arg2 inSize:(double)arg3;
- (void)forceEndDrawing;
- (void)forceCancelDrawing;
- (void)drawingEstimatedPropertiesUpdated:(id)arg1;
- (void)drawingMoved:(id)arg1 withEvent:(id)arg2;
- (void)cancelNonDrawingGestures;
- (struct CGPoint)applyTransformToTouchLocation:(struct CGPoint)arg1;
- (struct CGAffineTransform)fitTransform;
- (void)drawingCancelled:(CDUnknownBlockType)arg1;
- (void)drawStrokeWithPath:(struct CGPath *)arg1;
- (void)registerUndoForStroke:(id)arg1;
- (void)drawingEnded:(id)arg1;
- (void)_closeLassoForTouch:(id)arg1;
- (void)postDrawingEndedAnnouncementFor:(id)arg1;
- (CDStruct_f17e9403)drawingInputPoint:(struct CGPoint)arg1 forTouch:(id)arg2 predicted:(_Bool)arg3;
- (void)drawingBegan:(id)arg1;
- (void)postDrawingBeganAnnouncementFor:(id)arg1;
- (void)eraseStrokesForPoint:(struct CGPoint)arg1;
@property(readonly, nonatomic) _Bool isRendering;
@property(nonatomic) _Bool contentHidden;
- (void)setDrawing:(id)arg1 image:(id)arg2 imageDrawing:(id)arg3 completion:(CDUnknownBlockType)arg4 fullyRenderedCompletionBlock:(CDUnknownBlockType)arg5;
- (void)setDrawing:(id)arg1;
- (void)rotate:(id)arg1;
- (void)rotateIfNeeded;
- (void)updateImageTransform:(id)arg1;
- (void)setImageTransformFrom:(struct CGAffineTransform)arg1 toTransform:(struct CGAffineTransform)arg2 animated:(_Bool)arg3 duration:(double)arg4;
- (void)setupFullScreenTransform:(struct CGAffineTransform)arg1 toViewOrientation:(struct CGAffineTransform)arg2 animated:(_Bool)arg3;
- (void)eraseAll;
- (void)performUndoSelectionCommand:(id)arg1;
- (void)performUndoModifyStrokesCommand:(id)arg1;
- (void)performUndo:(id)arg1;
- (_Bool)showEraseAllButton;
- (_Bool)canEraseAll;
- (_Bool)canRedo;
- (_Bool)canUndo;
- (_Bool)enableUserActionButton;
- (_Bool)canPerformUserAction;
- (void)setImageTransform:(struct CGAffineTransform)arg1 animated:(_Bool)arg2;
@property(nonatomic) struct CGAffineTransform imageTransform;
- (void)drawingChanged:(id)arg1;
- (void)setupFullScreenTransform;
- (void)setFrame:(struct CGRect)arg1;
- (void)setOpaque:(_Bool)arg1;
- (void)_drawingDisplay;
- (void)drawNowIfNeeded;
- (void)setNeedsDrawingDisplay;
- (void)setBackgroundImage:(struct CGImage *)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)done;
- (_Bool)canBecomeFirstResponder;
- (void)setupDisplayLink;
- (id)glLayer;
- (void)_rebuildOpenGLView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)setupOpenGLViewForWideGamut:(_Bool)arg1 withPixelSize:(struct CGSize)arg2;
- (void)setupOpenGLWithPixelSize:(struct CGSize)arg1 drawingSize:(struct CGSize)arg2;
- (void)_gestureRecognizerFailed:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)updateZoomScaleCaps;
- (void)setupGestures;
- (double)layerContentScale;
- (void)resizeBackingBuffersForPixelSize:(struct CGSize)arg1 drawingScale:(double)arg2;
- (void)adjustedPixelSize:(struct CGSize *)arg1 drawingSize:(struct CGSize *)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 editable:(_Bool)arg2 pixelSize:(struct CGSize)arg3 drawingScale:(double)arg4 layerFixedPixelSize:(_Bool)arg5 drawingController:(id)arg6 selectionController:(id)arg7;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (CDStruct_f17e9403)drawingInputPoint:(struct CGPoint)arg1 forHIDEvent:(id)arg2 predicted:(_Bool)arg3;
- (void)drawingEndedForHIDPoint:(id)arg1;
- (void)drawingMovedForHIDPoint:(id)arg1;
- (void)drawingBeganForHIDPoint:(id)arg1;
- (void)simulateHIDPoints:(id)arg1;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (_Bool)accessibilityElementsHidden;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

