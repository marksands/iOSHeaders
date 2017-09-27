//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSNumberFormatter, UIButton, UILabel, UIProgressView, _UIBackdropView;

@interface PLProgressView : UIView
{
    UIButton *_cancelButton;
    UILabel *_labelView;
    UIProgressView *_progressView;
    UIView *_topDivider;
    unsigned int _didLayout:1;
    unsigned int _didSetPermanantTextOnLabelView:1;
    NSNumberFormatter *_progressFormatter;
    long long _backgroundType;
    UIView *_backgroundView;
    UIView *_backgroundTintedView;
    _UIBackdropView *_backgroundBlurredView;
    _Bool _showsCancelButton;
    CDUnknownBlockType _cancelationHandler;
}

@property(copy, nonatomic) CDUnknownBlockType cancelationHandler; // @synthesize cancelationHandler=_cancelationHandler;
@property(nonatomic) _Bool showsCancelButton; // @synthesize showsCancelButton=_showsCancelButton;
@property(retain, nonatomic) _UIBackdropView *backgroundBlurredView; // @synthesize backgroundBlurredView=_backgroundBlurredView;
@property(retain, nonatomic) UIView *backgroundTintedView; // @synthesize backgroundTintedView=_backgroundTintedView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) long long backgroundType; // @synthesize backgroundType=_backgroundType;
- (void)_cancel:(id)arg1;
@property(nonatomic) float percentComplete;
- (void)setLabelText:(id)arg1;
- (void)updateUIForPublishingAgent:(id)arg1;
- (void)_removeBackgroundTintedView;
- (void)_installBackgroundTintedView;
- (void)_removeBackgroundBlurredView;
- (void)_installBackgroundBlurredView;
- (void)_installBackgroundView;
- (void)_syncToBackgroundType;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

