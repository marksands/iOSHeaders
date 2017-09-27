//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBRequest.h"

#import "NSCopying.h"

@class NSMutableArray, NSString;

@interface PKProtobufPaymentDeviceRequest : PBRequest <NSCopying>
{
    NSString *_deviceName;
    NSMutableArray *_knownManifestHashes;
    unsigned int _protocolVersion;
    _Bool _shouldAdvertise;
    struct {
        unsigned int protocolVersion:1;
        unsigned int shouldAdvertise:1;
    } _has;
}

+ (Class)knownManifestHashesType;
@property(nonatomic) unsigned int protocolVersion; // @synthesize protocolVersion=_protocolVersion;
@property(retain, nonatomic) NSMutableArray *knownManifestHashes; // @synthesize knownManifestHashes=_knownManifestHashes;
@property(nonatomic) _Bool shouldAdvertise; // @synthesize shouldAdvertise=_shouldAdvertise;
@property(retain, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
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
@property(nonatomic) _Bool hasProtocolVersion;
- (id)knownManifestHashesAtIndex:(unsigned long long)arg1;
- (unsigned long long)knownManifestHashesCount;
- (void)addKnownManifestHashes:(id)arg1;
- (void)clearKnownManifestHashes;
@property(nonatomic) _Bool hasShouldAdvertise;
@property(readonly, nonatomic) _Bool hasDeviceName;

@end

