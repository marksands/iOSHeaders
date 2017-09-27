//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>, NTKFace, _NTKCompanionFaceSnapshottingWindow;

@interface NTKCompanionFaceRenderer : NSObject
{
    NSObject<OS_dispatch_queue> *_workQueue;
    _NTKCompanionFaceSnapshottingWindow *_window;
    _Bool _queueActive;
    NSMutableArray *_pendingTaskList;
    NTKFace *_currentFace;
    CDUnknownBlockType _faceBatchCompletionHandler;
}

+ (id)_storagePath;
+ (id)snapshotPathForFace:(id)arg1 detailMode:(long long)arg2;
+ (id)_snapshotNameForFace:(id)arg1 detailMode:(long long)arg2;
@property(copy, nonatomic) CDUnknownBlockType faceBatchCompletionHandler; // @synthesize faceBatchCompletionHandler=_faceBatchCompletionHandler;
@property(retain, nonatomic) NTKFace *currentFace; // @synthesize currentFace=_currentFace;
@property(nonatomic, getter=isQueueActive) _Bool queueActive; // @synthesize queueActive=_queueActive;
@property(retain, nonatomic) NSMutableArray *pendingTaskList; // @synthesize pendingTaskList=_pendingTaskList;
- (void).cxx_destruct;
- (void)_startNextWorkItem;
- (void)_notifyFinishedFaceBatchIfNeeded;
- (void)requestSnapshotOfFace:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;

@end

