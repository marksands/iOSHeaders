//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIViewControllerAnimatedTransitioning.h"

@class NAFuture, NSString;

@interface HUPreloadedTransitionController : NSObject <UIViewControllerAnimatedTransitioning>
{
    NAFuture *_completionFuture;
}

@property(readonly, nonatomic) NAFuture *completionFuture; // @synthesize completionFuture=_completionFuture;
- (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

