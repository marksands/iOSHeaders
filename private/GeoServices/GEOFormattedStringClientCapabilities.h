//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class PBUnknownFields;

@interface GEOFormattedStringClientCapabilities : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    _Bool _concatenatingFormatStringsSupported;
    _Bool _timestampFormatPatternSupported;
    struct {
        unsigned int concatenatingFormatStringsSupported:1;
        unsigned int timestampFormatPatternSupported:1;
    } _has;
}

@property(nonatomic) _Bool timestampFormatPatternSupported; // @synthesize timestampFormatPatternSupported=_timestampFormatPatternSupported;
@property(nonatomic) _Bool concatenatingFormatStringsSupported; // @synthesize concatenatingFormatStringsSupported=_concatenatingFormatStringsSupported;
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
@property(nonatomic) _Bool hasTimestampFormatPatternSupported;
@property(nonatomic) _Bool hasConcatenatingFormatStringsSupported;

@end

