//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CAMCaptureRequest, CAMStillImageCaptureCoordinationInfo, CAMStillImageLocalPersistenceResult, CAMStillImagePersistenceCoordinator;

@protocol CAMStillImagePersistenceCoordinatorDelegate <NSObject>
- (void)stillImagePersistenceCoordinator:(CAMStillImagePersistenceCoordinator *)arg1 requestsTimeoutScheduledForDeferredRemotePersistenceForCoordinationInfo:(CAMStillImageCaptureCoordinationInfo *)arg2 request:(CAMCaptureRequest *)arg3;
- (void)stillImagePersistenceCoordinator:(CAMStillImagePersistenceCoordinator *)arg1 requestsRemotePersistenceForLocalPersistenceResult:(CAMStillImageLocalPersistenceResult *)arg2 fullsizeRenderLocalResult:(CAMStillImageLocalPersistenceResult *)arg3 request:(CAMCaptureRequest *)arg4 powerAssertionReason:(unsigned int)arg5;
@end

