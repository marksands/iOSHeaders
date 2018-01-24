//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class AVMicaPackage, AVUserInteractionObserverGestureRecognizer, NSNumber, NSString, NSTimer, UIViewPropertyAnimator;

@interface AVButton : UIButton
{
    _Bool _wasLongPressed;
    _Bool _treatsForcePressAsLongPress;
    _Bool _multipleTouchesEndsTracking;
    _Bool _disablesHighlightWhenLongPressed;
    _Bool _wasForcePressTriggered;
    _Bool _collapsed;
    _Bool _included;
    _Bool _hasAlternateAppearance;
    _Bool _hasFullScreenAppearance;
    double _forceThreshold;
    double _force;
    double _maximumForceSinceTrackingBegan;
    NSString *_imageName;
    NSString *_fullScreenImageName;
    NSString *_inlineImageName;
    NSString *_fullScreenAlternateImageName;
    NSString *_inlineAlternateImageName;
    AVMicaPackage *_micaPackage;
    UIViewPropertyAnimator *_highlightAnimator;
    double _trackingStartTime;
    double _horizontalTranslationOfLongPress;
    NSNumber *_previousHorizontalPositionOfLongPress;
    NSTimer *_longPressTimer;
    AVUserInteractionObserverGestureRecognizer *_userInteractionGestureRecognizer;
    struct CGSize _extrinsicContentSize;
    struct NSDirectionalEdgeInsets _hitRectInsets;
}

+ (id)buttonWithAccessibilityIdentifier:(id)arg1;
@property(nonatomic) _Bool hasFullScreenAppearance; // @synthesize hasFullScreenAppearance=_hasFullScreenAppearance;
@property(nonatomic) _Bool hasAlternateAppearance; // @synthesize hasAlternateAppearance=_hasAlternateAppearance;
@property(nonatomic, getter=isIncluded) _Bool included; // @synthesize included=_included;
@property(nonatomic, getter=isCollapsed) _Bool collapsed; // @synthesize collapsed=_collapsed;
@property(nonatomic) struct CGSize extrinsicContentSize; // @synthesize extrinsicContentSize=_extrinsicContentSize;
@property(retain, nonatomic) AVUserInteractionObserverGestureRecognizer *userInteractionGestureRecognizer; // @synthesize userInteractionGestureRecognizer=_userInteractionGestureRecognizer;
@property(nonatomic) __weak NSTimer *longPressTimer; // @synthesize longPressTimer=_longPressTimer;
@property(retain, nonatomic) NSNumber *previousHorizontalPositionOfLongPress; // @synthesize previousHorizontalPositionOfLongPress=_previousHorizontalPositionOfLongPress;
@property(nonatomic) double horizontalTranslationOfLongPress; // @synthesize horizontalTranslationOfLongPress=_horizontalTranslationOfLongPress;
@property(nonatomic) _Bool wasForcePressTriggered; // @synthesize wasForcePressTriggered=_wasForcePressTriggered;
@property(nonatomic) double trackingStartTime; // @synthesize trackingStartTime=_trackingStartTime;
@property(nonatomic) __weak UIViewPropertyAnimator *highlightAnimator; // @synthesize highlightAnimator=_highlightAnimator;
@property(nonatomic) struct NSDirectionalEdgeInsets hitRectInsets; // @synthesize hitRectInsets=_hitRectInsets;
@property(nonatomic) _Bool disablesHighlightWhenLongPressed; // @synthesize disablesHighlightWhenLongPressed=_disablesHighlightWhenLongPressed;
@property(retain, nonatomic) AVMicaPackage *micaPackage; // @synthesize micaPackage=_micaPackage;
@property(copy, nonatomic) NSString *inlineAlternateImageName; // @synthesize inlineAlternateImageName=_inlineAlternateImageName;
@property(copy, nonatomic) NSString *fullScreenAlternateImageName; // @synthesize fullScreenAlternateImageName=_fullScreenAlternateImageName;
@property(copy, nonatomic) NSString *inlineImageName; // @synthesize inlineImageName=_inlineImageName;
@property(copy, nonatomic) NSString *fullScreenImageName; // @synthesize fullScreenImageName=_fullScreenImageName;
@property(copy, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(nonatomic) _Bool multipleTouchesEndsTracking; // @synthesize multipleTouchesEndsTracking=_multipleTouchesEndsTracking;
@property(nonatomic) double maximumForceSinceTrackingBegan; // @synthesize maximumForceSinceTrackingBegan=_maximumForceSinceTrackingBegan;
@property(nonatomic) double force; // @synthesize force=_force;
@property(nonatomic) double forceThreshold; // @synthesize forceThreshold=_forceThreshold;
@property(nonatomic) _Bool treatsForcePressAsLongPress; // @synthesize treatsForcePressAsLongPress=_treatsForcePressAsLongPress;
@property(nonatomic) _Bool wasLongPressed; // @synthesize wasLongPressed=_wasLongPressed;
- (void).cxx_destruct;
- (id)_preferredImageName;
- (void)_updateImageIfNeeded;
- (void)_resetTrackedState;
- (void)_handleUserInteractionGestureRecognizer:(id)arg1;
- (struct CGSize)_preferredLayoutSize;
- (struct CGSize)intrinsicContentSize;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGRect)hitRect;
- (void)setBounds:(struct CGRect)arg1;
- (void)setImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)setHighlighted:(_Bool)arg1;
- (void)setEnabled:(_Bool)arg1;
- (void)willMoveToWindow:(id)arg1;
@property(readonly, nonatomic, getter=isCollapsedOrExcluded) _Bool collapsedOrExcluded;

@end

