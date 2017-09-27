//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "EKICSPreviewControllerDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UIDragInteractionDelegate.h"
#import "UIDropInteractionDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class EKCalendarDate, EKDayOccurrenceView, EKEvent, EKICSPreviewController, EKUIRecurrenceAlertController, NSString, NSTimer, UIDragInteraction, UIDropInteraction, UILongPressGestureRecognizer, UITapGestureRecognizer, _UIFeedbackDragSnappingBehavior;

@interface EKEventGestureController : NSObject <UIDropInteractionDelegate, UIDragInteractionDelegate, EKICSPreviewControllerDelegate, UIGestureRecognizerDelegate, UIAlertViewDelegate>
{
    UILongPressGestureRecognizer *_draggingGestureRecognizer;
    UITapGestureRecognizer *_tapGestureRecognizer;
    int _currentDraggingState;
    int _pendingDraggingState;
    int _queuedDraggingState;
    _Bool _dragCompletionPending;
    _Bool _dropAnimationInProgress;
    _Bool _waitingForDragToInitialize;
    _Bool _needToSetSystemDragPreview;
    _Bool _dragInitiationLocked;
    EKDayOccurrenceView *_draggingView;
    EKEvent *_event;
    int _currentDragType;
    struct CGPoint _firstTouchPoint;
    double _firstTouchTime;
    struct CGPoint _latestTouchPoint;
    struct CGPoint _previousTouchPoint;
    double _previousTouchTime;
    double _previousTouchVelocity;
    struct CGPoint _touchOffset;
    long long _touchOffsetDays;
    double _dateAtFirstTouchPoint;
    _Bool _isNewEvent;
    _Bool _isInCancelRegion;
    _Bool _isMultiDayTimedEvent;
    EKCalendarDate *_currentDay;
    _Bool _horizontalDragLocked;
    _Bool _dragLockDisabled;
    _Bool _isDragging;
    NSTimer *_scrollTimer;
    double _timeSinceEnteredPageMargin;
    double _firstContactOfDraggingViewTop;
    _Bool _hasStartedScrolling;
    long long _consecutivePageTurnCount;
    _Bool _forcedStart;
    _Bool _needsCommit;
    CDUnknownBlockType _alertSheetCompletionHandler;
    EKICSPreviewController *_currentICSPreviewController;
    EKUIRecurrenceAlertController *_recurrenceAlertController;
    _UIFeedbackDragSnappingBehavior *_dragSnappingFeedback;
    UIDropInteraction *_dropInteraction;
    UIDragInteraction *_dragInteraction;
    _Bool _usesXDragOffsetInCancelRegion;
    _Bool _usesHorizontalDragLocking;
    _Bool _commitBlocked;
    id <EKEventGestureControllerUntimedDelegate> _untimedDelegate;
    id <EKEventGestureControllerDelegate> _delegate;
    NSString *_sessionIdentifierForDebug;
    EKDayOccurrenceView *_draggingViewSource;
}

+ (id)_captureImageOfOccurrenceView:(id)arg1 withFrameOfOpaqueContent:(struct CGRect)arg2;
@property(retain, nonatomic) EKDayOccurrenceView *draggingViewSource; // @synthesize draggingViewSource=_draggingViewSource;
@property(retain, nonatomic) NSString *sessionIdentifierForDebug; // @synthesize sessionIdentifierForDebug=_sessionIdentifierForDebug;
@property(readonly, nonatomic) EKDayOccurrenceView *draggingView; // @synthesize draggingView=_draggingView;
@property(readonly, nonatomic) struct CGPoint touchOffset; // @synthesize touchOffset=_touchOffset;
@property(readonly, nonatomic) struct CGPoint latestTouchPoint; // @synthesize latestTouchPoint=_latestTouchPoint;
@property(readonly, nonatomic) struct CGPoint firstTouchPoint; // @synthesize firstTouchPoint=_firstTouchPoint;
@property(retain, nonatomic) EKEvent *event; // @synthesize event=_event;
@property(nonatomic) _Bool commitBlocked; // @synthesize commitBlocked=_commitBlocked;
@property(nonatomic) _Bool usesHorizontalDragLocking; // @synthesize usesHorizontalDragLocking=_usesHorizontalDragLocking;
@property(nonatomic) _Bool usesXDragOffsetInCancelRegion; // @synthesize usesXDragOffsetInCancelRegion=_usesXDragOffsetInCancelRegion;
@property(nonatomic) __weak id <EKEventGestureControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <EKEventGestureControllerUntimedDelegate> untimedDelegate; // @synthesize untimedDelegate=_untimedDelegate;
- (void).cxx_destruct;
- (double)_Debug_HoursSinceStartOfDay:(double)arg1;
- (_Bool)_isPointInCancelRegion:(struct CGPoint)arg1;
- (struct CGPoint)_computeOriginAtTouchPoint:(struct CGPoint)arg1 forDate:(double)arg2 isAllDay:(_Bool)arg3 allowXOffset:(_Bool)arg4 allowFloorAtRegionBottom:(_Bool)arg5;
- (double)_computeHeightForOccurrenceViewOfDuration:(double)arg1 allDay:(_Bool)arg2;
- (double)_computeWidthForOccurrenceView;
- (void)_updateHorizontalDragLockForPoint:(struct CGPoint)arg1;
- (double)_capOccurrenceViewYOrigin:(double)arg1;
- (double)_alignedYOriginForAllDayOccurrence:(id)arg1 atPoint:(struct CGPoint)arg2 floorAtAllDayRegionBottom:(_Bool)arg3;
- (_Bool)_flingOrCancelDraggingViewIfNeeded;
- (void)_cancel;
- (void)_commit;
- (void)_update;
- (double)_minimumDuration;
- (void)_setUpAfterForcedStartFromPoint:(struct CGPoint)arg1;
- (void)_setTouchOffsetsFromPoint:(struct CGPoint)arg1 fixedToCenter:(_Bool)arg2;
- (void)_animateInNewEvent;
- (id)_createTemporaryView:(id)arg1 animated:(_Bool)arg2;
- (id)originalStartDateForEvent:(id)arg1 includingTravel:(_Bool)arg2;
- (void)dragInteraction:(id)arg1 session:(id)arg2 didEndWithOperation:(unsigned long long)arg3;
- (void)dragInteraction:(id)arg1 session:(id)arg2 willEndWithOperation:(unsigned long long)arg3;
- (_Bool)dragInteraction:(id)arg1 prefersFullSizePreviewsForSession:(id)arg2;
- (_Bool)dragInteraction:(id)arg1 sessionIsRestrictedToDraggingApplication:(id)arg2;
- (_Bool)dragInteraction:(id)arg1 sessionAllowsMoveOperation:(id)arg2;
- (void)dragInteraction:(id)arg1 sessionWillBegin:(id)arg2;
- (void)_dragInteractionDidCancelLiftWithoutDragging:(id)arg1;
- (id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3;
- (id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2;
- (id)_eventToUseAtInteractionStart:(struct CGPoint)arg1;
- (_Bool)_isTouchFromDragSessionInResizeHandles:(id)arg1;
- (unsigned long long)numberOfDragSourcesForView:(id)arg1;
- (id)_findLocalDragItemInSession:(id)arg1;
- (id)_clippingPathForDraggingView;
- (id)_captureImageOfDraggingView;
- (void)_setToLocalDraggingImageForDrag:(id)arg1;
- (void)_setLocalDraggingViewHidden:(_Bool)arg1;
- (void)_setToSystemDraggingImageForDrag:(id)arg1;
- (void)_enableSystemPreviewForDrag:(id)arg1;
- (void)_disableSystemPreviewForDrag:(id)arg1;
- (void)dropInteraction:(id)arg1 sessionDidEnd:(id)arg2;
- (struct CGPoint)_estimateFinalDropOriginForTimedDelegate;
- (id)dropInteraction:(id)arg1 previewForDroppingItem:(id)arg2 withDefault:(id)arg3;
- (void)dropInteraction:(id)arg1 item:(id)arg2 willAnimateDropWithAnimator:(id)arg3;
- (void)dropInteraction:(id)arg1 concludeDrop:(id)arg2;
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidExit:(id)arg2;
- (id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidEnter:(id)arg2;
- (_Bool)dropInteraction:(id)arg1 canHandleSession:(id)arg2;
- (void)_dismissCurrentICSPreviewControllerAnimated:(_Bool)arg1;
- (void)_icsPreviewControllerCancelButtonPressed;
- (void)icsPreviewController:(id)arg1 importDidImportEvents:(id)arg2;
- (void)icsPreviewControllerImportDidFail:(id)arg1;
- (void)icsPreviewControllerWantsDismissal:(id)arg1;
- (void)_presentICSPreviewControllerIfNeeded;
- (void)_handleImportingICSData:(id)arg1 intoEventStore:(id)arg2;
- (void)_handleShowingEventWithUniqueId:(id)arg1 date:(id)arg2 eventStore:(id)arg3;
- (void)_setupEvent:(id)arg1 withImportData:(id)arg2;
- (_Bool)_dropSessionRequiresExternalDataExtraction:(id)arg1;
- (unsigned long long)_dropOperationGivenDropSession:(id)arg1;
- (id)_getEventUsingDropSession:(id)arg1;
- (id)_acceptedExternalTypes;
- (id)_acceptedTypes;
- (void)_updateFlingToCancelParameters;
- (id)_viewForTracking;
- (void)_dragFailedToStart;
- (void)_returnDraggingViewToLastCommittedPositionFromTouchPoint:(struct CGPoint)arg1;
- (void)_writeDraggingChangesToOccurrenceWithTouchPoint:(struct CGPoint)arg1;
- (void)_resumePreviousDrag;
- (void)_suspendCurrentDrag;
- (_Bool)__timedDelegateBeginEditingSessionAtPoint:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)canProposeNewTime:(id)arg1;
- (_Bool)_beginEditingSessionAtPoint:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_createAndSetUpDraggingViewWithTouchPoint:(struct CGPoint)arg1 event:(id)arg2 ignoreOffsets:(_Bool)arg3;
- (void)_adjustNewEventDates:(id)arg1 withPoint:(struct CGPoint)arg2;
- (id)_createNewEventIfNeededAtPoint:(struct CGPoint)arg1;
- (void)_cleanUpAllStateWithTouchPoint:(struct CGPoint)arg1 commit:(_Bool)arg2;
- (void)_setUpInitialTouchPointsWithPoint:(struct CGPoint)arg1;
- (_Bool)_beginNewDragFromOffStateWithPoint:(struct CGPoint)arg1;
- (void)_manageDraggingViewInteractivityForStateChangeFrom:(int)arg1 to:(int)arg2;
- (void)didCrossDragBoundary:(int)arg1;
- (void)_manageFeedbackForStateChangeFrom:(int)arg1 to:(int)arg2;
- (id)_debugStringForDraggingState:(int)arg1;
- (int)_draggingState;
- (_Bool)_setDraggingState:(int)arg1 withPoint:(struct CGPoint)arg2 event:(id)arg3;
- (void)_scrollTimerFired:(id)arg1;
- (void)_removeScrollTimer;
- (void)_installScrollTimer;
- (void)_commitUntimed;
- (void)_handleLongPressResponseForOldAPI:(id)arg1;
- (_Bool)_shouldUseSystemAPIForDrag;
- (_Bool)_useNewDragAndDropAPI;
- (void)_longPress:(id)arg1;
- (void)_tapGesture:(id)arg1;
- (void)_cleanUpForcedStart;
- (void)endForcedStart;
- (void)forceStartWithOccurrence:(id)arg1 shouldUpdateViewSource:(_Bool)arg2 shouldUpdateOrigin:(_Bool)arg3;
- (void)updateDraggingOccurrenceFrameFromSource;
- (void)updateDraggingOccurrenceOrigin;
@property(readonly, nonatomic) _Bool dragGestureInProgress;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)promptUserForProposeNewTime:(id)arg1 forEvent:(id)arg2 whenFinished:(CDUnknownBlockType)arg3;
- (void)promptUserForRecurrenceActionOnOccurrence:(id)arg1 whenFinished:(CDUnknownBlockType)arg2;
- (void)removeDraggedOccurrence;
- (void)updateDraggingOccurrenceFrame;
- (struct CGRect)_calculateFrameForDraggingViewIncludingTravelTime:(_Bool)arg1;
- (void)updateDraggingOccurrenceForced:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateDraggingOccurrence;
- (void)invalidate;
- (void)dealloc;
- (id)initWithView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

