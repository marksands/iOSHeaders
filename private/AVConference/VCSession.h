//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <AVConference/RTCPReportProvider-Protocol.h>
#import <AVConference/VCMediaStreamNotification-Protocol.h>
#import <AVConference/VCSecurityEventHandler-Protocol.h>
#import <AVConference/VCSessionParticipantStreamDelegate-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString, VCDatagramChannelIDS, VCSecurityKeyManager, VCSessionConfiguration, VCSessionParticipant;
@protocol OS_dispatch_queue, VCSessionDelegate;

__attribute__((visibility("hidden")))
@interface VCSession : NSObject <VCSessionParticipantStreamDelegate, VCMediaStreamNotification, RTCPReportProvider, VCSecurityEventHandler>
{
    unsigned int _state;
    NSObject<OS_dispatch_queue> *_sessionQueue;
    id <VCSessionDelegate> _delegate;
    NSString *_idsDestination;
    VCSessionConfiguration *_configuration;
    VCSessionParticipant *_localParticipant;
    NSMutableDictionary *_remoteParticipants;
    struct opaqueRTCReporting *_reportingAgent;
    NSMutableArray *_startingParticipants;
    NSMutableArray *_stoppingParticipants;
    NSMutableArray *_initializingParticipants;
    VCDatagramChannelIDS *_datagramChannel;
    VCSecurityKeyManager *_securityKeyManager;
    _Bool _localSourceNeedsReset;
    _Bool _encryptionInfoReceived;
    _Bool _useReducedSizeRTCP;
}

@property(readonly, nonatomic) NSString *idsDestination; // @synthesize idsDestination=_idsDestination;
@property(readonly, nonatomic) VCSessionParticipant *localParticipant; // @synthesize localParticipant=_localParticipant;
- (void)dispatchedParticipant:(id)arg1 didStopWithError:(id)arg2;
- (void)dispatchedParticipant:(id)arg1 didStart:(_Bool)arg2 error:(id)arg3;
- (void)stopAllParticipants;
- (void)dispatchedUpdateConfiguration:(id)arg1;
- (void)dispatchedStop;
- (void)dispatchedStart;
- (void)dispatchedRemoveParticipant:(id)arg1;
- (void)dispatchedAddParticipant:(id)arg1;
- (void)reportingSessionParticipantEvent:(unsigned short)arg1 withParticipant:(id)arg2 streamID:(unsigned int)arg3 keyChangeReason:(id)arg4 newMKI:(id)arg5;
- (void)reportingSessionParticipantEvent:(unsigned short)arg1 keyChangeReason:(id)arg2 newMKI:(id)arg3;
- (void)reportingSessionParticipantEvent:(unsigned short)arg1 withParticipant:(id)arg2;
- (void)handleEncryptionInfoChange:(id)arg1;
- (_Bool)generateReceptionReportList:(struct _RTCP_RECEPTION_REPORT *)arg1 reportCount:(char *)arg2;
- (void)mediaStream:(id)arg1 didReceiveNewMasterKeyIndex:(unsigned int)arg2;
- (void)didReceiveRTCPPackets:(struct _RTCPPacketList *)arg1;
- (void)didReceiveCustomReportPacket:(struct tagRTCPPACKET *)arg1 arrivalNTPTime:(union tagNTP)arg2;
- (void)didReceiveReportPacket:(struct tagRTCPPACKET *)arg1 arrivalNTPTime:(union tagNTP)arg2;
- (void)unregisterRTCPCallbackForParticipant:(id)arg1;
- (void)registerRTCPCallbackForParticipant:(id)arg1;
- (void)unregisterRemoteParticipant:(id)arg1;
- (void)registerRemoteParticipant:(id)arg1;
- (void)handleIDSMembershipChangeInfoEvent:(id)arg1;
- (void)handleIDSEncryptionInfoEvent:(id)arg1;
- (_Bool)detectSSRCCollision:(id)arg1 resetNeeded:(_Bool *)arg2;
- (_Bool)createDatagramChannel;
- (void)optOutStreamWithIDSStreamIDs:(id)arg1;
- (void)optInStreamWithIDSStreamIDs:(id)arg1;
- (void)updateLocalStreamConfiguration;
- (void)vcSessionParticipant:(id)arg1 didStopWithError:(id)arg2;
- (void)vcSessionParticipant:(id)arg1 didStart:(_Bool)arg2 error:(id)arg3;
- (void)updateConfiguration:(id)arg1;
- (void)stop;
- (void)start;
- (void)removeParticipant:(id)arg1;
- (void)addParticipant:(id)arg1;
@property(readonly, nonatomic) id <VCSessionDelegate> delegate;
- (id)participantsToString;
@property(readonly, copy) NSString *description;
- (char *)sessionStateToString:(unsigned int)arg1;
- (void)setState:(unsigned int)arg1;
- (void)dealloc;
- (id)initWithIDSDestination:(id)arg1 configurationDict:(id)arg2 delegate:(id)arg3 localParticipant:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

