//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreLocationProtobuf/NSCopying-Protocol.h>

@interface CLPPoiTriggerEvent : PBCodable <NSCopying>
{
    unsigned long long _muid;
    double _triggerTimestamp;
    int _providerIdentifier;
    int _triggerSubType;
    int _triggerType;
    struct {
        unsigned int triggerTimestamp:1;
        unsigned int providerIdentifier:1;
        unsigned int triggerSubType:1;
        unsigned int triggerType:1;
    } _has;
}

@property(nonatomic) int triggerSubType; // @synthesize triggerSubType=_triggerSubType;
@property(nonatomic) double triggerTimestamp; // @synthesize triggerTimestamp=_triggerTimestamp;
@property(nonatomic) int providerIdentifier; // @synthesize providerIdentifier=_providerIdentifier;
@property(nonatomic) unsigned long long muid; // @synthesize muid=_muid;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasTriggerSubType;
@property(nonatomic) _Bool hasTriggerTimestamp;
- (int)StringAsTriggerType:(id)arg1;
- (id)triggerTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasTriggerType;
@property(nonatomic) int triggerType; // @synthesize triggerType=_triggerType;
@property(nonatomic) _Bool hasProviderIdentifier;

@end

