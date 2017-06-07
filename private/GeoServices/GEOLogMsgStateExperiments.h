//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOABClientConfig, GEOABExperimentAssignment, GEOAbAssignInfo, GEOPDDatasetABStatus;

@interface GEOLogMsgStateExperiments : PBCodable <NSCopying>
{
    GEOAbAssignInfo *_abAssignInfo;
    GEOABClientConfig *_clientAbExperimentAssignment;
    GEOPDDatasetABStatus *_datasetAbStatus;
    GEOABExperimentAssignment *_tilesAbExperimentAssignment;
}

@property(retain, nonatomic) GEOAbAssignInfo *abAssignInfo; // @synthesize abAssignInfo=_abAssignInfo;
@property(retain, nonatomic) GEOPDDatasetABStatus *datasetAbStatus; // @synthesize datasetAbStatus=_datasetAbStatus;
@property(retain, nonatomic) GEOABClientConfig *clientAbExperimentAssignment; // @synthesize clientAbExperimentAssignment=_clientAbExperimentAssignment;
@property(retain, nonatomic) GEOABExperimentAssignment *tilesAbExperimentAssignment; // @synthesize tilesAbExperimentAssignment=_tilesAbExperimentAssignment;
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
@property(readonly, nonatomic) _Bool hasAbAssignInfo;
@property(readonly, nonatomic) _Bool hasDatasetAbStatus;
@property(readonly, nonatomic) _Bool hasClientAbExperimentAssignment;
@property(readonly, nonatomic) _Bool hasTilesAbExperimentAssignment;

@end

