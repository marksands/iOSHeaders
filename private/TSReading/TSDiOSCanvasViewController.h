//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <TSReading/TSDCanvasLayerHosting-Protocol.h>
#import <TSReading/TSDCanvasZoomTrackerDelegate-Protocol.h>
#import <TSReading/UIGestureRecognizerDelegate-Protocol.h>

@class CALayer, NSArray, NSMutableArray, NSSet, NSString, TSDAllTouchesDoneGestureRecognizer, TSDCanvasLayer, TSDCanvasSubviewsController, TSDCanvasView, TSDCanvasZoomPinchGestureRecognizer, TSDCanvasZoomTracker, TSDEditMenuTapGestureRecognizer, TSDGuidedPanController, TSDInteractiveCanvasController, TSDKnobDragGestureRecognizer, TSDMultiSelectGestureRecognizer, TSDNudgeGestureRecognizer, TSDPreventScrollGestureRecognizer, TSDRepDragGestureRecognizer, TSDRepRotateGestureRecognizer, UIPanGestureRecognizer, UIPinchGestureRecognizer, UITapGestureRecognizer, UIView;
@protocol TSDiOSCanvasViewControllerDelegate;

@interface TSDiOSCanvasViewController : UIViewController <TSDCanvasLayerHosting, TSDCanvasZoomTrackerDelegate, UIGestureRecognizerDelegate>
{
    TSDInteractiveCanvasController *mICC;
    id <TSDiOSCanvasViewControllerDelegate> mDelegate;
    _Bool mContextMenuMightBeDisplayed;
    UITapGestureRecognizer *mSingleTapGestureRecognizer;
    UITapGestureRecognizer *mDoubleTapGestureRecognizer;
    TSDEditMenuTapGestureRecognizer *mEditMenuTapGestureRecognizer;
    TSDKnobDragGestureRecognizer *mKnobDragGestureRecognizer;
    TSDMultiSelectGestureRecognizer *mMultiSelectGestureRecognizer;
    TSDRepDragGestureRecognizer *mRepDragGestureRecognizer;
    TSDRepRotateGestureRecognizer *mRepRotateGestureRecognizer;
    TSDCanvasZoomPinchGestureRecognizer *mZoomGestureRecognizer;
    TSDNudgeGestureRecognizer *mNudgeGestureRecognizer;
    TSDAllTouchesDoneGestureRecognizer *mAllTouchesDoneGestureRecognizer;
    TSDPreventScrollGestureRecognizer *mPreventScrollGestureRecognizer;
    UIPanGestureRecognizer *mGuidedPanGestureRecognizer;
    TSDGuidedPanController *mGuidedPanController;
    _Bool mHasBeenTornDown;
    _Bool mIsPopoverGestureInFlight;
    _Bool mInspectorModeEnabled;
    NSMutableArray *mInspectorGestureRecognizersToReenable;
    CDUnknownBlockType mInspectorSingleTapBlock;
    _Bool mCurrentlyScrolling;
    _Bool mRotating;
    TSDCanvasZoomTracker *mCanvasZoomTracker;
    struct CGPoint mLastZoomHUDLocation;
    _Bool _isRotating;
    TSDCanvasSubviewsController *mSubviewsController;
}

@property(readonly, retain, nonatomic) TSDCanvasSubviewsController *subviewsController; // @synthesize subviewsController=mSubviewsController;
@property(readonly, nonatomic) _Bool isRotating; // @synthesize isRotating=_isRotating;
@property(nonatomic) _Bool contextMenuMightBeDisplayed; // @synthesize contextMenuMightBeDisplayed=mContextMenuMightBeDisplayed;
@property(readonly, nonatomic) _Bool isPopoverGestureInFlight; // @synthesize isPopoverGestureInFlight=mIsPopoverGestureInFlight;
@property(readonly, retain, nonatomic) UIPanGestureRecognizer *guidedPanGestureRecognizer; // @synthesize guidedPanGestureRecognizer=mGuidedPanGestureRecognizer;
@property(readonly, retain, nonatomic) TSDPreventScrollGestureRecognizer *preventScrollGestureRecognizer; // @synthesize preventScrollGestureRecognizer=mPreventScrollGestureRecognizer;
@property(retain, nonatomic) TSDAllTouchesDoneGestureRecognizer *allTouchesDoneGestureRecognizer; // @synthesize allTouchesDoneGestureRecognizer=mAllTouchesDoneGestureRecognizer;
@property(retain, nonatomic) TSDNudgeGestureRecognizer *nudgeGestureRecognizer; // @synthesize nudgeGestureRecognizer=mNudgeGestureRecognizer;
@property(retain, nonatomic) UIPinchGestureRecognizer *zoomGestureRecognizer; // @synthesize zoomGestureRecognizer=mZoomGestureRecognizer;
@property(retain, nonatomic) TSDRepRotateGestureRecognizer *repRotateGestureRecognizer; // @synthesize repRotateGestureRecognizer=mRepRotateGestureRecognizer;
@property(retain, nonatomic) TSDRepDragGestureRecognizer *repDragGestureRecognizer; // @synthesize repDragGestureRecognizer=mRepDragGestureRecognizer;
@property(retain, nonatomic) TSDMultiSelectGestureRecognizer *multiSelectGestureRecognizer; // @synthesize multiSelectGestureRecognizer=mMultiSelectGestureRecognizer;
@property(retain, nonatomic) TSDKnobDragGestureRecognizer *knobDragGestureRecognizer; // @synthesize knobDragGestureRecognizer=mKnobDragGestureRecognizer;
@property(retain, nonatomic) TSDEditMenuTapGestureRecognizer *editMenuTapGestureRecognizer; // @synthesize editMenuTapGestureRecognizer=mEditMenuTapGestureRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *doubleTapGestureRecognizer; // @synthesize doubleTapGestureRecognizer=mDoubleTapGestureRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *singleTapGestureRecognizer; // @synthesize singleTapGestureRecognizer=mSingleTapGestureRecognizer;
@property(nonatomic) id <TSDiOSCanvasViewControllerDelegate> delegate; // @synthesize delegate=mDelegate;
@property(nonatomic) TSDInteractiveCanvasController *interactiveCanvasController; // @synthesize interactiveCanvasController=mICC;
- (id)topLevelReps;
@property(readonly, retain, nonatomic) UIViewController *containerViewController;
@property(readonly, retain, nonatomic) UIView *containerView;
@property(readonly, retain, nonatomic) CALayer *containerLayer;
@property(readonly, retain, nonatomic) CALayer *topLevelTilingLayer;
- (Class)audioInspectorPaneClass;
- (Class)movieInspectorPaneClass;
- (id)newAudioPlaybackHUDWithFrame:(struct CGRect)arg1 audioRep:(id)arg2 delegate:(id)arg3;
- (void)hideMoviePlaybackHUD;
- (void)showMoviePlaybackHUD:(id)arg1 withFrame:(struct CGRect)arg2;
- (id)newMoviePlaybackHUDWithFrame:(struct CGRect)arg1 playerController:(id)arg2 movieRep:(id)arg3;
- (void)presentMovieCompatibilityAlertForUnplayableMoviePasteboardDrawableProviders:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)presentMovieCompatibilityAlertForUnplayableMovieURLs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)endModalOperation;
- (void)beginModalOperationWithLocalizedMessage:(id)arg1 progress:(id)arg2 cancelHandler:(CDUnknownBlockType)arg3;
- (void)presentErrors:(id)arg1 withLocalizedDescription:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)p_didPresentErrorWithRecovery:(_Bool)arg1 completionHandler:(void *)arg2;
- (void)presentError:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)p_willPresentError:(id)arg1;
- (void)p_editMenuDidHide:(id)arg1;
- (void)p_guidedPanWithGesture:(id)arg1;
@property(readonly, nonatomic) _Bool isDraggingViaGuidedPan;
- (void)canvasZoomTrackerDidFinish:(id)arg1;
- (void)canvasZoomTrackerDidEndFinalZoomAnimation:(id)arg1;
- (void)canvasZoomTrackerWillBeginFinalZoomAnimation:(id)arg1;
- (void)canvasZoomTrackerDidEndViewScaleFeedback:(id)arg1;
- (void)canvasZoomTracker:(id)arg1 willUpdateViewScaleFeedbackWithScale:(double)arg2;
- (void)canvasZoomTracker:(id)arg1 willBeginViewScaleFeedbackWithFastPinch:(_Bool)arg2;
- (void)p_zoomWithGesture:(id)arg1;
- (void)p_handleSingleTapGesture:(id)arg1;
- (void)addInspectorPanZoomModeGRsToArray:(id)arg1;
- (void)endInspectorPanZoomMode;
- (void)beginInspectorPanZoomModeWithSingleTapBlock:(CDUnknownBlockType)arg1;
- (void)forceStopScrolling;
- (void)stopScrolling;
- (void)unlock:(id)arg1;
- (void)cut:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (id)extraMenuItems;
- (id)itemsToAddToEditMenuForRep:(id)arg1;
- (void)hideEditMenu;
- (void)toggleEditMenuForCurrentSelection;
- (void)showEditMenu:(id)arg1;
- (void)p_buildMenuItems:(id)arg1 forSelection:(id)arg2;
- (void)showEditMenuForSelection:(id)arg1;
- (struct CGRect)targetRectForEditMenu:(id)arg1;
- (id)viewForGestureRecognizer:(id)arg1;
- (_Bool)repDragGestureRecognizer:(id)arg1 shouldBeginTapHoldTrackingAtScaledPoint:(struct CGPoint)arg2;
- (_Bool)allowTouchOutsideCanvasView:(id)arg1 forGesture:(id)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (_Bool)shouldIgnoreTextGestures;
- (_Bool)shouldSelectAndShowEditMenuOnFirstTapForRep:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)p_handleTapForEditMenu:(id)arg1;
- (void)p_allTouchesDone:(id)arg1;
- (_Bool)handleDoubleTapAtPoint:(struct CGPoint)arg1 withRecognizer:(id)arg2;
- (void)handleDoubleTap:(id)arg1;
- (_Bool)handleSingleTapAtPoint:(struct CGPoint)arg1 withRecognizer:(id)arg2;
- (void)i_updateZoomGestureRecognizer;
- (void)resetGesturesForContextSwitch;
- (void)setUpGestureRecognizers;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
@property(readonly, nonatomic) NSSet *panGestureRecognizers;
@property(readonly, nonatomic) NSArray *commonGestureRecognizers;
- (id)hitKnobWithTouch:(id)arg1 returningRep:(id *)arg2;
- (id)hitRepWithTouch:(id)arg1;
- (void)canvasDidUpdateRepsFromLayouts;
- (_Bool)isInFocusedContainer;
- (id)viewController;
- (id)asiOSCVC;
@property(readonly, nonatomic) CALayer *clippingLayer;
@property(readonly, nonatomic) CALayer *layer;
@property(readonly, nonatomic) TSDCanvasView *canvasView;
@property(readonly, nonatomic) TSDCanvasLayer *canvasLayer;
- (_Bool)becomeFirstResponder;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)p_updateWideGamut;
- (_Bool)p_shouldUseWideGamut;
- (void)viewDidLoad;
- (void)loadView;
- (void)teardown;
- (void)dealloc;
- (void)forwardInvocation:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
@property(readonly, nonatomic) CDStruct_499be82c centerPlusMovementContentPlacement;
@property(readonly, nonatomic) CDStruct_499be82c touchContentPlacement;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

