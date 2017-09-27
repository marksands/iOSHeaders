//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSXPCConnection;

@interface VMClientWrapper : NSObject
{
    id <VMClientXPCProtocol> _manager;
    NSXPCConnection *_clientConnection;
}

+ (_Bool)isVMXPCAvailable;
+ (id)voicemailClientXPCInterface;
+ (id)voicemailServerXPCInterface;
@property(retain, nonatomic) NSXPCConnection *clientConnection; // @synthesize clientConnection=_clientConnection;
@property(nonatomic) __weak id <VMClientXPCProtocol> manager; // @synthesize manager=_manager;
- (void).cxx_destruct;
- (void)_handleXPCConnectionEstablished:(id)arg1;
- (void)_handleXPCDisconnectNotification:(id)arg1;
- (void)dealloc;
- (id)init;

@end

