//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CAAnimationDelegate.h"
#import "_UIStatusBarPersistentAnimation.h"

@class NSArray, NSMutableArray, NSString, _UIStatusBarCycleLayerAnimation;

__attribute__((visibility("hidden")))
@interface _UIStatusBarCycleAnimation : NSObject <CAAnimationDelegate, _UIStatusBarPersistentAnimation>
{
    _Bool _stopsAfterReversing;
    _Bool _visible;
    NSArray *_layerAnimations;
    long long _state;
    NSArray *_stoppingLayerAnimations;
    NSMutableArray *_completionHandlers;
}

@property(retain, nonatomic) NSMutableArray *completionHandlers; // @synthesize completionHandlers=_completionHandlers;
@property(nonatomic) _Bool visible; // @synthesize visible=_visible;
@property(retain, nonatomic) NSArray *stoppingLayerAnimations; // @synthesize stoppingLayerAnimations=_stoppingLayerAnimations;
@property(nonatomic) _Bool stopsAfterReversing; // @synthesize stopsAfterReversing=_stopsAfterReversing;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) NSArray *layerAnimations; // @synthesize layerAnimations=_layerAnimations;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)_sendCompletionsWithFinished:(_Bool)arg1;
- (void)_stopStoppingAnimations;
- (void)_stopAnimations;
- (void)_startAnimations;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)resumePersistentAnimation;
- (void)pausePersistentAnimation;
- (void)stopWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)start;
@property(readonly, nonatomic) _UIStatusBarCycleLayerAnimation *mainLayerAnimation;
- (void)dealloc;
- (id)initWithLayerAnimations:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

