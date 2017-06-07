//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CameraUI/CAMNebulaDaemonBundleIdentifierProtocol-Protocol.h>
#import <CameraUI/CAMNebulaDaemonClientProtocol-Protocol.h>
#import <CameraUI/NSXPCConnectionDelegate-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString, NSXPCConnection, Protocol;
@protocol CAMNebulaDaemonConnectionManagerDelegate, OS_dispatch_queue;

@interface CAMNebulaDaemonConnectionManager : NSObject <NSXPCConnectionDelegate, CAMNebulaDaemonClientProtocol, CAMNebulaDaemonBundleIdentifierProtocol>
{
    id <CAMNebulaDaemonConnectionManagerDelegate> _delegate;
    NSString *_clientAccess;
    Protocol *_allowedProtocol;
    NSString *_bundleIdentifier;
    NSXPCConnection *__connection;
    NSString *__name;
    NSObject<OS_dispatch_queue> *__queue;
    NSMutableDictionary *__tasksPerIdentifier;
    NSMutableArray *__registeredTargets;
    NSMutableArray *__registeredProtocols;
}

+ (id)_clientProtocolInterface;
+ (id)_daemonProtocolInterface;
@property(readonly, nonatomic) NSMutableArray *_registeredProtocols; // @synthesize _registeredProtocols=__registeredProtocols;
@property(readonly, nonatomic) NSMutableArray *_registeredTargets; // @synthesize _registeredTargets=__registeredTargets;
@property(readonly, nonatomic) NSMutableDictionary *_tasksPerIdentifier; // @synthesize _tasksPerIdentifier=__tasksPerIdentifier;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *_queue; // @synthesize _queue=__queue;
@property(readonly, copy, nonatomic) NSString *_name; // @synthesize _name=__name;
@property(readonly, nonatomic) NSXPCConnection *_connection; // @synthesize _connection=__connection;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly, copy, nonatomic) Protocol *allowedProtocol; // @synthesize allowedProtocol=_allowedProtocol;
@property(readonly, copy, nonatomic) NSString *clientAccess; // @synthesize clientAccess=_clientAccess;
@property(nonatomic) __weak id <CAMNebulaDaemonConnectionManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)nebulaDaemonDidCompleteLocalVideoPersistenceWithResult:(id)arg1;
- (void)forceStopTimelapseCaptureWithReasons:(long long)arg1;
- (void)_getProxyForExecutingBlock:(CDUnknownBlockType)arg1;
- (void)pingAfterInterruption;
- (id)_targetsForSelector:(SEL)arg1;
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(_Bool)arg3;
- (void)addTarget:(id)arg1 forProtocol:(id)arg2;
@property(readonly, copy) NSString *description;
- (id)initWithConnection:(id)arg1 name:(id)arg2 bundleIdentifier:(id)arg3 queue:(id)arg4 clientAccess:(id)arg5 allowedProtocol:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

