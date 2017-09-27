//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@interface NTPBAppSessionEndWatch : PBCodable <NSCopying>
{
    long long _watchAppSessionDuration;
    struct {
        unsigned int watchAppSessionDuration:1;
    } _has;
}

@property(nonatomic) long long watchAppSessionDuration; // @synthesize watchAppSessionDuration=_watchAppSessionDuration;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasWatchAppSessionDuration;

@end

