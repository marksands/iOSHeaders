//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NTPBAbsolutePersonalizedSectionPresenceConfig, NTPBRelativePersonalizedSectionPresenceConfig;

@interface NTPBPersonalizedSectionPresenceConfig : PBCodable <NSCopying>
{
    NTPBAbsolutePersonalizedSectionPresenceConfig *_absoluteConfig;
    int _personalizationMethod;
    NTPBRelativePersonalizedSectionPresenceConfig *_relativeConfig;
    struct {
        unsigned int personalizationMethod:1;
    } _has;
}

@property(retain, nonatomic) NTPBAbsolutePersonalizedSectionPresenceConfig *absoluteConfig; // @synthesize absoluteConfig=_absoluteConfig;
@property(retain, nonatomic) NTPBRelativePersonalizedSectionPresenceConfig *relativeConfig; // @synthesize relativeConfig=_relativeConfig;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasAbsoluteConfig;
@property(readonly, nonatomic) _Bool hasRelativeConfig;
@property(nonatomic) _Bool hasPersonalizationMethod;
@property(nonatomic) int personalizationMethod; // @synthesize personalizationMethod=_personalizationMethod;
- (void)dealloc;

@end

