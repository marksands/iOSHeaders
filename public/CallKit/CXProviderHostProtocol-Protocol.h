//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CXAction, CXCallFailureContext, CXCallUpdate, CXProviderConfiguration, NSData, NSDate, NSString, NSUUID;

@protocol CXProviderHostProtocol <NSObject>
- (oneway void)actionCompleted:(CXAction *)arg1;
- (oneway void)reportCallWithUUID:(NSUUID *)arg1 crossDeviceIdentifier:(NSString *)arg2 changedBytesOfDataUsed:(long long)arg3;
- (oneway void)reportCallWithUUID:(NSUUID *)arg1 changedFrequencyData:(NSData *)arg2 forDirection:(long long)arg3;
- (oneway void)reportAudioFinishedForCallWithUUID:(NSUUID *)arg1;
- (oneway void)reportOutgoingCallWithUUID:(NSUUID *)arg1 connectedAtDate:(NSDate *)arg2;
- (oneway void)reportOutgoingCallWithUUID:(NSUUID *)arg1 startedConnectingAtDate:(NSDate *)arg2;
- (oneway void)reportOutgoingCallWithUUID:(NSUUID *)arg1 sentInvitationAtDate:(NSDate *)arg2;
- (oneway void)reportCallWithUUID:(NSUUID *)arg1 endedAtDate:(NSDate *)arg2 privateReason:(long long)arg3 failureContext:(CXCallFailureContext *)arg4;
- (oneway void)reportCallWithUUID:(NSUUID *)arg1 updated:(CXCallUpdate *)arg2;
- (oneway void)reportNewIncomingCallWithUUID:(NSUUID *)arg1 update:(CXCallUpdate *)arg2 reply:(void (^)(NSError *))arg3;
- (oneway void)registerWithConfiguration:(CXProviderConfiguration *)arg1;
@end

