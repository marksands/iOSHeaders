//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSReading/TSDRep.h>

#import <TSReading/TSDTilingLayerDelegate-Protocol.h>

@class CALayer, NSString, TSDMutableReflection, TSDReflection, TSDShadow;

@interface TSDStyledRep : TSDRep <TSDTilingLayerDelegate>
{
    CALayer *mShadowLayer;
    CALayer *mReflectionLayer;
    struct CGPoint mOriginalReflectionLayerPositionInScaledCanvas;
    _Bool mIsUpdatingReflectionOpacity;
    TSDMutableReflection *mDynamicReflection;
    _Bool mIsUpdatingShadow;
    TSDShadow *mDynamicShadow;
    struct {
        unsigned int shadowInvalid:1;
    } mFlags;
}

@property(readonly, nonatomic) CALayer *reflectionLayer; // @synthesize reflectionLayer=mReflectionLayer;
@property(readonly, nonatomic) CALayer *shadowLayer; // @synthesize shadowLayer=mShadowLayer;
- (id)textureForContext:(id)arg1;
- (id)magicMoveAttributesWithShapeAttributes:(_Bool)arg1;
- (void)setMagicMoveTextureAttributes:(id)arg1;
- (id)pathSourceForSelectionHighlightBehavior;
- (_Bool)shouldShowSelectionHighlight;
- (_Bool)shouldHideSelectionHighlightDueToRectangularPath;
- (id)additionalLayersUnderLayer;
- (void)didUpdateLayer:(id)arg1;
- (void)willUpdateLayer:(id)arg1;
- (void)processChangedProperty:(int)arg1;
- (void)drawInContextWithoutEffectsOrChildrenForAlphaOnly:(struct CGContext *)arg1;
- (void)drawInContextWithoutEffectsForAlphaOnly:(struct CGContext *)arg1;
- (void)drawInContextWithoutEffectsOrChildren:(struct CGContext *)arg1;
- (void)drawInContextWithoutEffects:(struct CGContext *)arg1;
- (void)drawInContextWithoutEffects:(struct CGContext *)arg1 withContent:(_Bool)arg2 withStroke:(_Bool)arg3 withOpacity:(_Bool)arg4 forAlphaOnly:(_Bool)arg5 drawChildren:(_Bool)arg6;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)drawReflectionInContext:(struct CGContext *)arg1 drawChildren:(_Bool)arg2;
- (void)drawReflectionInContext:(struct CGContext *)arg1 withTransparencyLayer:(_Bool)arg2 applyingOpacity:(_Bool)arg3 shouldClipGradient:(_Bool)arg4 withBlock:(CDUnknownBlockType)arg5;
- (void)drawShadowInContext:(struct CGContext *)arg1 withChildren:(_Bool)arg2 withDrawableOpacity:(_Bool)arg3;
- (void)drawReflectionIntoReflectionFrameInContext:(struct CGContext *)arg1 withTransparencyLayer:(_Bool)arg2 applyingOpacity:(_Bool)arg3 drawChildren:(_Bool)arg4;
- (void)p_drawReflectionIntoReflectionFrameInContext:(struct CGContext *)arg1 withTransparencyLayer:(_Bool)arg2 applyingOpacity:(_Bool)arg3 shouldClipGradient:(_Bool)arg4 withBlock:(CDUnknownBlockType)arg5;
- (void)drawGradientWithAlphaOverReflection:(struct CGContext *)arg1 applyingOpacity:(_Bool)arg2 reflectionSize:(struct CGSize)arg3;
- (struct CGImage *)p_newReflectionImageWithSize:(struct CGSize)arg1 applyOpacity:(_Bool)arg2 viewScale:(double)arg3 withBlock:(CDUnknownBlockType)arg4;
- (struct CGImage *)newShadowImageWithSize:(struct CGSize)arg1 unflipped:(_Bool)arg2 withChildren:(_Bool)arg3;
- (struct CGImage *)newShadowImageWithSize:(struct CGSize)arg1 shadow:(id)arg2 drawSelector:(SEL)arg3 unflipped:(_Bool)arg4;
- (_Bool)canDrawShadowInOneStepWithChildren:(_Bool)arg1;
- (void)positionShadowLayer:(id)arg1 forShadow:(id)arg2 withNaturalBounds:(struct CGRect)arg3;
- (void)invalidateShadowLayer;
- (void)didUpdateEffectLayersForLayer:(id)arg1;
- (struct CGRect)reflectionLayerFrame;
- (struct CGRect)reflectionLayerFrameInRoot;
- (_Bool)isInvisible;
- (void)willUpdateEffectLayersForLayer:(id)arg1;
- (void)disposeReflectionLayer;
- (void)createReflectionLayer;
- (_Bool)shouldShowShadow;
- (_Bool)shouldShowReflection;
@property(readonly, nonatomic) TSDShadow *shadow;
@property(readonly, nonatomic) TSDReflection *reflection;
- (struct CGRect)p_rectWithEffectsAppliedToRect:(struct CGRect)arg1 additionalTransform:(struct CGAffineTransform)arg2;
- (struct CGRect)rectWithEffectsAppliedToRect:(struct CGRect)arg1;
@property(readonly, nonatomic) double opacity;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)p_drawReflectionInContext:(struct CGContext *)arg1;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (struct CGRect)p_clipRectInRootForTransform:(struct CGAffineTransform)arg1;
- (struct CGRect)clipRect;
- (struct CGRect)clipRectWithoutEffects;
- (void)viewScaleDidChange;
- (void)setNeedsDisplay;
- (id)styledLayout;
- (id)styledInfo;
@property(readonly, copy) NSString *description;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
