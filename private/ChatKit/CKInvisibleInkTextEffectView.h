//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ChatKit/CKInvisibleInkEffectView.h>

#import "CAAnimationDelegate.h"

@class CAEmitterLayer, CALayer, CKTextBalloonView, NSArray, NSString, UITextView;

@interface CKInvisibleInkTextEffectView : CKInvisibleInkEffectView <CAAnimationDelegate>
{
    _Bool _blendingEnabled;
    CKTextBalloonView *_balloonView;
    UITextView *_textView;
    CAEmitterLayer *_textDrawEmitterLayer;
    CALayer *_dustEmitterContainerLayer;
    NSArray *_dustEmitterLayers;
    CAEmitterLayer *_dustDrawEmitterLayer;
}

@property(nonatomic) _Bool blendingEnabled; // @synthesize blendingEnabled=_blendingEnabled;
@property(retain, nonatomic) CAEmitterLayer *dustDrawEmitterLayer; // @synthesize dustDrawEmitterLayer=_dustDrawEmitterLayer;
@property(retain, nonatomic) NSArray *dustEmitterLayers; // @synthesize dustEmitterLayers=_dustEmitterLayers;
@property(retain, nonatomic) CALayer *dustEmitterContainerLayer; // @synthesize dustEmitterContainerLayer=_dustEmitterContainerLayer;
@property(retain, nonatomic) CAEmitterLayer *textDrawEmitterLayer; // @synthesize textDrawEmitterLayer=_textDrawEmitterLayer;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
@property(nonatomic) __weak CKTextBalloonView *balloonView; // @synthesize balloonView=_balloonView;
- (void).cxx_destruct;
- (void)setSuspended:(_Bool)arg1;
- (void)setPaused:(_Bool)arg1;
- (void)cullSubviewsWithVisibleBounds:(struct CGRect)arg1;
- (void)reset;
- (void)detachFromBalloonView;
- (void)attachToBalloonView:(id)arg1;
- (void)updateDustCellColor;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)moveEmittersWithTouches:(id)arg1;
- (void)endTouches;
- (void)endDustEmitterLayerFingerEffects:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)endDrawEmitterEffects;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (id)dustEmitter;
- (id)createDrawEmitter;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

