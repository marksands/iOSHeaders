//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, _IDSSession;

@interface IDSSession : NSObject
{
    _IDSSession *_internal;
}

- (void).cxx_destruct;
- (unsigned long long)MTUForAddressFamily:(unsigned long long)arg1;
- (_Bool)shouldUseSocketForTransport;
- (void)setPreferences:(id)arg1;
@property(readonly, nonatomic) unsigned int sessionEndedReason;
@property(nonatomic) long long invitationTimeOut;
- (_Bool)sendData:(id)arg1 error:(id *)arg2;
@property(nonatomic) _Bool isMuted;
@property(nonatomic) _Bool isAudioEnabled;
- (void)sendAllocationRequest:(id)arg1;
- (void)sendSessionMessage:(id)arg1;
- (void)endSessionWithData:(id)arg1;
- (void)endSession;
- (void)declineInvitation;
- (void)acceptInvitation;
- (void)cancelInvitation;
- (void)declineInvitationWithData:(id)arg1;
- (void)acceptInvitationWithData:(id)arg1;
- (void)cancelInvitationWithData:(id)arg1;
- (void)cancelInvitationWithRemoteEndedReasonOverride:(unsigned int)arg1;
- (id)_streamPreferences;
- (void)setStreamPreferences:(id)arg1;
- (void)sendInvitationWithData:(id)arg1 declineOnError:(_Bool)arg2;
- (void)sendInvitationWithData:(id)arg1;
- (void)sendInvitationWithOptions:(id)arg1;
- (void)sendInvitation;
- (unsigned long long)initialLinkType;
- (id)_internal;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (unsigned int)state;
- (id)description;
@property(readonly, nonatomic) NSString *destination;
@property(readonly, nonatomic) NSString *sessionID;
@property(readonly, nonatomic) int socket;
- (void)dealloc;
- (id)initWithAccount:(id)arg1 destinations:(id)arg2 options:(id)arg3;
- (id)_initWithAccount:(id)arg1 destinations:(id)arg2 transportType:(long long)arg3 uniqueID:(id)arg4;
- (id)initWithAccount:(id)arg1 destinations:(id)arg2 transportType:(long long)arg3;

@end

