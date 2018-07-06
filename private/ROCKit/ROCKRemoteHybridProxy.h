//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ROCKit/ROCKRemoteProxy.h>

#import "ROCKMemoizable.h"

@class NSObject<OS_dispatch_queue>, NSString;

__attribute__((visibility("hidden")))
@interface ROCKRemoteHybridProxy : ROCKRemoteProxy <ROCKMemoizable>
{
    id <ROCKMemoizable> _memoizedInstance;
}

+ (id)remoteProxyWithSessionManager:(id)arg1 xpcDictionary:(id)arg2;
@property(retain, nonatomic) id <ROCKMemoizable> memoizedInstance; // @synthesize memoizedInstance=_memoizedInstance;
- (void).cxx_destruct;
- (id)initWithSessionManager:(id)arg1 xpcDictionary:(id)arg2;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (_Bool)conformsToProtocol:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *memoizableSerializerQueue;
@property(readonly) Class superclass;

@end

