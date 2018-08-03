//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSXPCListenerDelegate.h"

@class NSArray, NSString, NSXPCConnection;

__attribute__((visibility("hidden")))
@interface HapticClient : NSObject <NSXPCListenerDelegate>
{
    NSXPCConnection *_connection;
    struct unique_ptr<ClientSyncCaller, std::__1::default_delete<ClientSyncCaller>> _syncCaller;
    struct HapticSharedMemory _sharedBuffer;
    unsigned long long _uniqueID;
    int _serverTimeout;
    CDUnknownBlockType _connectionCallback;
    _Bool _prewarmed;
    _Bool _running;
    _Bool _connected;
    int _serverProcessID;
    id <ServerInterface> _serverDelegate;
    unsigned long long _clientID;
    NSArray *_channelKeys;
}

@property int serverProcessID; // @synthesize serverProcessID=_serverProcessID;
@property(copy) CDUnknownBlockType connectionCallback; // @synthesize connectionCallback=_connectionCallback;
@property _Bool connected; // @synthesize connected=_connected;
@property(readonly) _Bool running; // @synthesize running=_running;
@property(readonly) _Bool prewarmed; // @synthesize prewarmed=_prewarmed;
@property(readonly) NSArray *channelKeys; // @synthesize channelKeys=_channelKeys;
@property(readonly) unsigned long long clientID; // @synthesize clientID=_clientID;
@property(retain) id <ServerInterface> serverDelegate; // @synthesize serverDelegate=_serverDelegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)destroySharedMemory;
- (int)setupSharedMemory:(id)arg1 size:(unsigned int)arg2;
- (void)handleServerConnectionInvalidation;
- (void)handleServerConnectionInterruption;
- (_Bool)setNumberOfChannels:(unsigned long long)arg1 error:(id *)arg2;
- (_Bool)setPlayerBehavior:(unsigned long long)arg1 error:(id *)arg2;
- (void)setChannelKeys:(id)arg1;
- (void)disconnect;
- (id)getAsyncDelegateForMethod:(SEL)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (_Bool)setupConnectionAndReturnError:(id *)arg1;
- (void)doInit;
- (void)releaseResources;
- (_Bool)detachHapticSequence:(unsigned long long)arg1 atTime:(double)arg2;
- (_Bool)setSequenceParameter:(unsigned long long)arg1 atTime:(double)arg2 value:(float)arg3 sequenceID:(unsigned long long)arg4 channel:(unsigned long long)arg5;
- (_Bool)stopHapticSequence:(unsigned long long)arg1 atTime:(double)arg2;
- (_Bool)startHapticSequence:(unsigned long long)arg1 atTime:(double)arg2 withOffset:(double)arg3;
- (_Bool)enableSequenceLooping:(unsigned long long)arg1 enable:(_Bool)arg2 error:(id *)arg3;
- (_Bool)prepareHapticSequence:(unsigned long long)arg1 error:(id *)arg2;
- (_Bool)loadHapticPattern:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (_Bool)loadHapticSequence:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (_Bool)setParameter:(unsigned long long)arg1 atTime:(double)arg2 value:(float)arg3 channel:(unsigned long long)arg4;
- (_Bool)clearEventsFromTime:(double)arg1 channel:(unsigned long long)arg2;
- (_Bool)stopEventWithToken:(unsigned long long)arg1 atTime:(double)arg2 channel:(unsigned long long)arg3;
- (_Bool)sendEvents:(id)arg1 atTime:(double)arg2 channel:(unsigned long long)arg3 outToken:(unsigned long long *)arg4 error:(id *)arg5;
- (_Bool)startEventAndReturnToken:(unsigned long long)arg1 type:(unsigned long long)arg2 atTime:(double)arg3 channel:(unsigned long long)arg4 eventToken:(unsigned long long *)arg5;
- (_Bool)setChannelEventBehavior:(unsigned long long)arg1 channel:(unsigned long long)arg2;
- (_Bool)finish:(CDUnknownBlockType)arg1;
- (void)stopRunning;
- (void)startRunning:(CDUnknownBlockType)arg1;
- (void)stopPrewarm;
- (void)prewarm:(CDUnknownBlockType)arg1;
- (_Bool)loadHapticEvent:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)allocateResources:(CDUnknownBlockType)arg1;
@property(readonly) double hapticLatency;
- (void)dealloc;
- (id)initAndReturnError:(id *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

