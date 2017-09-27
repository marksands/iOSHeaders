//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLock;

@interface PHAServiceCancelableOperation : NSObject
{
    NSLock *_mutex;
    CDUnknownBlockType _operationBlock;
    long long _operationId;
    // Error parsing type: Ai, name: _canceled
    CDUnknownBlockType _cancellationBlock;
}

+ (id)operationNotFoundError:(long long)arg1;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isCancelled;
- (id)operationCanceledError:(_Bool)arg1;
- (_Bool)cancel;
- (void)setCancellationBlock:(CDUnknownBlockType)arg1;
- (void)setOperationBlock:(CDUnknownBlockType)arg1;
- (void)start;
- (long long)operationId;
- (id)initWithLock:(id)arg1 operationId:(long long)arg2;

@end

