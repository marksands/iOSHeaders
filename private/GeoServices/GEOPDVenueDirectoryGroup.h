//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOPDVenueLabel, PBUnknownFields;

@interface GEOPDVenueDirectoryGroup : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    unsigned long long _directoryGroupingId;
    unsigned long long _muid;
    GEOPDVenueLabel *_label;
    struct {
        unsigned int directoryGroupingId:1;
        unsigned int muid:1;
    } _has;
}

@property(nonatomic) unsigned long long muid; // @synthesize muid=_muid;
@property(retain, nonatomic) GEOPDVenueLabel *label; // @synthesize label=_label;
@property(nonatomic) unsigned long long directoryGroupingId; // @synthesize directoryGroupingId=_directoryGroupingId;
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
@property(nonatomic) _Bool hasMuid;
@property(readonly, nonatomic) _Bool hasLabel;
@property(nonatomic) _Bool hasDirectoryGroupingId;

@end

