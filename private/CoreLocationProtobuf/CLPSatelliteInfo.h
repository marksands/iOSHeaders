//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@interface CLPSatelliteInfo : PBCodable <NSCopying>
{
    CDStruct_95bda58d _azimuths;
    CDStruct_95bda58d _cnos;
    CDStruct_95bda58d _elevations;
    struct {
        _Bool *list;
        unsigned long long count;
        unsigned long long size;
    } _isUsedInFixes;
    CDStruct_95bda58d _satIds;
}

- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (void)setIsUsedInFixes:(_Bool *)arg1 count:(unsigned long long)arg2;
- (_Bool)isUsedInFixesAtIndex:(unsigned long long)arg1;
- (void)addIsUsedInFixes:(_Bool)arg1;
- (void)clearIsUsedInFixes;
@property(readonly, nonatomic) _Bool *isUsedInFixes;
@property(readonly, nonatomic) unsigned long long isUsedInFixesCount;
- (void)setElevations:(int *)arg1 count:(unsigned long long)arg2;
- (int)elevationsAtIndex:(unsigned long long)arg1;
- (void)addElevations:(int)arg1;
- (void)clearElevations;
@property(readonly, nonatomic) int *elevations;
@property(readonly, nonatomic) unsigned long long elevationsCount;
- (void)setAzimuths:(int *)arg1 count:(unsigned long long)arg2;
- (int)azimuthsAtIndex:(unsigned long long)arg1;
- (void)addAzimuths:(int)arg1;
- (void)clearAzimuths;
@property(readonly, nonatomic) int *azimuths;
@property(readonly, nonatomic) unsigned long long azimuthsCount;
- (void)setCnos:(int *)arg1 count:(unsigned long long)arg2;
- (int)cnosAtIndex:(unsigned long long)arg1;
- (void)addCnos:(int)arg1;
- (void)clearCnos;
@property(readonly, nonatomic) int *cnos;
@property(readonly, nonatomic) unsigned long long cnosCount;
- (void)setSatIds:(int *)arg1 count:(unsigned long long)arg2;
- (int)satIdsAtIndex:(unsigned long long)arg1;
- (void)addSatIds:(int)arg1;
- (void)clearSatIds;
@property(readonly, nonatomic) int *satIds;
@property(readonly, nonatomic) unsigned long long satIdsCount;
- (void)dealloc;

@end

