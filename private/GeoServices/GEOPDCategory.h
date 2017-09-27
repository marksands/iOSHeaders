//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray, PBUnknownFields;

@interface GEOPDCategory : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    int _level;
    NSMutableArray *_localizedNames;
    struct {
        unsigned int level:1;
    } _has;
}

+ (Class)localizedNameType;
+ (_Bool)hasCategoryNamesForPlaceData:(id)arg1 type:(unsigned int)arg2;
+ (id)categoryNamesForPlaceData:(id)arg1 type:(unsigned int)arg2;
+ (id)_allCategoriesForPlaceData:(id)arg1 type:(unsigned int)arg2;
@property(retain, nonatomic) NSMutableArray *localizedNames; // @synthesize localizedNames=_localizedNames;
@property(nonatomic) int level; // @synthesize level=_level;
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
- (id)localizedNameAtIndex:(unsigned long long)arg1;
- (unsigned long long)localizedNamesCount;
- (void)addLocalizedName:(id)arg1;
- (void)clearLocalizedNames;
@property(nonatomic) _Bool hasLevel;

@end

