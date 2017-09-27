//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class CAFilter, CAShapeLayer, PKShapeView, UIActivityIndicatorView, UIColor;

@interface PKContinuousButton : UIButton
{
    CDStruct_e6a35582 _configuration;
    UIColor *_tintColor;
    PKShapeView *_maskView;
    _Bool _titleColorShouldBeTintColor;
    CAFilter *_highlightFilter;
    UIColor *_normalInputColor;
    UIColor *_highlightInputColor;
    UIColor *_selectedInputColor;
    UIColor *_disabledInputColor;
    UIColor *_appliedInputColor;
    CAShapeLayer *_layer;
    CAShapeLayer *_maskLayer;
    _Bool _highlighted;
    _Bool _selected;
    _Bool _enabled;
    struct CGSize _boundsSize;
    UIActivityIndicatorView *_activityIndicatorView;
    struct UIEdgeInsets _touchMargins;
}

+ (id)_filterInputColorForEffect:(long long)arg1;
+ (Class)layerClass;
@property(nonatomic) struct UIEdgeInsets touchMargins; // @synthesize touchMargins=_touchMargins;
- (void).cxx_destruct;
- (void)showSpinner:(_Bool)arg1;
- (void)_updateFilter;
- (void)setSelected:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setEnabled:(_Bool)arg1;
- (void)_createHighlightFilterIfNecessary;
- (void)_updateTintColorWithColor:(id)arg1;
- (void)updateWithImage:(id)arg1;
- (void)updateTitleColorWithColor:(id)arg1;
- (void)layoutSubviews;
- (void)tintColorDidChange;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (id)initWithConfiguration:(CDStruct_e6a35582)arg1;
- (id)initWithCornerRadius:(double)arg1 effect:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)pk_applyAppearance:(id)arg1;
- (id)pk_childrenForAppearance;

@end

