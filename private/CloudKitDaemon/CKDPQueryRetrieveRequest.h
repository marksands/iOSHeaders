//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBRequest.h"

#import "NSCopying.h"

@class CKDPAssetsToDownload, CKDPQuery, CKDPRecordZoneIdentifier, CKDPRequestedFields, NSData;

__attribute__((visibility("hidden")))
@interface CKDPQueryRetrieveRequest : PBRequest <NSCopying>
{
    CKDPAssetsToDownload *_assetsToDownload;
    NSData *_continuationMarker;
    unsigned int _limit;
    CKDPQuery *_query;
    CKDPRequestedFields *_requestedFields;
    CKDPRecordZoneIdentifier *_zoneIdentifier;
    CDStruct_88fc3008 _has;
}

+ (id)options;
@property(retain, nonatomic) CKDPAssetsToDownload *assetsToDownload; // @synthesize assetsToDownload=_assetsToDownload;
@property(retain, nonatomic) CKDPRequestedFields *requestedFields; // @synthesize requestedFields=_requestedFields;
@property(retain, nonatomic) CKDPRecordZoneIdentifier *zoneIdentifier; // @synthesize zoneIdentifier=_zoneIdentifier;
@property(nonatomic) unsigned int limit; // @synthesize limit=_limit;
@property(retain, nonatomic) NSData *continuationMarker; // @synthesize continuationMarker=_continuationMarker;
@property(retain, nonatomic) CKDPQuery *query; // @synthesize query=_query;
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
@property(readonly, nonatomic) _Bool hasAssetsToDownload;
@property(readonly, nonatomic) _Bool hasRequestedFields;
@property(readonly, nonatomic) _Bool hasZoneIdentifier;
@property(nonatomic) _Bool hasLimit;
@property(readonly, nonatomic) _Bool hasContinuationMarker;
@property(readonly, nonatomic) _Bool hasQuery;

@end

