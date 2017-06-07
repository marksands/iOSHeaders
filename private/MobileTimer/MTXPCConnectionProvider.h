//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MTXPCConnectionInfo, NSDate, NSXPCConnection;
@protocol NAScheduler;

@interface MTXPCConnectionProvider : NSObject
{
    MTXPCConnectionInfo *_info;
    CDUnknownBlockType _errorHandler;
    CDUnknownBlockType _reconnectHandler;
    id <NAScheduler> _serializer;
    NSXPCConnection *_connection;
    NSDate *_lastLifecycleNotification;
}

+ (id)providerWithConnectionInfo:(id)arg1 reconnectHandler:(CDUnknownBlockType)arg2;
+ (id)providerWithConnectionInfo:(id)arg1 errorHandler:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) NSDate *lastLifecycleNotification; // @synthesize lastLifecycleNotification=_lastLifecycleNotification;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) id <NAScheduler> serializer; // @synthesize serializer=_serializer;
@property(copy, nonatomic) CDUnknownBlockType reconnectHandler; // @synthesize reconnectHandler=_reconnectHandler;
@property(copy, nonatomic) CDUnknownBlockType errorHandler; // @synthesize errorHandler=_errorHandler;
@property(retain, nonatomic) MTXPCConnectionInfo *info; // @synthesize info=_info;
- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)_remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)performRemoteBlock:(CDUnknownBlockType)arg1 withErrorHandler:(CDUnknownBlockType)arg2;
- (void)performRemoteBlock:(CDUnknownBlockType)arg1;
- (void)_retryConnectionWithRecover:(_Bool)arg1;
- (id)_retryConnection;
- (void)didReceiveLifecycleNotification;
- (void)_didTerminateConnection;
- (void)_didInvalidateConnection;
- (void)_didInterruptConnection;
- (id)initWithConnectionInfo:(id)arg1 errorHandler:(CDUnknownBlockType)arg2 reconnectHandler:(CDUnknownBlockType)arg3;

@end

