//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PUTilingView, UIView;

@protocol PUTilingViewControllerTransitionEndPoint <NSObject>
- (void)tilingViewControllerTransition:(id <PUTilingViewControllerTransition>)arg1 adoptTilingView:(PUTilingView *)arg2 fromEndPoint:(id <PUTilingViewControllerTransitionEndPoint>)arg3 isCancelingTransition:(_Bool)arg4 animationSetupCompletionHandler:(void (^)(PUAnimationGroup *))arg5;
- (void)tilingViewControllerTransition:(id <PUTilingViewControllerTransition>)arg1 abandonTilingView:(PUTilingView *)arg2 toEndPoint:(id <PUTilingViewControllerTransitionEndPoint>)arg3;
- (PUTilingView *)tilingViewControllerTransition:(id <PUTilingViewControllerTransition>)arg1 tilingViewToTransferToEndPoint:(id <PUTilingViewControllerTransitionEndPoint>)arg2;
- (UIView *)tilingViewControllerTransitionTilingViewHostView:(id <PUTilingViewControllerTransition>)arg1;

@optional
- (long long)tilingViewControllerTransitionPreferredBarStyle:(id <PUTilingViewControllerTransition>)arg1;
- (_Bool)tilingViewControllerTransitionUsesTransientTilingView:(id <PUTilingViewControllerTransition>)arg1;
@end

