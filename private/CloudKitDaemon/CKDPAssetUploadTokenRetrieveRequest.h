//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBRequest.h"

#import "NSCopying.h"

@class CKDPRecordFieldIdentifier, CKDPRecordType, NSData, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CKDPAssetUploadTokenRetrieveRequest : PBRequest <NSCopying>
{
    NSMutableArray *_assets;
    NSData *_authCopyRequest;
    NSData *_authPutRequest;
    NSMutableArray *_contentRequestHeaders;
    CKDPRecordFieldIdentifier *_field;
    CKDPRecordType *_type;
    NSMutableArray *_uploads;
}

+ (Class)contentRequestHeadersType;
+ (Class)uploadsType;
+ (Class)assetsType;
+ (id)options;
@property(retain, nonatomic) NSData *authCopyRequest; // @synthesize authCopyRequest=_authCopyRequest;
@property(retain, nonatomic) NSData *authPutRequest; // @synthesize authPutRequest=_authPutRequest;
@property(retain, nonatomic) NSMutableArray *contentRequestHeaders; // @synthesize contentRequestHeaders=_contentRequestHeaders;
@property(retain, nonatomic) NSMutableArray *uploads; // @synthesize uploads=_uploads;
@property(retain, nonatomic) NSMutableArray *assets; // @synthesize assets=_assets;
@property(retain, nonatomic) CKDPRecordFieldIdentifier *field; // @synthesize field=_field;
@property(retain, nonatomic) CKDPRecordType *type; // @synthesize type=_type;
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
@property(readonly, nonatomic) _Bool hasAuthCopyRequest;
@property(readonly, nonatomic) _Bool hasAuthPutRequest;
- (id)contentRequestHeadersAtIndex:(unsigned long long)arg1;
- (unsigned long long)contentRequestHeadersCount;
- (void)addContentRequestHeaders:(id)arg1;
- (void)clearContentRequestHeaders;
- (id)uploadsAtIndex:(unsigned long long)arg1;
- (unsigned long long)uploadsCount;
- (void)addUploads:(id)arg1;
- (void)clearUploads;
- (id)assetsAtIndex:(unsigned long long)arg1;
- (unsigned long long)assetsCount;
- (void)addAssets:(id)arg1;
- (void)clearAssets;
@property(readonly, nonatomic) _Bool hasField;
@property(readonly, nonatomic) _Bool hasType;

@end

