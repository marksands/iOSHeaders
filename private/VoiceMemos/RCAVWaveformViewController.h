//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "RCCaptureSessionObserver.h"
#import "RCPreviewControllerObserver.h"
#import "RCWaveformViewDelegate.h"

@class NSString, NSTimer, RCAVState, RCCaptureSession, RCCompositionController, RCLayoutMetrics, RCPreviewController, RCWaveformDataSource, RCWaveformViewController;

@interface RCAVWaveformViewController : UIViewController <RCWaveformViewDelegate, RCPreviewControllerObserver, RCCaptureSessionObserver>
{
    double _defaultVisibleDuration;
    long long _batchUpdatingDisplayableTimesCount;
    _Bool _needsUpdateDisplayableTime;
    _Bool _showingSelectionOverlayEnabled;
    _Bool _didJumpTime;
    RCPreviewController *_activePreviewController;
    RCCaptureSession *_activeCaptureSession;
    RCCompositionController *_activeCaptureCompositionController;
    NSTimer *_autoscrollPlaybackTimer;
    _Bool _currentTimeTracksCapturedEndPoint;
    _Bool _autocenterCurrentTimeIndicatorAlways;
    _Bool _clipsTimeMarkersToDuration;
    _Bool _userInteractionEnabled;
    _Bool _selectionOverlayVisible;
    _Bool _isEditMode;
    _Bool _isOverview;
    RCWaveformDataSource *_waveformDataSource;
    id <RCAVWaveformViewControllerDelegate> _delegate;
    RCWaveformViewController *_waveformViewController;
    RCAVState *_AVState;
    double _nextPreviewStartTime;
    double _currentTime;
    double _duration;
    RCLayoutMetrics *_layoutMetrics;
    double _maximumSelectionDuration;
    CDStruct_73a5d3ca _highlightTimeRange;
}

@property(nonatomic) _Bool isOverview; // @synthesize isOverview=_isOverview;
@property(nonatomic) _Bool isEditMode; // @synthesize isEditMode=_isEditMode;
@property(nonatomic) double maximumSelectionDuration; // @synthesize maximumSelectionDuration=_maximumSelectionDuration;
@property(readonly, nonatomic, getter=isSelectionOverlayVisible) _Bool selectionOverlayVisible; // @synthesize selectionOverlayVisible=_selectionOverlayVisible;
@property(nonatomic, getter=isUserInteractionEnabled) _Bool userInteractionEnabled; // @synthesize userInteractionEnabled=_userInteractionEnabled;
@property(nonatomic) _Bool clipsTimeMarkersToDuration; // @synthesize clipsTimeMarkersToDuration=_clipsTimeMarkersToDuration;
@property(nonatomic) _Bool autocenterCurrentTimeIndicatorAlways; // @synthesize autocenterCurrentTimeIndicatorAlways=_autocenterCurrentTimeIndicatorAlways;
@property(retain, nonatomic) RCLayoutMetrics *layoutMetrics; // @synthesize layoutMetrics=_layoutMetrics;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) _Bool currentTimeTracksCapturedEndPoint; // @synthesize currentTimeTracksCapturedEndPoint=_currentTimeTracksCapturedEndPoint;
@property(nonatomic) double currentTime; // @synthesize currentTime=_currentTime;
@property(nonatomic) CDStruct_73a5d3ca highlightTimeRange; // @synthesize highlightTimeRange=_highlightTimeRange;
@property(readonly, nonatomic) double nextPreviewStartTime; // @synthesize nextPreviewStartTime=_nextPreviewStartTime;
@property(readonly, nonatomic) RCAVState *AVState; // @synthesize AVState=_AVState;
@property(retain, nonatomic) RCPreviewController *activePreviewController; // @synthesize activePreviewController=_activePreviewController;
@property(retain, nonatomic) RCCaptureSession *activeCaptureSession; // @synthesize activeCaptureSession=_activeCaptureSession;
@property(retain, nonatomic) RCWaveformViewController *waveformViewController; // @synthesize waveformViewController=_waveformViewController;
@property(nonatomic) __weak id <RCAVWaveformViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) RCWaveformDataSource *waveformDataSource; // @synthesize waveformDataSource=_waveformDataSource;
- (void).cxx_destruct;
- (id)_selectionOverlay;
- (void)_endShowingSelectionOverlayWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_beginShowingSelectionOverlayAndEnableInsertMode:(_Bool)arg1;
- (void)_updateInterfaceForAVState;
- (unsigned long long)_currentTimeDisplayOptionsIgnoringSelectionOverlayState:(_Bool)arg1;
- (unsigned long long)_currentTimeDisplayOptions;
- (void)_setSelectionOverlayEnabled:(_Bool)arg1;
- (void)_updateDisplayableTimesWithBlock:(CDUnknownBlockType)arg1;
- (void)_didUpdateDisplayableTime;
- (void)_updateCurrentTimeForCapturedInput;
- (void)_setWaveformDataSource:(id)arg1 initialTime:(double)arg2;
- (void)captureSession:(id)arg1 didFinishWithSuccess:(_Bool)arg2;
- (void)captureSession:(id)arg1 rateDidChangeToRate:(float)arg2;
- (void)captureSession:(id)arg1 destinationFragmentDurationDidChangeToDuration:(double)arg2 usingDisplayLinkSmoothing:(_Bool)arg3;
- (void)previewController:(id)arg1 playbackTimeDidUpdateToCurrentTime:(double)arg2;
- (void)previewController:(id)arg1 playbackTimeDidUpdateToCurrentTime:(double)arg2 didJumpTime:(_Bool)arg3;
- (void)previewController:(id)arg1 playbackDidStopPlayingWithError:(id)arg2;
- (void)previewController:(id)arg1 playbackTimeDidJumpWithPreviousTime:(double)arg2;
- (void)triggerWaveformAutoScroll:(id)arg1;
- (void)previewController:(id)arg1 playbackDidBeginWithRate:(float)arg2;
- (void)waveformViewController:(id)arg1 didChangeToSelectedTimeRange:(CDStruct_73a5d3ca)arg2;
- (void)waveformViewControllerDidEndEditingSelectedTimeRange:(id)arg1;
- (void)waveformViewControllerWillBeginEditingSelectedTimeRange:(id)arg1;
- (void)waveformViewController:(id)arg1 didScrubToTime:(double)arg2 finished:(_Bool)arg3;
@property(readonly, nonatomic) CDStruct_73a5d3ca selectedTimeRange;
- (void)setSelectedTimeRange:(CDStruct_73a5d3ca)arg1 animationDuration:(double)arg2;
- (void)hidSelectionOverlayWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)showSelectionOverlayAndEnableInsertMode:(_Bool)arg1;
@property(readonly, nonatomic) double currentTimeIndicatorCoordinate;
@property(readonly, nonatomic) double waveformBottomLineInset;
- (struct CGRect)waveformRectForLayoutBounds:(struct CGRect)arg1;
- (struct CGRect)annotatedWaveformRectForLayoutBounds:(struct CGRect)arg1;
- (CDStruct_73a5d3ca)setHighlightTimeRange;
@property(nonatomic) CDStruct_73a5d3ca visibleTimeRange;
@property(readonly, nonatomic) CDStruct_73a5d3ca nextPreviewTimeRange;
- (void)setAVState:(id)arg1;
- (void)reloadWaveformDataSource:(id)arg1 initialTime:(double)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithWaveformDataSource:(id)arg1 isOverview:(_Bool)arg2 delegate:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

