//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreSuggestionsInternals/NSCopying-Protocol.h>

@interface SGDCKTimeRange : PBCodable <NSCopying>
{
    double _end;
    long long _endUTCOffsetSeconds;
    double _start;
    long long _startUTCOffsetSeconds;
    _Bool _floating;
    struct {
        unsigned int end:1;
        unsigned int endUTCOffsetSeconds:1;
        unsigned int start:1;
        unsigned int startUTCOffsetSeconds:1;
        unsigned int floating:1;
    } _has;
}

@property(nonatomic) _Bool floating; // @synthesize floating=_floating;
@property(nonatomic) long long endUTCOffsetSeconds; // @synthesize endUTCOffsetSeconds=_endUTCOffsetSeconds;
@property(nonatomic) long long startUTCOffsetSeconds; // @synthesize startUTCOffsetSeconds=_startUTCOffsetSeconds;
@property(nonatomic) double end; // @synthesize end=_end;
@property(nonatomic) double start; // @synthesize start=_start;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasFloating;
@property(nonatomic) _Bool hasEndUTCOffsetSeconds;
@property(nonatomic) _Bool hasStartUTCOffsetSeconds;
@property(nonatomic) _Bool hasEnd;
@property(nonatomic) _Bool hasStart;

@end

