//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSXPCConnection;
@protocol ADAdSheetConnectionDelegate, OS_dispatch_queue;

@interface ADAdSheetConnection : NSObject
{
    id <ADAdSheetConnectionDelegate> _delegate;
    NSMutableArray *_performWhenConnectedBlocks;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSXPCConnection *_adSheetConnection;
}

@property(retain, nonatomic) NSXPCConnection *adSheetConnection; // @synthesize adSheetConnection=_adSheetConnection;
@property(nonatomic) NSObject<OS_dispatch_queue> *connectionQueue; // @synthesize connectionQueue=_connectionQueue;
@property(retain, nonatomic) NSMutableArray *performWhenConnectedBlocks; // @synthesize performWhenConnectedBlocks=_performWhenConnectedBlocks;
- (void)invalidate;
- (void)_considerConnectingToAdSheet;
- (void)considerConnectingToAdSheet;
- (id)rpcProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)rpcProxy;
- (void)performWhenConnected:(CDUnknownBlockType)arg1;
- (void)withAssertion:(id)arg1 performWhenConnected:(CDUnknownBlockType)arg2;
@property(nonatomic) __weak id <ADAdSheetConnectionDelegate> delegate;
- (id)init;
- (void)dealloc;

@end

