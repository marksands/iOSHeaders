//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CAMIrisVideoController, CAMStillImageCaptureRequest, CAMVideoCaptureResult, CAMVideoLocalPersistenceResult;

@protocol CAMIrisVideoControllerDelegate <NSObject>
- (void)irisVideoController:(CAMIrisVideoController *)arg1 didPersistVideoCaptureResult:(CAMVideoLocalPersistenceResult *)arg2 forCaptureResult:(CAMVideoCaptureResult *)arg3 request:(CAMStillImageCaptureRequest *)arg4;
- (double)irisVideoController:(CAMIrisVideoController *)arg1 willPersistVideoCaptureResult:(CAMVideoCaptureResult *)arg2 forRequest:(CAMStillImageCaptureRequest *)arg3;
@end

