//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CPLResourceTransferTask, NSArray, NSMapTable, NSString;

@interface PLCloudInMemoryDownloadTask : NSObject
{
    NSMapTable *_taskIDsToCompletionHandlers;
    _Bool _completed;
    NSString *_resourceID;
    CPLResourceTransferTask *_transferTask;
}

@property(readonly, nonatomic, getter=isCompleted) _Bool completed; // @synthesize completed=_completed;
@property(retain, nonatomic) CPLResourceTransferTask *transferTask; // @synthesize transferTask=_transferTask;
@property(readonly, copy, nonatomic) NSString *resourceID; // @synthesize resourceID=_resourceID;
- (void)reportCompletionWithData:(id)arg1 error:(id)arg2;
@property(readonly, nonatomic) NSArray *taskIDs;
- (void)cancelClientWithTaskID:(id)arg1;
- (void)addClientWithTaskID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithResourceID:(id)arg1 taskID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

