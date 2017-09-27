//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class CMKTimelapseShutterRingView, UIActivityIndicatorView, UIImageView, UIView;

@interface CMKShutterButton : UIButton
{
    _Bool _pulsing;
    _Bool _spinning;
    _Bool _showDisabled;
    long long _buttonMode;
    UIView *__outerView;
    UIImageView *__outerImageView;
    CMKTimelapseShutterRingView *__timelapseOuterView;
    UIView *__innerView;
    UIActivityIndicatorView *__progressActivityIndicatorView;
    struct CMKShutterButtonSpec _spec;
}

+ (id)shutterButtonWithDesiredSpec:(struct CMKShutterButtonSpec)arg1;
+ (id)tinyShutterButton;
+ (id)smallShutterButton;
+ (id)shutterButton;
@property(readonly, nonatomic) UIActivityIndicatorView *_progressActivityIndicatorView; // @synthesize _progressActivityIndicatorView=__progressActivityIndicatorView;
@property(readonly, nonatomic) UIView *_innerView; // @synthesize _innerView=__innerView;
@property(readonly, nonatomic) CMKTimelapseShutterRingView *_timelapseOuterView; // @synthesize _timelapseOuterView=__timelapseOuterView;
@property(readonly, nonatomic) UIImageView *_outerImageView; // @synthesize _outerImageView=__outerImageView;
@property(readonly, nonatomic) UIView *_outerView; // @synthesize _outerView=__outerView;
@property(nonatomic) _Bool showDisabled; // @synthesize showDisabled=_showDisabled;
@property(nonatomic, getter=isSpinning) _Bool spinning; // @synthesize spinning=_spinning;
@property(nonatomic, getter=isPulsing) _Bool pulsing; // @synthesize pulsing=_pulsing;
@property(nonatomic, setter=_setSpec:) struct CMKShutterButtonSpec spec; // @synthesize spec=_spec;
@property(nonatomic) long long buttonMode; // @synthesize buttonMode=_buttonMode;
- (void).cxx_destruct;
- (void)_updateSpinningAnimations;
- (void)_performModeSwitchAnimationFromMode:(long long)arg1 toMode:(long long)arg2 animated:(_Bool)arg3;
- (void)_performHighlightAnimation;
- (void)_updateOuterAndInnerLayers;
- (_Bool)_shouldUseTimelapseOuterViewForMode:(long long)arg1;
- (_Bool)_shouldUseImageViewForMode:(long long)arg1;
- (_Bool)_isStopMode:(long long)arg1;
- (id)_outerImageForMode:(long long)arg1;
- (double)_borderWidthForMode:(long long)arg1;
- (double)_cornerRadiusForMode:(long long)arg1;
- (struct CGSize)_sizeForMode:(long long)arg1;
- (id)_colorForMode:(long long)arg1;
- (double)_innerCircleDiameter;
- (void)setButtonMode:(long long)arg1 animated:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_commonCMKShutterButtonInitialization;

@end

