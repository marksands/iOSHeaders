//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@protocol FCStreaming <NSObject>
@property(readonly, nonatomic, getter=isFinished) _Bool finished;
- (id <FCOperationCanceling>)fetchMoreResultsWithLimit:(unsigned long long)arg1 qualityOfService:(long long)arg2 callbackQueue:(NSObject<OS_dispatch_queue> *)arg3 completionHandler:(void (^)(NSArray *, NSError *))arg4;
@end

