//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTimer, NSURL;
@protocol OS_dispatch_group, OS_dispatch_queue, WBSCoalescedAsynchronousWriterDelegate;

@interface WBSCoalescedAsynchronousWriter : NSObject
{
    NSObject<OS_dispatch_queue> *_diskAccessQueue;
    NSURL *_fileURL;
    CDUnknownBlockType _writerBlock;
    CDUnknownBlockType _dataSourceBlock;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSTimer *_timer;
    double _writeDelayInterval;
    NSObject<OS_dispatch_group> *_writeGroup;
    struct unique_ptr<SafariShared::SuddenTerminationDisabler, std::__1::default_delete<SafariShared::SuddenTerminationDisabler>> _suddenTerminationDisabler;
    _Bool _done;
    id <WBSCoalescedAsynchronousWriterDelegate> _delegate;
}

@property(nonatomic) __weak id <WBSCoalescedAsynchronousWriterDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)cancelPendingWriteSynchronously;
- (void)completePendingWriteSynchronously;
- (void)startScheduledWriteNow;
- (void)scheduleWrite;
- (void)_cancelPendingWriteSynchronouslyLeavingSuddenTerminationIntact;
- (void)_writeDataAsynchronously:(id)arg1;
- (void)_writeData:(id)arg1;
- (void)_waitForWriteCompletion;
- (void)_writeDataFromDataSourceAsynchronously;
- (void)_scheduleTimer;
- (void)_timerFired:(id)arg1;
- (void)_invalidateTimer;
- (void)dealloc;
- (id)_initWithName:(id)arg1 fileURL:(id)arg2 writerBlock:(CDUnknownBlockType)arg3 dataSourceBlock:(CDUnknownBlockType)arg4;
- (id)initWithName:(id)arg1 writerBlock:(CDUnknownBlockType)arg2 dataSourceBlock:(CDUnknownBlockType)arg3;
- (id)initWithName:(id)arg1 fileURL:(id)arg2 dataSourceBlock:(CDUnknownBlockType)arg3;

@end

