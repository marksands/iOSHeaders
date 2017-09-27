//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@interface GEORPFeatureHandle : PBCodable <NSCopying>
{
    struct GEORPFeatureHandleStyleAttribute *_styleAttributes;
    unsigned long long _styleAttributesCount;
    unsigned long long _styleAttributesSpace;
    unsigned int _featureIndex;
    unsigned int _featureTileX;
    unsigned int _featureTileY;
    unsigned int _featureTileZ;
    unsigned int _identifier;
    int _style;
    int _type;
    struct {
        unsigned int featureIndex:1;
        unsigned int featureTileX:1;
        unsigned int featureTileY:1;
        unsigned int featureTileZ:1;
        unsigned int identifier:1;
        unsigned int style:1;
        unsigned int type:1;
    } _has;
}

@property(nonatomic) unsigned int identifier; // @synthesize identifier=_identifier;
@property(nonatomic) unsigned int featureTileZ; // @synthesize featureTileZ=_featureTileZ;
@property(nonatomic) unsigned int featureTileY; // @synthesize featureTileY=_featureTileY;
@property(nonatomic) unsigned int featureTileX; // @synthesize featureTileX=_featureTileX;
@property(nonatomic) unsigned int featureIndex; // @synthesize featureIndex=_featureIndex;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (void)setStyleAttributes:(struct GEORPFeatureHandleStyleAttribute *)arg1 count:(unsigned long long)arg2;
- (struct GEORPFeatureHandleStyleAttribute)styleAttributeAtIndex:(unsigned long long)arg1;
- (void)addStyleAttribute:(struct GEORPFeatureHandleStyleAttribute)arg1;
- (void)clearStyleAttributes;
@property(readonly, nonatomic) struct GEORPFeatureHandleStyleAttribute *styleAttributes;
@property(readonly, nonatomic) unsigned long long styleAttributesCount;
- (int)StringAsType:(id)arg1;
- (id)typeAsString:(int)arg1;
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) _Bool hasIdentifier;
- (int)StringAsStyle:(id)arg1;
- (id)styleAsString:(int)arg1;
@property(nonatomic) _Bool hasStyle;
@property(nonatomic) int style; // @synthesize style=_style;
@property(nonatomic) _Bool hasFeatureTileZ;
@property(nonatomic) _Bool hasFeatureTileY;
@property(nonatomic) _Bool hasFeatureTileX;
@property(nonatomic) _Bool hasFeatureIndex;
- (void)dealloc;

@end

