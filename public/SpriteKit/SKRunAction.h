//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SpriteKit/SKAction.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SKRunAction : SKAction
{
    SKAction *_action;
    NSString *_subSpriteKey;
    NSString *_actionKey;
    _Bool _waitForKeyedAction;
    _Bool _runOnSubSprite;
    _Bool _fired;
}

+ (id)runAction:(id)arg1 afterActionWithKey:(id)arg2;
+ (id)runAction:(id)arg1 onFirstChildWithName:(id)arg2;
- (void).cxx_destruct;
- (id)reversedAction;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)updateWithTarget:(id)arg1 forTime:(double)arg2;
- (void)willStartWithTarget:(id)arg1 atTime:(double)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

