//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKitCore/UIVisualEffect.h>

@interface _UIBlurThroughEffect : UIVisualEffect
{
    long long _style;
}

+ (id)_blurThroughWithStyle:(long long)arg1;
- (void)_updateEffectNode:(id)arg1 forTraitCollection:(id)arg2;
- (_Bool)_needsUpdateForMovingToWindow:(id)arg1 fromWindow:(id)arg2 inEffectView:(id)arg3;
- (_Bool)_needsUpdateForMovingToSuperview:(id)arg1 fromSuperview:(id)arg2 inEffectView:(id)arg3;
- (_Bool)_needsUpdateForTransitionFromTraitCollection:(id)arg1 toTraitCollection:(id)arg2;
- (_Bool)isEqual:(id)arg1;

@end

