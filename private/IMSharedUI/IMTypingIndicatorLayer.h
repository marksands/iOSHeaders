//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

#import "IMTypingIndicatorLayerProtocol.h"

@class CAReplicatorLayer, NSString, UIColor;

@interface IMTypingIndicatorLayer : CALayer <IMTypingIndicatorLayerProtocol>
{
    _Bool _hasDarkBackground;
    id _iconImage;
    double _bubbleOpacity;
    struct UIColor *_customBubbleColor;
    CALayer *_bubbleContainer;
    CALayer *_smallBubble;
    CALayer *_mediumBubble;
    CALayer *_largeBubble;
    CALayer *_thinkingDotContainer;
    CALayer *_thinkingDot;
    CAReplicatorLayer *_thinkingDots;
    CALayer *_iconImageLayer;
}

+ (struct UIColor *)defaultThinkingDotColor;
+ (double)thinkingDotSpace;
+ (double)thinkingDotDiameter;
+ (struct CGPoint)thinkingDotsOffset;
+ (double)iconImageTrailingSpace;
+ (struct CGRect)iconImageFrame;
+ (struct CGPoint)largeBubbleGrowOffset;
+ (struct CGRect)largeBubbleFrame;
+ (struct CGPoint)mediumBubbleGrowOffset;
+ (struct CGRect)mediumBubbleFrame;
+ (struct CGPoint)smallBubbleGrowOffset;
+ (struct CGRect)smallBubbleFrame;
+ (struct UIColor *)darkBackgroundThinkingDotColor;
+ (struct UIColor *)defaultBubbleColor;
+ (struct CGSize)defaultSize;
+ (_Bool)supportsTypingIndicatorAnimation;
@property(retain, nonatomic) CALayer *iconImageLayer; // @synthesize iconImageLayer=_iconImageLayer;
@property(retain, nonatomic) CAReplicatorLayer *thinkingDots; // @synthesize thinkingDots=_thinkingDots;
@property(retain, nonatomic) CALayer *thinkingDot; // @synthesize thinkingDot=_thinkingDot;
@property(retain, nonatomic) CALayer *thinkingDotContainer; // @synthesize thinkingDotContainer=_thinkingDotContainer;
@property(retain, nonatomic) CALayer *largeBubble; // @synthesize largeBubble=_largeBubble;
@property(retain, nonatomic) CALayer *mediumBubble; // @synthesize mediumBubble=_mediumBubble;
@property(retain, nonatomic) CALayer *smallBubble; // @synthesize smallBubble=_smallBubble;
@property(retain, nonatomic) CALayer *bubbleContainer; // @synthesize bubbleContainer=_bubbleContainer;
@property(copy, nonatomic) UIColor *customBubbleColor; // @synthesize customBubbleColor=_customBubbleColor;
@property(nonatomic) double bubbleOpacity; // @synthesize bubbleOpacity=_bubbleOpacity;
@property(retain, nonatomic) id iconImage; // @synthesize iconImage=_iconImage;
@property(nonatomic) _Bool hasDarkBackground; // @synthesize hasDarkBackground=_hasDarkBackground;
- (void).cxx_destruct;
- (void)stopAnimation;
- (void)startShrinkAnimationWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)stopPulseAnimation;
- (void)startPulseAnimation;
- (void)startGrowAnimation;
- (id)_largeBubblePulseAnimationWithSpeed:(double)arg1 delay:(double)arg2;
- (id)_largeBubbleGrowAnimationsWithSpeed:(double)arg1 offset:(struct CGPoint)arg2;
- (id)_mediumBubblePulseAnimationWithSpeed:(double)arg1 delay:(double)arg2;
- (id)_mediumBubbleGrowAnimationsWithSpeed:(double)arg1 offset:(struct CGPoint)arg2;
- (id)_smallBubblePulseAnimationWithSpeed:(double)arg1 delay:(double)arg2;
- (id)_smallBubbleGrowAnimationsWithSpeed:(double)arg1 offset:(struct CGPoint)arg2;
- (void)_updateBubbleColors;
- (void)_buildThinkingDots;
- (void)_buildIconImage;
- (void)_updateForImage;
- (void)_setup;
- (double)convertedCurrentMediaTime;
- (id)init;
@property(readonly, nonatomic) UIColor *bubbleColor;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

