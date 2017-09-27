//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeKit/HMHomeInvitationData.h>

@class NSString, NSUUID;

@interface HMOutgoingHomeInvitationData : HMHomeInvitationData
{
    NSString *_inviteeUserID;
    NSString *_inviteeName;
    NSUUID *_inviteeUUID;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSUUID *inviteeUUID; // @synthesize inviteeUUID=_inviteeUUID;
@property(copy, nonatomic) NSString *inviteeName; // @synthesize inviteeName=_inviteeName;
@property(readonly, copy, nonatomic) NSString *inviteeUserID; // @synthesize inviteeUserID=_inviteeUserID;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUID:(id)arg1 inviteeUserID:(id)arg2 inviteeName:(id)arg3 invitationState:(long long)arg4 expiryDate:(id)arg5;

@end

