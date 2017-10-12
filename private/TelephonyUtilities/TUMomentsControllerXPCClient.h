//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TUMomentsControllerDataSource.h"
#import "TUMomentsControllerXPCClient.h"

@class NSObject<OS_dispatch_queue>, NSString, NSXPCConnection;

@interface TUMomentsControllerXPCClient : NSObject <TUMomentsControllerXPCClient, TUMomentsControllerDataSource>
{
    int _token;
    id <TUMomentsControllerDataSourceDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_xpcConnection;
}

+ (id)momentsControllerServerXPCInterface;
+ (id)momentsControllerClientXPCInterface;
+ (void)setSynchronousServer:(id)arg1;
+ (id)synchronousServer;
+ (void)setAsynchronousServer:(id)arg1;
+ (id)asynchronousServer;
@property(readonly, nonatomic) int token; // @synthesize token=_token;
@property(retain, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <TUMomentsControllerDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (oneway void)didReceiveLocallyRequestedMomentDescriptor:(id)arg1;
- (oneway void)willCaptureRemoteRequest;
- (oneway void)didUpdateCapabilities:(id)arg1 forVideoStreamToken:(long long)arg2;
- (id)synchronousServerWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)serverWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)_registerConnection;
- (void)invalidate;
- (void)endRequestWithTransactionID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)startRequestWithMediaType:(int)arg1 forStreamToken:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)unregisterStreamToken:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)registerStreamToken:(long long)arg1 remoteIDSDestination:(id)arg2 remoteMomentsAvailable:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
