//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SKCropNode.h"

@class NTKCollectionNode, SKSpriteNode;

@interface NTKVariantNode : SKCropNode
{
    SKSpriteNode *_transitionMask;
}

- (void).cxx_destruct;
- (void)appearAnimated;
- (void)disappearAnimated;
- (void)applyFullAppearance;
- (void)revealWithFraction:(double)arg1 invert:(_Bool)arg2;
- (void)_stopMasking;
- (void)createTransitionMaskLazily;
- (void)applyAppearanceFraction:(double)arg1 inverted:(_Bool)arg2;
- (void)applyAppearanceFraction:(double)arg1;
- (void)resetAlphaAndScale;
@property(readonly, nonatomic) NTKCollectionNode *other;
@property(readonly, nonatomic) NTKCollectionNode *labels;
@property(readonly, nonatomic) NTKCollectionNode *ticks;
- (id)initWithElements:(id)arg1;

@end

