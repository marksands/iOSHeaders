//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol OFViewControllerAnimatedTransitioning <NSObject>
- (void)animateTransitionWithContext:(id <OFViewControllerTransitioningContext>)arg1;
- (double)transitionDurationWithContext:(id <OFViewControllerTransitioningContext>)arg1;

@optional
- (void)animationEnded:(_Bool)arg1;
@end

