//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@interface AWDMailComposeAttachmentReport : PBCodable <NSCopying>
{
    long long _drawingInsertCount;
    long long _drawingSentCount;
    unsigned long long _timestamp;
    _Bool _messageSent;
    struct {
        unsigned int drawingInsertCount:1;
        unsigned int drawingSentCount:1;
        unsigned int timestamp:1;
        unsigned int messageSent:1;
    } _has;
}

@property(nonatomic) _Bool messageSent; // @synthesize messageSent=_messageSent;
@property(nonatomic) long long drawingSentCount; // @synthesize drawingSentCount=_drawingSentCount;
@property(nonatomic) long long drawingInsertCount; // @synthesize drawingInsertCount=_drawingInsertCount;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasMessageSent;
@property(nonatomic) _Bool hasDrawingSentCount;
@property(nonatomic) _Bool hasDrawingInsertCount;
@property(nonatomic) _Bool hasTimestamp;

@end

