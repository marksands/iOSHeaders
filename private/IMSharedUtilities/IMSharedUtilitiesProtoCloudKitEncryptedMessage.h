//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <IMSharedUtilities/NSCopying-Protocol.h>

@class NSData, NSString;

@interface IMSharedUtilitiesProtoCloudKitEncryptedMessage : PBCodable <NSCopying>
{
    long long _associatedMessageType;
    unsigned long long _expireState;
    unsigned long long _timeDelivered;
    unsigned long long _timeExpressiveSentPlayed;
    unsigned long long _timePlayed;
    unsigned long long _timeRead;
    NSString *_associatedMessageGuid;
    unsigned int _associatedMessageRangeLength;
    unsigned int _associatedMessageRangeLocation;
    NSString *_baloonBundleId;
    NSString *_expressiveSendId;
    NSString *_messageBody;
    NSData *_messageBodyData;
    NSString *_messageSubject;
    NSData *_messageSummaryInfo;
    NSData *_padding;
    NSData *_payloadData;
    unsigned int _version;
    struct {
        unsigned int associatedMessageType:1;
        unsigned int expireState:1;
        unsigned int timeDelivered:1;
        unsigned int timeExpressiveSentPlayed:1;
        unsigned int timePlayed:1;
        unsigned int timeRead:1;
        unsigned int associatedMessageRangeLength:1;
        unsigned int associatedMessageRangeLocation:1;
        unsigned int version:1;
    } _has;
}

@property(nonatomic) unsigned int associatedMessageRangeLength; // @synthesize associatedMessageRangeLength=_associatedMessageRangeLength;
@property(nonatomic) unsigned int associatedMessageRangeLocation; // @synthesize associatedMessageRangeLocation=_associatedMessageRangeLocation;
@property(retain, nonatomic) NSString *associatedMessageGuid; // @synthesize associatedMessageGuid=_associatedMessageGuid;
@property(nonatomic) long long associatedMessageType; // @synthesize associatedMessageType=_associatedMessageType;
@property(nonatomic) unsigned long long expireState; // @synthesize expireState=_expireState;
@property(nonatomic) unsigned long long timeDelivered; // @synthesize timeDelivered=_timeDelivered;
@property(retain, nonatomic) NSData *padding; // @synthesize padding=_padding;
@property(nonatomic) unsigned long long timeExpressiveSentPlayed; // @synthesize timeExpressiveSentPlayed=_timeExpressiveSentPlayed;
@property(nonatomic) unsigned long long timePlayed; // @synthesize timePlayed=_timePlayed;
@property(nonatomic) unsigned long long timeRead; // @synthesize timeRead=_timeRead;
@property(retain, nonatomic) NSString *expressiveSendId; // @synthesize expressiveSendId=_expressiveSendId;
@property(retain, nonatomic) NSData *messageSummaryInfo; // @synthesize messageSummaryInfo=_messageSummaryInfo;
@property(retain, nonatomic) NSData *payloadData; // @synthesize payloadData=_payloadData;
@property(retain, nonatomic) NSString *baloonBundleId; // @synthesize baloonBundleId=_baloonBundleId;
@property(retain, nonatomic) NSData *messageBodyData; // @synthesize messageBodyData=_messageBodyData;
@property(retain, nonatomic) NSString *messageBody; // @synthesize messageBody=_messageBody;
@property(retain, nonatomic) NSString *messageSubject; // @synthesize messageSubject=_messageSubject;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasAssociatedMessageRangeLength;
@property(nonatomic) _Bool hasAssociatedMessageRangeLocation;
@property(readonly, nonatomic) _Bool hasAssociatedMessageGuid;
@property(nonatomic) _Bool hasAssociatedMessageType;
@property(nonatomic) _Bool hasExpireState;
@property(nonatomic) _Bool hasTimeDelivered;
@property(readonly, nonatomic) _Bool hasPadding;
@property(nonatomic) _Bool hasTimeExpressiveSentPlayed;
@property(nonatomic) _Bool hasTimePlayed;
@property(nonatomic) _Bool hasTimeRead;
@property(readonly, nonatomic) _Bool hasExpressiveSendId;
@property(readonly, nonatomic) _Bool hasMessageSummaryInfo;
@property(readonly, nonatomic) _Bool hasPayloadData;
@property(readonly, nonatomic) _Bool hasBaloonBundleId;
@property(readonly, nonatomic) _Bool hasMessageBodyData;
@property(readonly, nonatomic) _Bool hasMessageBody;
@property(readonly, nonatomic) _Bool hasMessageSubject;
@property(nonatomic) _Bool hasVersion;
- (void)dealloc;

@end

