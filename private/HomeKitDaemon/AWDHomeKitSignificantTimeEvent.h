//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString;

@interface AWDHomeKitSignificantTimeEvent : PBCodable <NSCopying>
{
    NSString *_significantEvent;
    _Bool _offsetPresent;
    struct {
        unsigned int offsetPresent:1;
    } _has;
}

@property(nonatomic) _Bool offsetPresent; // @synthesize offsetPresent=_offsetPresent;
@property(retain, nonatomic) NSString *significantEvent; // @synthesize significantEvent=_significantEvent;
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
@property(nonatomic) _Bool hasOffsetPresent;
@property(readonly, nonatomic) _Bool hasSignificantEvent;

@end

