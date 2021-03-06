//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

__attribute__((visibility("hidden")))
@interface SYLogEngineState : PBCodable <NSCopying>
{
    int _type;
    _Bool _buffersSessions;
    _Bool _inSession;
    _Bool _suspended;
    struct {
        unsigned int buffersSessions:1;
        unsigned int inSession:1;
        unsigned int suspended:1;
    } _has;
}

@property(nonatomic) _Bool buffersSessions; // @synthesize buffersSessions=_buffersSessions;
@property(nonatomic) _Bool inSession; // @synthesize inSession=_inSession;
@property(nonatomic) _Bool suspended; // @synthesize suspended=_suspended;
@property(nonatomic) int type; // @synthesize type=_type;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasBuffersSessions;
@property(nonatomic) _Bool hasInSession;
@property(nonatomic) _Bool hasSuspended;
- (int)StringAsType:(id)arg1;
- (id)typeAsString:(int)arg1;

@end

