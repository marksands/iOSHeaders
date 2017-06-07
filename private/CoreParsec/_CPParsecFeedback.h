//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/NSCopying-Protocol.h>

@class _CPFeedbackPayload;

@interface _CPParsecFeedback : PBCodable <NSCopying>
{
    unsigned long long _clientQueryId;
    long long _queryId;
    unsigned long long _relTimestamp;
    _CPFeedbackPayload *_payload;
    struct {
        unsigned int clientQueryId:1;
        unsigned int queryId:1;
        unsigned int relTimestamp:1;
    } _has;
}

@property(nonatomic) unsigned long long relTimestamp; // @synthesize relTimestamp=_relTimestamp;
@property(nonatomic) unsigned long long clientQueryId; // @synthesize clientQueryId=_clientQueryId;
@property(nonatomic) long long queryId; // @synthesize queryId=_queryId;
@property(retain, nonatomic) _CPFeedbackPayload *payload; // @synthesize payload=_payload;
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
@property(nonatomic) _Bool hasRelTimestamp;
@property(nonatomic) _Bool hasClientQueryId;
@property(nonatomic) _Bool hasQueryId;
@property(readonly, nonatomic) _Bool hasPayload;

@end
