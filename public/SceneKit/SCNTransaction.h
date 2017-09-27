//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCNTransaction : NSObject
{
}

+ (void)checkUncommittedTransactions;
+ (unsigned int)currentState;
+ (void)postCommandWithContext:(struct __C3DScene *)arg1 object:(id)arg2 key:(id)arg3 applyBlock:(CDUnknownBlockType)arg4;
+ (void)postCommandWithContext:(struct __C3DScene *)arg1 object:(id)arg2 keyPath:(id)arg3 applyBlock:(CDUnknownBlockType)arg4;
+ (void)postCommandWithContext:(struct __C3DScene *)arg1 object:(id)arg2 applyBlock:(CDUnknownBlockType)arg3;
+ (_Bool)immediateMode;
+ (void)setImmediateMode:(_Bool)arg1;
+ (void)setValue:(id)arg1 forKey:(id)arg2;
+ (id)valueForKey:(id)arg1;
+ (void)setCompletionBlock:(CDUnknownBlockType)arg1;
+ (CDUnknownBlockType)completionBlock;
+ (void)setDisableActions:(_Bool)arg1;
+ (_Bool)disableActions;
+ (void)setAnimationTimingFunction:(id)arg1;
+ (id)animationTimingFunction;
+ (void)setAnimationDuration:(double)arg1;
+ (double)animationDuration;
+ (void)unlock;
+ (void)lock;
+ (void)flush;
+ (void)commitImmediate;
+ (void)commit;
+ (void)begin;
- (id)animationTimingFunction;
- (void)setAnimationTimingFunction:(id)arg1;
- (_Bool)disableActions;
- (void)setDisableActions:(_Bool)arg1;
- (double)animationDuration;
- (void)setAnimationDuration:(double)arg1;
- (void)unlock;
- (void)lock;
- (void)flush;
- (void)commit;
- (void)begin;

@end

