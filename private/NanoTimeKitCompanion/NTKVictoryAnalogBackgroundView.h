//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CALayer, CAMediaTimingFunction, NSArray, NSDictionary, NSMutableDictionary, NTKVictoryAnalogFakeComplicationButton, UIImage;

@interface NTKVictoryAnalogBackgroundView : UIView
{
    UIImage *_dotImage;
    NSMutableDictionary *_regularNumberImages;
    NSMutableDictionary *_largeNumberImages;
    NSArray *_ringLayers;
    _Bool _ringLayerIsDigit[12];
    NSArray *_bigNumberLayers;
    NSArray *_activeDigitIndices;
    _Bool _canonicalDigitStatesByStyle[3][12];
    NSDictionary *_transitionDigitTargetStates;
    NSArray *_transitionDigitIndices;
    NSArray *_transitionStaticDigitIndices;
    unsigned long long _transitionFromStyle;
    unsigned long long _transitionToStyle;
    CAMediaTimingFunction *_transitionTimingFunction;
    NTKVictoryAnalogFakeComplicationButton *_logoButton;
    CALayer *_logoLayer;
    struct CGPoint _logoPositionRing;
    struct CGPoint _logoPositionNoDigits;
    struct CGPoint _logoPositionBig;
    unsigned long long _style;
    unsigned long long _color;
    id <NTKVictoryAnalogBackgroundViewDelegate> _delegate;
}

+ (id)_disabledLayerActions;
@property(nonatomic) __weak id <NTKVictoryAnalogBackgroundViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long color; // @synthesize color=_color;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (id)_largeNumberImageForNumber:(unsigned long long)arg1;
- (id)_regularNumberImageForNumber:(unsigned long long)arg1;
- (id)_dotImage;
- (id)_logoImage;
- (id)_bigNumberInitialTransforms;
- (id)_createAndAddLayersWithCount:(unsigned long long)arg1;
- (void)_createBigNumberLayersIfNeeded;
- (void)_createRingLayersIfNeeded;
- (void)_setRingLayerAtIndex:(unsigned long long)arg1 isDigit:(_Bool)arg2;
- (void)willBeginEditing;
- (double)_elementScaleForTransitionProgress:(double)arg1 initialScale:(double)arg2 middleScale:(double)arg3 finalScale:(double)arg4;
- (double)_transitionProgressForDigitAtIndex:(unsigned long long)arg1 overallProgress:(double)arg2 delayPerDigit:(double)arg3 digitTransitionLength:(double)arg4;
- (struct CGColor *)_layerTransitionColorFromColor:(id)arg1 toColor:(id)arg2 amount:(double)arg3;
- (void)applyTransitionFraction:(double)arg1 fromColor:(unsigned long long)arg2 toColor:(unsigned long long)arg3;
- (void)_applyColorForStyle:(unsigned long long)arg1;
- (void)_clearTransitionStateForStyle:(unsigned long long)arg1;
- (struct CATransform3D)_intermediateTransformForBigNumberAtIndex:(unsigned long long)arg1 fraction:(double)arg2;
- (double)_dotAlphaForColor:(unsigned long long)arg1 style:(unsigned long long)arg2;
- (void)applyTransitionFraction:(double)arg1 fromStyle:(unsigned long long)arg2 toStyle:(unsigned long long)arg3;
- (void)setInTimeTravel:(_Bool)arg1 animated:(_Bool)arg2;
- (struct CGPoint)_ringDigitOffsetAtIndex:(unsigned long long)arg1;
- (void)layoutSubviews;
- (void)_logoTapped;
- (id)initWithFrame:(struct CGRect)arg1;

@end

