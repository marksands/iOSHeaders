//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FileProvider/FPActionOperation.h>

#import "NSProgressReporting.h"

@class FPItem, NSFileCoordinator, NSMutableArray, NSOperationQueue, NSProgress, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface _FPCopyOrMoveOperation : FPActionOperation <NSProgressReporting>
{
    NSURL *_sourceURL;
    FPItem *_sourceItem;
    long long _sourceFileSize;
    NSProgress *_progress;
    FPItem *_destinationFolder;
    NSString *_destinationName;
    _Bool _isCopyOperation;
    _Bool _recursiveOperation;
    NSOperationQueue *_operationQueue;
    unsigned long long _lastUsedDatePolicy;
    _Bool _shouldBounceOnCollision;
    _Bool _shouldStopAccessingSourceURL;
    NSMutableArray *_childOperations;
    FPItem *_createdFolder;
    NSFileCoordinator *_fileCoordinator;
    CDUnknownBlockType _itemCreationBlock;
    CDUnknownBlockType _operationCompletionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType operationCompletionBlock; // @synthesize operationCompletionBlock=_operationCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType itemCreationBlock; // @synthesize itemCreationBlock=_itemCreationBlock;
@property(retain, nonatomic) NSFileCoordinator *fileCoordinator; // @synthesize fileCoordinator=_fileCoordinator;
@property(readonly, nonatomic) FPItem *createdFolder; // @synthesize createdFolder=_createdFolder;
@property(readonly) NSProgress *progress; // @synthesize progress=_progress;
- (void).cxx_destruct;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (oneway void)cancel;
- (void)mainWithExtensionProxy:(id)arg1;
- (_Bool)handleCollidingItemErrorIfNeeded:(id)arg1;
- (void)enumerateAndCopyChildren;
- (void)enumerateChildrenCopyOperations:(CDUnknownBlockType)arg1;
- (void)downloadItemIfNecessaryWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)resolveItemOrURLWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_incrementProgressBy:(unsigned long long)arg1;
- (id)initWithItem:(id)arg1 destinationFolder:(id)arg2 copyItem:(_Bool)arg3 lastUsageUpdatePolicy:(unsigned long long)arg4 bounceOnCollision:(_Bool)arg5 operationQueue:(id)arg6;
- (id)initWithURL:(id)arg1 destinationFolder:(id)arg2 name:(id)arg3 copyItem:(_Bool)arg4 lastUsageUpdatePolicy:(unsigned long long)arg5 bounceOnCollision:(_Bool)arg6 operationQueue:(id)arg7;
- (id)initWithProvider:(id)arg1 shouldBounceOnCollision:(_Bool)arg2 lastUsedDatePolicy:(unsigned long long)arg3 operationQueue:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

