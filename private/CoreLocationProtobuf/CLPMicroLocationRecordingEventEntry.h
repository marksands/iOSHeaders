//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSData, NSString;

@interface CLPMicroLocationRecordingEventEntry : PBCodable <NSCopying>
{
    double _receivedTimestamp;
    double _recordingTimestamp;
    NSData *_recordingEventProtobuf;
    int _recordingEventType;
    NSString *_recordingUUID;
    NSString *_rtLOI;
    struct {
        unsigned int receivedTimestamp:1;
        unsigned int recordingTimestamp:1;
        unsigned int recordingEventType:1;
    } _has;
}

@property(retain, nonatomic) NSData *recordingEventProtobuf; // @synthesize recordingEventProtobuf=_recordingEventProtobuf;
@property(nonatomic) double receivedTimestamp; // @synthesize receivedTimestamp=_receivedTimestamp;
@property(retain, nonatomic) NSString *rtLOI; // @synthesize rtLOI=_rtLOI;
@property(nonatomic) double recordingTimestamp; // @synthesize recordingTimestamp=_recordingTimestamp;
@property(retain, nonatomic) NSString *recordingUUID; // @synthesize recordingUUID=_recordingUUID;
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
- (int)StringAsRecordingEventType:(id)arg1;
- (id)recordingEventTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasRecordingEventType;
@property(nonatomic) int recordingEventType; // @synthesize recordingEventType=_recordingEventType;
@property(readonly, nonatomic) _Bool hasRecordingEventProtobuf;
@property(nonatomic) _Bool hasReceivedTimestamp;
@property(readonly, nonatomic) _Bool hasRtLOI;
@property(nonatomic) _Bool hasRecordingTimestamp;
@property(readonly, nonatomic) _Bool hasRecordingUUID;

@end

