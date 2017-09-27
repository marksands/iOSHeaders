//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIViewControllerAnimatedTransitioning.h"

@class BSUIAnimationFactory, NSString, _UIViewControllerTransitionContext;

@interface NCAnimationCoordinator : NSObject <UIViewControllerAnimatedTransitioning>
{
    BSUIAnimationFactory *_factory;
    _UIViewControllerTransitionContext *_transitionContext;
    _Bool _durationInherited;
    unsigned long long _animationOptions;
    CDUnknownBlockType _animations;
    CDUnknownBlockType _completion;
}

+ (id)animationCoordinatorWithDuration:(double)arg1;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(copy, nonatomic) CDUnknownBlockType animations; // @synthesize animations=_animations;
@property(nonatomic, getter=isDurationInherited) _Bool durationInherited; // @synthesize durationInherited=_durationInherited;
@property(nonatomic) unsigned long long animationOptions; // @synthesize animationOptions=_animationOptions;
- (void).cxx_destruct;
- (void)animationEnded:(_Bool)arg1;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)animate:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)viewOfChildContainer:(id)arg1 willChangeToSize:(struct CGSize)arg2;
@property(readonly, nonatomic) __weak id <UIViewControllerTransitionCoordinator> transitionCoordinator;
- (id)initWithAnimationFactory:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

