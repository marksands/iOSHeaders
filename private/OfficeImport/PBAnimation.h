//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface PBAnimation : NSObject
{
}

+ (void)mapAnimationsFromSlide:(id)arg1 tgtSlide:(id)arg2 state:(id)arg3;
+ (void)parseBuildList:(id)arg1 buildMap:(id)arg2 state:(id)arg3;
+ (id)newChartBuild:(id)arg1;
+ (id)newParaBuild:(id)arg1;
+ (void)parseTargetContainerHolder:(id)arg1 setTargetObj:(id)arg2 state:(id)arg3;
+ (unsigned long long)paragraphIndexFromBinaryTextBytesCharacterIndex:(unsigned long long)arg1 srcDrawable:(id)arg2;
+ (void)parseTimeNodeVariants:(id)arg1 commonData:(id)arg2;
+ (void)parseCmdBehaviorContainer:(id)arg1 cmdBehavior:(id)arg2 timeNode:(id)arg3;
+ (void)parseRotationBehaviorContainer:(id)arg1 rotationBehavior:(id)arg2 timeNode:(id)arg3;
+ (void)parseMotionBehaviorContainer:(id)arg1 motionBehavior:(id)arg2 timeNode:(id)arg3;
+ (void)parseEffectBehaviorContainer:(id)arg1 effectBehavior:(id)arg2 timeNode:(id)arg3;
+ (void)parseColorBehaviorContainer:(id)arg1 colorBehavior:(id)arg2 timeNode:(id)arg3;
+ (id)newColorFromBehaviorColor:(struct PptAnimColorBehavior_Color_Struct *)arg1;
+ (void)parseAnimateBehaviorContainer:(id)arg1 animBehavior:(id)arg2 timeNode:(id)arg3;
+ (void)parseTimeConditionsHolder:(id)arg1 commonData:(id)arg2;
+ (id)parseMediaContainer:(id)arg1 timeNode:(id)arg2 state:(id)arg3;
+ (void)parseTimeNodeContainer:(id)arg1 siblings:(id)arg2 state:(id)arg3;
+ (id)parseBehaviorContainer:(id)arg1 timeNode:(id)arg2 state:(id)arg3;
+ (void)generatePpt10AnimationFromState:(id)arg1 timings:(id)arg2;
+ (void)parsePpt10Animation:(id)arg1 timings:(id)arg2 state:(id)arg3;
+ (_Bool)hasPpt10Animations:(id)arg1;

@end

