//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NWConcrete_nw_connection, NWEndpoint, NWParameters, NWPath;

@interface NWConnection : NSObject
{
    _Bool _internalIsViable;
    _Bool _internalHasBetterPath;
    long long _internalConnectionState;
    NSError *_internalError;
    NWPath *_internalPath;
    NWConcrete_nw_connection *_internalConnection;
}

+ (id)connectionWithInternalConnection:(id)arg1;
+ (id)connectionWithConnectedSocket:(int)arg1;
+ (id)connectionWithEndpoint:(id)arg1 parameters:(id)arg2;
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
@property(retain, nonatomic) NWConcrete_nw_connection *internalConnection; // @synthesize internalConnection=_internalConnection;
@property(retain) NWPath *internalPath; // @synthesize internalPath=_internalPath;
@property(retain) NSError *internalError; // @synthesize internalError=_internalError;
@property _Bool internalHasBetterPath; // @synthesize internalHasBetterPath=_internalHasBetterPath;
@property _Bool internalIsViable; // @synthesize internalIsViable=_internalIsViable;
@property long long internalConnectionState; // @synthesize internalConnectionState=_internalConnectionState;
- (void).cxx_destruct;
- (void)dumpTimestamps;
@property(readonly, nonatomic) NWParameters *parameters;
@property(readonly, nonatomic) NWEndpoint *endpoint;
@property(readonly, nonatomic) NWPath *currentPath;
- (id)copyCurrentPath;
@property(readonly, nonatomic) NSError *error;
- (id)copyError;
@property(readonly, nonatomic) _Bool hasBetterPath;
@property(readonly, nonatomic, getter=isViable) _Bool viable;
@property(readonly, nonatomic) NWEndpoint *connectedRemoteEndpoint;
@property(readonly, nonatomic) NWEndpoint *connectedLocalEndpoint;
@property(readonly, nonatomic) long long connectionState;
@property(readonly, nonatomic) unsigned int tlsConnectionTime;
- (void)cancelCurrentEndpoint;
- (void)forceCancel;
- (void)cancel;
- (_Bool)startTLSWithSessionID:(id)arg1;
- (int)getConnectedSocket;
- (id)initWithInternalConnection:(id)arg1;
- (id)initWithConnectedSocket:(int)arg1;
- (id)initWithEndpoint:(id)arg1 parameters:(id)arg2;
- (void)start;

@end

