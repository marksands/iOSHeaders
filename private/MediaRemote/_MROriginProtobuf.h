//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString, _MRDeviceInfoMessageProtobuf;

@interface _MROriginProtobuf : PBCodable <NSCopying>
{
    _MRDeviceInfoMessageProtobuf *_deviceInfo;
    NSString *_displayName;
    int _identifier;
    int _type;
    struct {
        unsigned int identifier:1;
        unsigned int type:1;
    } _has;
}

@property(retain, nonatomic) _MRDeviceInfoMessageProtobuf *deviceInfo; // @synthesize deviceInfo=_deviceInfo;
@property(nonatomic) int identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasDeviceInfo;
@property(nonatomic) _Bool hasIdentifier;
@property(readonly, nonatomic) _Bool hasDisplayName;
- (int)StringAsType:(id)arg1;
- (id)typeAsString:(int)arg1;
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type; // @synthesize type=_type;
- (void)dealloc;

@end
