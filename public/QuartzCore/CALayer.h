//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CAMediaTiming.h"
#import "CAPropertyInfo.h"
#import "NSSecureCoding.h"

@class CAMeshTransform, NSArray, NSDictionary, NSString;

@interface CALayer : NSObject <CAPropertyInfo, NSSecureCoding, CAMediaTiming>
{
    struct _CALayerIvars _attr;
}

+ (id)defaultActionForKey:(id)arg1;
+ (_Bool)supportsSecureCoding;
+ (_Bool)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (_Bool)_hasRenderLayerSubclass;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)layer;
+ (_Bool)needsDisplayForKey:(id)arg1;
+ (id)defaultValueForKey:(id)arg1;
+ (void)CAMLParserEndElement:(id)arg1;
+ (void)CAMLParserStartElement:(id)arg1;
+ (_Bool)resolveInstanceMethod:(SEL)arg1;
+ (CDUnknownFunctionPointerType)CA_getterForProperty:(const struct _CAPropertyInfo *)arg1;
+ (CDUnknownFunctionPointerType)CA_setterForProperty:(const struct _CAPropertyInfo *)arg1;
+ (id)properties;
+ (_Bool)needsLayoutForKey:(id)arg1;
@property _Bool allowsGroupOpacity;
@property _Bool allowsEdgeAntialiasing;
@property _Bool drawsAsynchronously;
@property double rasterizationScale;
@property _Bool rasterizationPrefersDisplayCompositing;
@property _Bool shouldRasterize;
@property const struct CGPath *shadowPath;
@property double shadowRadius;
@property struct CGSize shadowOffset;
@property struct CGColor *shadowColor;
@property float shadowOpacity;
@property(copy) NSString *contentsSwizzle;
@property struct CGColor *contentsMultiplyColor;
@property double cornerRadius;
@property double borderWidth;
@property struct CGColor *borderColor;
@property(copy) NSDictionary *actions;
@property(copy) NSDictionary *style;
@property(copy) NSString *name;
@property(retain) id compositingFilter;
@property(copy) NSArray *backgroundFilters;
@property(copy) NSArray *filters;
@property _Bool masksToBounds;
@property struct CGColor *backgroundColor;
@property float opacity;
@property float minificationFilterBias;
@property(copy) NSString *minificationFilter;
@property(copy) NSString *magnificationFilter;
@property double contentsScale;
@property _Bool contentsContainsSubtitles;
@property _Bool cornerContentsMasksEdges;
@property _Bool continuousCorners;
@property struct CGRect cornerContentsCenter;
@property struct CGRect contentsCenter;
@property struct CGRect contentsRect;
@property struct CATransform3D sublayerTransform;
@property _Bool needsDisplayOnBoundsChange;
@property(getter=isOpaque) _Bool opaque;
@property(getter=isDoubleSided) _Bool doubleSided;
@property(getter=isHidden) _Bool hidden;
@property(retain) id cornerContents;
@property double anchorPointZ;
@property struct CGPoint anchorPoint;
@property(copy) NSString *fillMode;
@property _Bool autoreverses;
@property double repeatDuration;
@property float repeatCount;
@property float speed;
@property double duration;
@property double timeOffset;
@property double beginTime;
@property unsigned long long maskedCorners;
- (void)layoutSublayers;
- (void)layoutIfNeeded;
- (struct CGSize)preferredFrameSize;
- (struct CGSize)_preferredSize;
- (_Bool)needsLayout;
- (void)setNeedsLayout;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)_contentsFormatDidChange:(id)arg1;
- (struct CGColorSpace *)_retainColorSpace;
- (void)_colorSpaceDidChange;
- (void)_display;
- (void)display;
- (void)_renderBorderInContext:(struct CGContext *)arg1;
- (void)_renderSublayersInContext:(struct CGContext *)arg1;
- (void)_renderForegroundInContext:(struct CGContext *)arg1;
- (void)_renderBackgroundInContext:(struct CGContext *)arg1;
- (void)renderInContext:(struct CGContext *)arg1;
- (void)displayIfNeeded;
- (_Bool)needsDisplay;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;
- (void)setNeedsDisplay;
- (id)modelLayer;
- (id)presentationLayer;
- (void)_cancelAnimationTimer;
- (_Bool)_scheduleAnimationTimer;
- (id)animationKeys;
- (id)animationForKey:(id)arg1;
- (void)removeAnimationForKey:(id)arg1;
- (void)removeAllAnimations;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (id)actionForKey:(id)arg1;
- (void)replaceSublayer:(id)arg1 with:(id)arg2;
- (void)insertSublayer:(id)arg1 above:(id)arg2;
- (void)insertSublayer:(id)arg1 below:(id)arg2;
- (void)addSublayer:(id)arg1;
- (void)insertSublayer:(id)arg1 atIndex:(unsigned int)arg2;
- (void)removeFromSuperlayer;
@property __weak id <CALayerDelegate> delegate;
@property(retain) CALayer *mask;
@property(readonly) CALayer *superlayer;
@property(copy) NSArray *sublayers;
@property(copy) NSString *contentsScaling;
@property(copy) NSString *contentsGravity;
@property(copy) NSString *contentsFormat;
@property unsigned int disableUpdateMask;
@property unsigned int edgeAntialiasingMask;
@property(retain) id contents;
- (_Bool)containsPoint:(struct CGPoint)arg1;
- (id)hitTest:(struct CGPoint)arg1;
- (double)convertTime:(double)arg1 toLayer:(id)arg2;
- (double)convertTime:(double)arg1 fromLayer:(id)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 toLayer:(id)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 fromLayer:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toLayer:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromLayer:(id)arg2;
- (_Bool)contentsAreFlipped;
@property(getter=isGeometryFlipped) _Bool geometryFlipped;
@property struct CGRect frame;
- (void)setAffineTransform:(struct CGAffineTransform)arg1;
- (struct CGAffineTransform)affineTransform;
@property struct CATransform3D transform;
@property double zPosition;
@property struct CGPoint position;
@property struct CGRect bounds;
- (_Bool)shouldArchiveValueForKey:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (id)valueForKeyPath:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (id)valueForKey:(id)arg1;
- (id)debugDescription;
- (void)dealloc;
- (void)_dealloc;
- (id)_initWithReference:(id)arg1;
- (id)initWithLayer:(id)arg1;
- (id)init;
- (_Bool)allowsWeakReference;
- (unsigned long long)retainCount;
- (oneway void)release;
- (_Bool)retainWeakReference;
- (id)retain;
- (id)stateTransitionFrom:(id)arg1 to:(id)arg2;
- (id)dependentStatesOfState:(id)arg1;
- (id)stateWithName:(id)arg1;
- (void)removeState:(id)arg1;
- (void)insertState:(id)arg1 atIndex:(unsigned int)arg2;
- (void)addState:(id)arg1;
@property(readonly) struct CGRect visibleRect;
- (struct CGRect)_visibleRectOfLayer:(id)arg1;
- (void)scrollRectToVisible:(struct CGRect)arg1;
- (void)_scrollRect:(struct CGRect)arg1 fromLayer:(id)arg2;
- (void)scrollPoint:(struct CGPoint)arg1;
- (void)_scrollPoint:(struct CGPoint)arg1 fromLayer:(id)arg2;
@property _Bool definesDisplayRegionOfInterest;
@property _Bool acceleratesDrawing;
@property struct CGSize backgroundColorPhase;
@property struct CGSize sizeRequisition;
@property _Bool allowsGroupBlending;
- (void)setWantsExtendedDynamicRangeContent:(_Bool)arg1;
- (_Bool)wantsExtendedDynamicRangeContent;
@property _Bool allowsDisplayCompositing;
@property _Bool preloadsCache;
@property double motionBlurAmount;
@property _Bool inheritsTiming;
@property _Bool contentsOpaque;
@property _Bool contentsDither;
@property struct CGAffineTransform contentsTransform;
@property _Bool shadowPathIsBounds;
@property _Bool invertsShadow;
@property _Bool flipsHorizontalAxis;
@property _Bool sortsSublayers;
@property _Bool needsLayoutOnGeometryChange;
@property(getter=isFrozen) _Bool frozen;
@property _Bool clearsContext;
@property _Bool canDrawConcurrently;
@property _Bool literalContentsCenter;
@property _Bool hitTestsAsOpaque;
@property _Bool allowsHitTesting;
@property _Bool allowsContentsRectCornerMasking;
- (void)setFlipped:(_Bool)arg1;
- (_Bool)isFlipped;
- (_Bool)doubleSided;
- (_Bool)opaque;
- (_Bool)hidden;
- (id)CAMLTypeForKey:(id)arg1;
- (void)encodeWithCAMLWriter:(id)arg1;
- (void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3;
@property(copy) NSArray *presentationModifiers;
- (void)removePresentationModifier:(id)arg1;
- (void)addPresentationModifier:(id)arg1;
- (_Bool)_defersDidBecomeVisiblePostCommit;
- (void)layerDidBecomeVisible:(_Bool)arg1;
- (unsigned int)_renderLayerPropertyAnimationFlags:(unsigned int)arg1;
- (_Bool)_renderLayerDefinesProperty:(unsigned int)arg1;
- (void)_didCommitLayer:(struct Transaction *)arg1;
- (struct Layer *)_copyRenderLayer:(struct Transaction *)arg1 layerFlags:(unsigned int)arg2 commitFlags:(unsigned int *)arg3;
- (id)layerAtTime:(double)arg1;
- (id)layerBeingDrawn;
- (struct CGSize)size;
- (id)ancestorSharedWithLayer:(id)arg1;
- (_Bool)isDescendantOf:(id)arg1;
- (_Bool)ignoresHitTesting;
- (void)layoutBelowIfNeeded;
- (_Bool)layoutIsActive;
- (void)_prepareContext:(struct CGContext *)arg1;
- (void *)regionBeingDrawn;
- (unsigned int)_renderImageCopyFlags;
- (void)setContentsChanged;
- (void)invalidateContents;
@property(copy) CAMeshTransform *meshTransform;
- (id)context;
- (void)clearHasBeenCommitted;
- (_Bool)hasBeenCommitted;
- (_Bool)drawsMipmapLevels;
- (_Bool)_canDisplayConcurrently;
- (id)implicitAnimationForKeyPath:(id)arg1;
- (void)reloadValueForKeyPath:(id)arg1;
- (void)setLights:(id)arg1;
- (id)lights;
@property double velocityStretch;
@property(copy) NSArray *behaviors;
@property double coefficientOfRestitution;
@property double momentOfInertia;
@property double mass;
- (_Bool)getRendererInfo:(struct _CARenderRendererInfo *)arg1 size:(unsigned long long)arg2;

// Remaining properties
@property(copy) NSArray *stateTransitions; // @dynamic stateTransitions;
@property(copy) NSArray *states; // @dynamic states;

@end

