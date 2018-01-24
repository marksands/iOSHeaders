//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SXInteractivePlaybackTransitioning.h"
#import "SXPlaybackTransitionCoordinator.h"

@class NSMutableArray, NSString, UIViewPropertyAnimator;

@interface SXPlaybackTransitionCoordinator : NSObject <SXInteractivePlaybackTransitioning, SXPlaybackTransitionCoordinator>
{
    UIViewPropertyAnimator *_animator;
    NSMutableArray *_animateAlongsideBlocks;
    NSMutableArray *_transitionAlongsideBlocks;
    NSMutableArray *_completionBlocks;
}

@property(readonly, nonatomic) NSMutableArray *completionBlocks; // @synthesize completionBlocks=_completionBlocks;
@property(readonly, nonatomic) NSMutableArray *transitionAlongsideBlocks; // @synthesize transitionAlongsideBlocks=_transitionAlongsideBlocks;
@property(readonly, nonatomic) NSMutableArray *animateAlongsideBlocks; // @synthesize animateAlongsideBlocks=_animateAlongsideBlocks;
@property(retain, nonatomic) UIViewPropertyAnimator *animator; // @synthesize animator=_animator;
- (void).cxx_destruct;
- (void)transitionAlongside:(CDUnknownBlockType)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)animateAlongside:(CDUnknownBlockType)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)cancelInteractiveTransition;
- (void)finishInteractiveTransition;
- (void)updateInteractiveTransition:(double)arg1;
- (void)startInteractiveTransitionWithContext:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

