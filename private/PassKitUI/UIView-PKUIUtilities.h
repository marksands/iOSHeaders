//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface UIView (PKUIUtilities)
+ (void)_pkui_animateUsingFactory:(id)arg1 withDelay:(double)arg2 options:(unsigned long long)arg3 animations:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)pkui_animateUsingOptions:(unsigned long long)arg1 delay:(double)arg2 velocity:(double)arg3 animations:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)pkui_animateUsingOptions:(unsigned long long)arg1 delay:(double)arg2 animations:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)pkui_animateUsingOptions:(unsigned long long)arg1 animations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (struct CGRect)pkui_readableContentBoundsWithMargins:(struct UIEdgeInsets)arg1;
- (id)pkui_viewControllerFromResponderChain;
- (id)pkui_translationAnimation;
- (void)addTransformSpringWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 startTime:(double)arg4 timing:(id)arg5;
- (void)addDefaultTransformSpringWithStartTime:(double)arg1;
- (void)addTranslationSpringWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 startTime:(double)arg4 velocity:(double)arg5 timing:(id)arg6;
- (void)addTranslationSpringWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 startTime:(double)arg4 timing:(id)arg5;
- (void)addDefaultTranslationSpringWithVelocity:(double)arg1 startTime:(double)arg2;
- (_Bool)pkui_setBounds:(struct CGRect)arg1 position:(struct CGPoint)arg2 animated:(_Bool)arg3;
- (_Bool)pkui_setFrame:(struct CGRect)arg1 animated:(_Bool)arg2;
- (void)pkui_shakeWithCompletion:(CDUnknownBlockType)arg1;
@end

