//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKitCore/UIControl.h>

#import "NSCoding.h"

@class NSArray, UIColor, UIImage, UIImageView, UIView, _UIEdgeFeedbackGenerator, _UIModulationFeedbackGenerator;

@interface UISlider : UIControl <NSCoding>
{
    float _value;
    float _minValue;
    float _maxValue;
    double _alpha;
    struct __CFDictionary *_contentLookup;
    UIImageView *_minValueImageView;
    UIImageView *_maxValueImageView;
    UIImageView *_thumbView;
    UIImageView *_minTrackView;
    UIImageView *_maxTrackView;
    UIView *_maxTrackClipView;
    struct {
        unsigned int continuous:1;
        unsigned int animating:1;
        unsigned int preparingToAnimate:1;
        unsigned int showValue:1;
        unsigned int trackEnabled:1;
        unsigned int creatingSnapshot:1;
        unsigned int thumbDisabled:1;
        unsigned int minTrackHidden:1;
    } _sliderFlags;
    double _hitOffset;
    UIColor *_minTintColor;
    UIColor *_maxTintColor;
    UIColor *_thumbTintColor;
    UIView *_thumbViewNeue;
    _Bool _useLookNeue;
    NSArray *_trackColors;
    _Bool _trackIsArtworkBased;
    _Bool _thumbIsArtworkBased;
    _Bool _maxColorIsValid;
    _UIEdgeFeedbackGenerator *_edgeFeedbackGenerator;
    _UIModulationFeedbackGenerator *_modulationFeedbackGenerator;
    UIImageView *_innerThumbView;
}

+ (_Bool)_allowActionsToQueue;
@property(retain, nonatomic) UIColor *thumbTintColor; // @synthesize thumbTintColor=_thumbTintColor;
@property(retain, nonatomic) UIColor *maximumTrackTintColor; // @synthesize maximumTrackTintColor=_maxTintColor;
@property(retain, nonatomic) UIColor *minimumTrackTintColor; // @synthesize minimumTrackTintColor=_minTintColor;
- (void).cxx_destruct;
- (_Bool)cancelTouchTracking;
- (void)_controlTouchEnded:(id)arg1 withEvent:(id)arg2;
- (void)_controlTouchMoved:(id)arg1 withEvent:(id)arg2;
- (void)_controlTouchBegan:(id)arg1 withEvent:(id)arg2;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)cancelMouseTracking;
- (void)_sendDelayedActions;
- (void)_sliderAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)_sliderAnimationWillStart:(id)arg1 context:(id)arg2;
- (unsigned long long)_controlEventsForActionTriggered;
@property(nonatomic) float maximumValue; // @dynamic maximumValue;
@property(nonatomic) float minimumValue; // @dynamic minimumValue;
- (void)_setValue:(float)arg1 andSendAction:(_Bool)arg2;
- (void)_setValue:(float)arg1 minValue:(float)arg2 maxValue:(float)arg3 andSendAction:(_Bool)arg4;
- (void)setValue:(float)arg1 animated:(_Bool)arg2;
@property(nonatomic) float value; // @dynamic value;
- (void)setAlpha:(double)arg1;
@property(nonatomic, getter=isContinuous) _Bool continuous;
- (void)setSelected:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setEnabled:(_Bool)arg1;
- (void)_updateAppearanceForEnabled:(_Bool)arg1;
- (void)_layoutSubviewsForBoundsChange:(_Bool)arg1;
- (void)_updateMaxTrackColorForInitialization:(_Bool)arg1;
- (void)layoutSubviews;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (struct UIEdgeInsets)alignmentRectInsets;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;
- (_Bool)_contentHuggingDefault_isUsuallyFixedHeight;
- (struct CGRect)thumbRectForBounds:(struct CGRect)arg1 trackRect:(struct CGRect)arg2 value:(float)arg3;
- (struct CGRect)trackRectForBounds:(struct CGRect)arg1;
- (struct CGRect)maximumValueImageRectForBounds:(struct CGRect)arg1;
- (struct CGRect)minimumValueImageRectForBounds:(struct CGRect)arg1;
- (void)tintColorDidChange;
@property(retain, nonatomic) UIImage *maximumValueImage;
@property(retain, nonatomic) UIImage *minimumValueImage;
@property(readonly, nonatomic) UIImage *currentMaximumTrackImage;
@property(readonly, nonatomic) UIImage *currentMinimumTrackImage;
@property(readonly, nonatomic) UIImage *currentThumbImage;
- (id)maximumTrackImageForState:(unsigned long long)arg1;
- (id)minimumTrackImageForState:(unsigned long long)arg1;
- (id)thumbImageForState:(unsigned long long)arg1;
- (void)setMaximumTrackImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setMinimumTrackImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setThumbImage:(id)arg1 forState:(unsigned long long)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)description;
- (void)dealloc;
- (void)_rebuildControlThumb:(_Bool)arg1 track:(_Bool)arg2;
- (void)_buildTrackArtwork;
- (double)_cornerRadiusForRect:(struct CGRect)arg1;
- (void)_initSubviews;
- (void)_initImages;
- (id)createThumbViewNeue;
- (void)encodeWithCoder:(id)arg1;
- (void)_populateArchivedSubviews:(id)arg1;
@property(retain, nonatomic, getter=_edgeFeedbackBehavior, setter=_setEdgeFeedbackBehavior:) _UIEdgeFeedbackGenerator *edgeFeedbackBehavior;
- (void)_setupFeedback;
@property(retain, nonatomic, getter=_modulationFeedbackGenerator, setter=_setModulationFeedbackGenerator:) _UIModulationFeedbackGenerator *modulationFeedbackGenerator;
@property(retain, nonatomic, getter=_edgeFeedbackGenerator, setter=_setEdgeFeedbackGenerator:) _UIEdgeFeedbackGenerator *edgeFeedbackGenerator;
- (void)_contentSizeCategoryChanged:(id)arg1;
- (void)_listenForContentSizeCategoryChangesIfNecessary;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (_Bool)isElementAccessibilityExposedToInterfaceBuilder;
- (_Bool)isAccessibilityElementByDefault;
- (id)_maxValueView;
- (id)_minValueView;
- (id)_maxTrackView;
- (id)_minTrackView;
- (void)_setUseLookNeue:(_Bool)arg1;
- (struct UIEdgeInsets)_thumbHitEdgeInsets;
- (_Bool)_isThumbEnabled;
- (void)_setMinimumTrackVisible:(_Bool)arg1 withDuration:(double)arg2;
- (void)_setThumbEnabled:(_Bool)arg1;
- (_Bool)_trackEnabled;
- (void)_setTrackEnabled:(_Bool)arg1;
- (void)setMaximumTrackImage:(id)arg1 forStates:(unsigned long long)arg2;
- (void)setMinimumTrackImage:(id)arg1 forStates:(unsigned long long)arg2;
- (void)setThumbImage:(id)arg1 forStates:(unsigned long long)arg2;
- (id)createThumbView;
- (struct CGRect)valueTextRectForBounds:(struct CGRect)arg1;
- (void)setShowValue:(_Bool)arg1;
- (_Bool)isAnimatingValueChange;
- (_Bool)_alwaysHandleScrollerMouseEvent;
- (id)_maximumTrackImageForState:(unsigned long long)arg1;
- (id)_minimumTrackImageForState:(unsigned long long)arg1;
- (id)_thumbImageForState:(unsigned long long)arg1;
- (id)_contentForState:(unsigned long long)arg1;
- (void)_setMaximumTrackImage:(id)arg1 forStates:(unsigned long long)arg2;
- (void)_setMinimumTrackImage:(id)arg1 forStates:(unsigned long long)arg2;
- (void)_setThumbTintColor:(id)arg1 forStates:(unsigned long long)arg2;
- (void)_setThumbImage:(id)arg1 forStates:(unsigned long long)arg2;
- (void)_setContent:(id)arg1 forState:(unsigned long long)arg2;

@end

