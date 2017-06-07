//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GKPlayer, GKTurnBasedParticipantInternal, NSDate, NSString;

@interface GKTurnBasedParticipant : NSObject
{
    GKTurnBasedParticipantInternal *_internal;
}

+ (_Bool)instancesRespondToSelector:(SEL)arg1;
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (_Bool)matchOutcomeIsValidForDoneState:(long long)arg1;
+ (id)keyPathsForValuesAffectingMatchOutcomeString;
+ (id)stringForMatchOutcome:(long long)arg1;
+ (id)keyPathsForValuesAffectingBasicMatchOutcomeString;
+ (id)keyPathsForValuesAffectingStatus;
@property(readonly, retain) GKTurnBasedParticipantInternal *internal; // @synthesize internal=_internal;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
@property(readonly, nonatomic) _Bool isLocalPlayer;
@property(readonly, copy, nonatomic) NSString *playerID;
@property(readonly, retain, nonatomic) GKPlayer *player; // @dynamic player;
@property(readonly, nonatomic) GKPlayer *invitedBy; // @dynamic invitedBy;
@property(copy, nonatomic) NSDate *lastTurnDate; // @dynamic lastTurnDate;
@property(readonly, nonatomic) _Bool isWinner;
@property(readonly, nonatomic) NSString *matchOutcomeString;
- (id)matchOutcomeStringForLocalPlayer;
- (id)basicMatchOutcomeString;
@property(readonly, nonatomic) NSString *matchStatusString;
- (void)setStatus:(long long)arg1;
@property(readonly, nonatomic) long long status;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)init;
- (id)initWithInternalRepresentation:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) NSString *inviteMessage; // @dynamic inviteMessage;
@property(nonatomic) long long matchOutcome; // @dynamic matchOutcome;
@property(copy, nonatomic) NSDate *timeoutDate; // @dynamic timeoutDate;

@end

