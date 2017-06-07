//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSProxy.h>

#import <GenerationalStorage/GSProtocol-Protocol.h>

@class NSError, NSObject;
@protocol GSProtocol;

@interface GSDaemonProxySync : NSProxy <GSProtocol>
{
    NSObject<GSProtocol> *_target;
    NSError *_error;
    id _result;
}

+ (id)proxy;
@property(retain, nonatomic) id result; // @synthesize result=_result;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;
- (struct __CFError *)copyCFError;
- (void)handleObjResult:(id)arg1 error:(id)arg2;
- (void)handleBoolResult:(_Bool)arg1 error:(id)arg2;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)finalize;
- (id)initWithXPCObject:(id)arg1;

@end

