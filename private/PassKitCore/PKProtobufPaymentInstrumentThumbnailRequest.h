//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBRequest.h"

#import "NSCopying.h"

@class NSString;

@interface PKProtobufPaymentInstrumentThumbnailRequest : PBRequest <NSCopying>
{
    double _height;
    double _width;
    NSString *_manifestHash;
    NSString *_passIdentifier;
    struct {
        unsigned int height:1;
        unsigned int width:1;
    } _has;
}

@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) double width; // @synthesize width=_width;
@property(retain, nonatomic) NSString *manifestHash; // @synthesize manifestHash=_manifestHash;
@property(retain, nonatomic) NSString *passIdentifier; // @synthesize passIdentifier=_passIdentifier;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasHeight;
@property(nonatomic) _Bool hasWidth;
@property(readonly, nonatomic) _Bool hasManifestHash;
@property(readonly, nonatomic) _Bool hasPassIdentifier;

@end

