//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CAMPanoramaArrowView, CAMPanoramaLabel, CAMPanoramaLevelView, CAMPanoramaPaintingStatus, CAMPanoramaPreviewView, NSString;

@interface CAMPanoramaView : UIView
{
    _Bool _painting;
    _Bool __currentlyShowingMoveInstructions;
    _Bool __currentlyMovingTooFast;
    long long _direction;
    id <CAMPanoramaViewDelegate> _delegate;
    CAMPanoramaPreviewView *_previewView;
    long long _layoutStyle;
    double _currentOrientedAcceleration;
    UIView *__stripBackgroundView;
    UIView *__stripContainerView;
    UIView *__maskingView;
    CAMPanoramaArrowView *__arrowView;
    CAMPanoramaLevelView *__levelView;
    CAMPanoramaLabel *__instructionLabel;
    NSString *__speedString;
    NSString *__moveUpString;
    NSString *__moveDownString;
    NSString *__arrowString;
    NSString *__instructionString;
    CAMPanoramaPaintingStatus *__currentPaintingStatus;
    double __initialPaintingAcceleration;
    double __currentPaintingAcceleration;
    double *__previousSpeeds;
    double __currentAverageSpeed;
    unsigned long long __arrowUpdateFrame;
    struct CGPoint __initialArrowCenter;
    struct CGRect __lastLayoutBounds;
}

+ (Class)layerClass;
@property(nonatomic, setter=_setArrowUpdateFrame:) unsigned long long _arrowUpdateFrame; // @synthesize _arrowUpdateFrame=__arrowUpdateFrame;
@property(nonatomic, setter=_setCurrentAverageSpeed:) double _currentAverageSpeed; // @synthesize _currentAverageSpeed=__currentAverageSpeed;
@property(nonatomic, getter=_isCurrentlyMovingTooFast, setter=_setCurrentlyMovingTooFast:) _Bool _currentlyMovingTooFast; // @synthesize _currentlyMovingTooFast=__currentlyMovingTooFast;
@property(readonly, nonatomic) double *_previousSpeeds; // @synthesize _previousSpeeds=__previousSpeeds;
@property(nonatomic, getter=_isCurrentlyShowingMoveInstructions, setter=_setCurrentlyShowingMoveInstructions:) _Bool _currentlyShowingMoveInstructions; // @synthesize _currentlyShowingMoveInstructions=__currentlyShowingMoveInstructions;
@property(nonatomic, setter=_setCurrentPaintingAcceleration:) double _currentPaintingAcceleration; // @synthesize _currentPaintingAcceleration=__currentPaintingAcceleration;
@property(nonatomic, setter=_setInitialPaintingAcceleration:) double _initialPaintingAcceleration; // @synthesize _initialPaintingAcceleration=__initialPaintingAcceleration;
@property(retain, nonatomic, setter=_setCurrentPaintingStatus:) CAMPanoramaPaintingStatus *_currentPaintingStatus; // @synthesize _currentPaintingStatus=__currentPaintingStatus;
@property(nonatomic, setter=_setLastLayoutBounds:) struct CGRect _lastLayoutBounds; // @synthesize _lastLayoutBounds=__lastLayoutBounds;
@property(nonatomic, setter=_setInitialArrowCenter:) struct CGPoint _initialArrowCenter; // @synthesize _initialArrowCenter=__initialArrowCenter;
@property(readonly, copy, nonatomic) NSString *_instructionString; // @synthesize _instructionString=__instructionString;
@property(readonly, copy, nonatomic) NSString *_arrowString; // @synthesize _arrowString=__arrowString;
@property(readonly, copy, nonatomic) NSString *_moveDownString; // @synthesize _moveDownString=__moveDownString;
@property(readonly, copy, nonatomic) NSString *_moveUpString; // @synthesize _moveUpString=__moveUpString;
@property(readonly, copy, nonatomic) NSString *_speedString; // @synthesize _speedString=__speedString;
@property(readonly, nonatomic) CAMPanoramaLabel *_instructionLabel; // @synthesize _instructionLabel=__instructionLabel;
@property(readonly, nonatomic) CAMPanoramaLevelView *_levelView; // @synthesize _levelView=__levelView;
@property(readonly, nonatomic) CAMPanoramaArrowView *_arrowView; // @synthesize _arrowView=__arrowView;
@property(readonly, nonatomic) UIView *_maskingView; // @synthesize _maskingView=__maskingView;
@property(readonly, nonatomic) UIView *_stripContainerView; // @synthesize _stripContainerView=__stripContainerView;
@property(readonly, nonatomic) UIView *_stripBackgroundView; // @synthesize _stripBackgroundView=__stripBackgroundView;
@property(nonatomic, setter=_setCurrentOrientedAcceleration:) double currentOrientedAcceleration; // @synthesize currentOrientedAcceleration=_currentOrientedAcceleration;
@property(nonatomic, getter=isPainting, setter=_setPainting:) _Bool painting; // @synthesize painting=_painting;
@property(nonatomic) long long layoutStyle; // @synthesize layoutStyle=_layoutStyle;
@property(readonly, nonatomic) CAMPanoramaPreviewView *previewView; // @synthesize previewView=_previewView;
@property(nonatomic) __weak id <CAMPanoramaViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long direction; // @synthesize direction=_direction;
- (void).cxx_destruct;
- (void)updateToContentSize:(id)arg1;
- (void)_showArrowInstructions;
- (void)_hideArrowInstructionsAfterDelay;
- (void)_showSpeedInstructions;
- (void)_hideSpeedInstructionsAfterDelay;
- (void)_showMoveUpInstructionsAfterDelay;
- (void)_showMoveDownInstructionsAfterDelay;
- (void)_cancelDelayedMoveInstructions;
- (void)_showMoveUpInstructions;
- (void)_showMoveDownInstructions;
- (void)_updateInstructionLabelText:(id)arg1;
- (void)_hideInstructionLabel;
- (void)_resetPaintingUIAnimated:(_Bool)arg1;
- (void)finishedProcessingPanorama;
- (void)startProcessingPanorama;
- (void)setDirection:(long long)arg1 animated:(_Bool)arg2;
- (void)stopPainting;
- (void)updateOrientedAcceleration:(double)arg1;
- (void)updatePaintingWithStatus:(id)arg1;
- (void)startPainting;
- (void)setTransform:(struct CGAffineTransform)arg1;
- (void)layoutSubviews;
@property(readonly, nonatomic) UIView *instructionView;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithPanoramaPreviewView:(id)arg1 layoutStyle:(long long)arg2;

@end

