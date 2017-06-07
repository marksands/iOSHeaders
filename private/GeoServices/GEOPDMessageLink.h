//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOTimezone, NSMutableArray, NSString, PBUnknownFields;

@interface GEOPDMessageLink : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_hoursOfOperations;
    NSString *_messageId;
    NSString *_messageUrl;
    int _responseTime;
    GEOTimezone *_timezone;
    struct {
        unsigned int responseTime:1;
    } _has;
}

+ (Class)hoursOfOperationType;
+ (id)messageLinkForPlaceData:(id)arg1;
@property(retain, nonatomic) GEOTimezone *timezone; // @synthesize timezone=_timezone;
@property(retain, nonatomic) NSMutableArray *hoursOfOperations; // @synthesize hoursOfOperations=_hoursOfOperations;
@property(retain, nonatomic) NSString *messageUrl; // @synthesize messageUrl=_messageUrl;
@property(retain, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasTimezone;
- (id)hoursOfOperationAtIndex:(unsigned long long)arg1;
- (unsigned long long)hoursOfOperationsCount;
- (void)addHoursOfOperation:(id)arg1;
- (void)clearHoursOfOperations;
- (int)StringAsResponseTime:(id)arg1;
- (id)responseTimeAsString:(int)arg1;
@property(nonatomic) _Bool hasResponseTime;
@property(nonatomic) int responseTime; // @synthesize responseTime=_responseTime;
@property(readonly, nonatomic) _Bool hasMessageUrl;
@property(readonly, nonatomic) _Bool hasMessageId;

@end

