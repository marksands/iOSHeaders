//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class CALayer, NSMutableArray, NSMutableDictionary, TSDTextureSet;

@interface TSDTexturedRectangle : NSObject <NSCopying>
{
    struct CGPoint mOffset;
    struct CGPoint mOriginalPosition;
    struct CGSize mSize;
    struct CGRect mContentRect;
    struct CGRect mOriginalFrame;
    CALayer *mLayer;
    CDUnknownBlockType mRenderBlock;
    struct CGImage *mSourceImage;
    struct CGImage *mBakedImage;
    TSDTextureSet *mParent;
    int mTextureType;
    double mTextureOpacity;
    unsigned int mSingleTextureName;
    _Bool mSingleTextureContainsMipmaps;
    _Bool mIsFlattened;
    NSMutableDictionary *mAttributes;
    NSMutableArray *mTags;
    struct CGColorSpace *mColorSpace;
    struct CGRect mFrameOnCanvas;
}

@property(nonatomic) struct CGRect frameOnCanvas; // @synthesize frameOnCanvas=mFrameOnCanvas;
@property(retain, nonatomic) NSMutableArray *tags; // @synthesize tags=mTags;
@property(nonatomic) double textureOpacity; // @synthesize textureOpacity=mTextureOpacity;
@property(nonatomic) int textureType; // @synthesize textureType=mTextureType;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=mSize;
@property(nonatomic) TSDTextureSet *parent; // @synthesize parent=mParent;
@property(nonatomic) struct CGPoint originalPosition; // @synthesize originalPosition=mOriginalPosition;
@property(nonatomic) _Bool isFlattened; // @synthesize isFlattened=mIsFlattened;
@property(readonly, nonatomic) CALayer *layer; // @synthesize layer=mLayer;
@property(nonatomic) struct CGColorSpace *colorSpace; // @synthesize colorSpace=mColorSpace;
@property(nonatomic) struct CGRect contentRect; // @synthesize contentRect=mContentRect;
@property(retain, nonatomic) NSMutableDictionary *attributes; // @synthesize attributes=mAttributes;
@property(readonly, nonatomic) CALayer *parentLayer;
- (struct CGRect)boundingRectForStage:(long long)arg1 isBuildIn:(_Bool)arg2;
@property(readonly, nonatomic) _Bool isBackgroundTexture;
- (void)renderIntoContext:(struct CGContext *)arg1;
- (void)bakeLayerWithAngle:(double)arg1 scale:(double)arg2;
@property(readonly, nonatomic) struct CGImage *image;
@property(readonly, nonatomic) double singleTextureOpacity;
- (void)releaseSingleTexture;
@property(readonly, nonatomic) unsigned int singleTextureTarget;
@property(readonly, nonatomic) unsigned int singleTextureName;
- (void)setupSingleTexture;
- (void)setupSingleTextureAndGenerateMipMaps:(_Bool)arg1;
- (void)renderLayerContentsIfNeeded;
@property(readonly, nonatomic) _Bool isRenderable;
- (void)resetToSourceImage;
- (struct CGImage *)p_newImageAndBufferWithAngle:(double)arg1 scale:(double)arg2 offset:(struct CGPoint)arg3;
- (struct CGColorSpace *)p_colorSpace;
- (void)resetAnchorPoint;
- (void)adjustAnchorRelativeToParentsCenterOfRotation:(struct CGPoint)arg1 isMagicMove:(_Bool)arg2;
@property(readonly, nonatomic) struct CGRect frame;
@property(nonatomic) struct CGPoint offset;
@property(readonly, nonatomic) struct CATransform3D transformFromAttributes;
@property(readonly, nonatomic) float opacityFromAttributes;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)dealloc;
- (void)teardown;
- (id)initWithCGImage:(struct CGImage *)arg1;
- (id)initWithLayer:(id)arg1;
- (id)initWithSize:(struct CGSize)arg1 offset:(struct CGPoint)arg2 renderBlock:(CDUnknownBlockType)arg3;

@end

