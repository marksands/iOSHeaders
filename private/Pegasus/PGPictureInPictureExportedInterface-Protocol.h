//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BKSAnimationFenceHandle;

@protocol PGPictureInPictureExportedInterface <NSObject>
- (oneway void)actionButtonTapped;
- (oneway void)hostedWindowSizeChangeEnded;
- (oneway void)hostedWindowSizeChangeBegan;
- (oneway void)updateHostedWindowSize:(struct CGSize)arg1 animationType:(long long)arg2 initialSpringVelocity:(double)arg3 synchronizationFence:(BKSAnimationFenceHandle *)arg4;
- (oneway void)pictureInPictureCancelled;
- (oneway void)pictureInPictureResumed;
- (oneway void)pictureInPictureSuspended;
- (oneway void)pictureInPictureInterruptionEnded;
- (oneway void)pictureInPictureInterruptionBegan;
- (oneway void)updatePictureInPicturePossible:(_Bool)arg1;
- (oneway void)pictureInPictureCancelRequestedAnimated:(_Bool)arg1 withCompletionHandler:(void (^)(_Bool, NSError *))arg2;
- (oneway void)pictureInPictureStopRequestedAnimated:(_Bool)arg1 withCompletionHandler:(void (^)(_Bool, NSError *))arg2;
- (oneway void)pictureInPictureStartRequestedAnimated:(_Bool)arg1 withCompletionHandler:(void (^)(_Bool, NSError *))arg2;
@end

