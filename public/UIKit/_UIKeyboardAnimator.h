//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class _UIKeyboardAnimatorAnimationStyle;

@interface _UIKeyboardAnimator : NSObject
{
    _UIKeyboardAnimatorAnimationStyle *_style;
}

- (void).cxx_destruct;
- (void)completeAnimationWithState:(id)arg1;
- (void)runAnimationWithState:(id)arg1;
- (void)prepareForAnimationWithState:(id)arg1;
- (void)performAnimation:(CDUnknownBlockType)arg1 afterStarted:(CDUnknownBlockType)arg2 onCompletion:(CDUnknownBlockType)arg3;
- (void)applyToKeyboardOperations:(CDUnknownBlockType)arg1;
- (id)init;

@end

