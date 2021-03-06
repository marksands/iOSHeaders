//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CAEmitterLayer, PLPlatterView, UIVisualEffectView;

@interface SFChargingBackgroundView : UIView
{
    UIVisualEffectView *_backdropVisualEffectView;
    _Bool _constraintsInitialized;
    _Bool _emitterAdded;
    CAEmitterLayer *_emitterLayer;
    PLPlatterView *_platterView;
    _Bool _useEmitter;
    _Bool _darkStyle;
}

@property(nonatomic) _Bool darkStyle; // @synthesize darkStyle=_darkStyle;
@property(nonatomic) _Bool useEmitter; // @synthesize useEmitter=_useEmitter;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)drawRect:(struct CGRect)arg1;
@property(readonly, nonatomic) UIView *contentView;
- (void)initViews;
- (void)initEmitterLayer;
- (void)initConstraintsIfNeeded;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

