//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class AWDHomeKitEventTrigger;

@interface AWDHomeKitAddEventTrigger : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    AWDHomeKitEventTrigger *_eventTrigger;
    int _requestOrigin;
    unsigned int _resultErrorCode;
    struct {
        unsigned int timestamp:1;
        unsigned int requestOrigin:1;
        unsigned int resultErrorCode:1;
    } _has;
}

@property(retain, nonatomic) AWDHomeKitEventTrigger *eventTrigger; // @synthesize eventTrigger=_eventTrigger;
@property(nonatomic) unsigned int resultErrorCode; // @synthesize resultErrorCode=_resultErrorCode;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
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
- (int)StringAsRequestOrigin:(id)arg1;
- (id)requestOriginAsString:(int)arg1;
@property(nonatomic) _Bool hasRequestOrigin;
@property(nonatomic) int requestOrigin; // @synthesize requestOrigin=_requestOrigin;
@property(readonly, nonatomic) _Bool hasEventTrigger;
@property(nonatomic) _Bool hasResultErrorCode;
@property(nonatomic) _Bool hasTimestamp;

@end

