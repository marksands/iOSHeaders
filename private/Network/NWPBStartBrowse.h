//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString, NWPBBrowseDescriptor, NWPBParameters;

@interface NWPBStartBrowse : PBCodable <NSCopying>
{
    NSString *_clientUUID;
    NWPBBrowseDescriptor *_descriptor;
    NWPBParameters *_parameters;
}

@property(retain, nonatomic) NSString *clientUUID; // @synthesize clientUUID=_clientUUID;
@property(retain, nonatomic) NWPBParameters *parameters; // @synthesize parameters=_parameters;
@property(retain, nonatomic) NWPBBrowseDescriptor *descriptor; // @synthesize descriptor=_descriptor;
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
@property(readonly, nonatomic) _Bool hasClientUUID;
@property(readonly, nonatomic) _Bool hasParameters;
@property(readonly, nonatomic) _Bool hasDescriptor;

@end

