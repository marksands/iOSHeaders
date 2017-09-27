//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class NSProgress, PHAVisionServiceFaceProcessingWorker, PVCanceler;

@interface PHAPersonBuildingJobOperation : NSOperation
{
    id <PHAPersonBuildingJobOperationDelegate> _delegate;
    PHAVisionServiceFaceProcessingWorker *_faceProcessingWorker;
    PVCanceler *_canceler;
    NSProgress *_progress;
    float _percentComplete;
}

- (void).cxx_destruct;
- (float)percentComplete;
- (void)cancel;
- (void)main;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)initWithFaceProcessingWorker:(id)arg1;

@end

