//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDPParticipant, CKDPRecordType, NSData, NSString;

@interface CKDPShareMetadata : PBCodable <NSCopying>
{
    CKDPParticipant *_callerParticipant;
    CKDPParticipant *_ownerParticipant;
    int _participantPermission;
    int _participantState;
    int _participantType;
    NSData *_protectedFullToken;
    CKDPRecordType *_rootRecordType;
    NSString *_routingKey;
    struct {
        unsigned int participantPermission:1;
        unsigned int participantState:1;
        unsigned int participantType:1;
    } _has;
}

@property(retain, nonatomic) CKDPRecordType *rootRecordType; // @synthesize rootRecordType=_rootRecordType;
@property(retain, nonatomic) CKDPParticipant *callerParticipant; // @synthesize callerParticipant=_callerParticipant;
@property(retain, nonatomic) CKDPParticipant *ownerParticipant; // @synthesize ownerParticipant=_ownerParticipant;
@property(retain, nonatomic) NSData *protectedFullToken; // @synthesize protectedFullToken=_protectedFullToken;
@property(retain, nonatomic) NSString *routingKey; // @synthesize routingKey=_routingKey;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasRootRecordType;
- (int)StringAsParticipantType:(id)arg1;
- (id)participantTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasParticipantType;
@property(nonatomic) int participantType; // @synthesize participantType=_participantType;
- (int)StringAsParticipantState:(id)arg1;
- (id)participantStateAsString:(int)arg1;
@property(nonatomic) _Bool hasParticipantState;
@property(nonatomic) int participantState; // @synthesize participantState=_participantState;
- (int)StringAsParticipantPermission:(id)arg1;
- (id)participantPermissionAsString:(int)arg1;
@property(nonatomic) _Bool hasParticipantPermission;
@property(nonatomic) int participantPermission; // @synthesize participantPermission=_participantPermission;
@property(readonly, nonatomic) _Bool hasCallerParticipant;
@property(readonly, nonatomic) _Bool hasOwnerParticipant;
@property(readonly, nonatomic) _Bool hasProtectedFullToken;
@property(readonly, nonatomic) _Bool hasRoutingKey;
- (id)_participantTypeCKLogValue;
- (id)_participantStateCKLogValue;
- (id)_participantPermissionCKLogValue;

@end

