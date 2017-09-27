//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AXIDCRemoteController.h"

#import "AXHARemoteControllerProtocol.h"

@class AXHADispatchTimer, NSObject<OS_dispatch_queue>, NSString;

@interface AXHARemoteController : AXIDCRemoteController <AXHARemoteControllerProtocol>
{
    NSObject<OS_dispatch_queue> *_receivedPacketQueue;
    _Bool didValidateHIID;
    AXHADispatchTimer *_communicationTimer;
}

@property(retain, nonatomic) AXHADispatchTimer *communicationTimer; // @synthesize communicationTimer=_communicationTimer;
@property(nonatomic) _Bool didValidateHIID; // @synthesize didValidateHIID;
- (void).cxx_destruct;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)sendDataChunk;
- (_Bool)sendObject:(id)arg1 withSendCompletion:(CDUnknownBlockType)arg2;
- (void)receivedData:(id)arg1;
- (_Bool)outputStreamReady;
- (void)didCommunicate;
- (void)validatePairedAid;
- (void)closeConnectionWithError:(id)arg1;
- (void)acceptConnection:(int)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

