//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AdCore/NSCopying-Protocol.h>

@class NSString;

@interface ADConfiguration : PBCodable <NSCopying>
{
    double _expirationDate;
    NSString *_baseUrl;
    NSString *_bundleId;
    int _requestType;
    _Bool _isTest;
    struct {
        unsigned int expirationDate:1;
        unsigned int requestType:1;
        unsigned int isTest:1;
    } _has;
}

@property(nonatomic) double expirationDate; // @synthesize expirationDate=_expirationDate;
@property(retain, nonatomic) NSString *baseUrl; // @synthesize baseUrl=_baseUrl;
@property(nonatomic) _Bool isTest; // @synthesize isTest=_isTest;
@property(nonatomic) int requestType; // @synthesize requestType=_requestType;
@property(retain, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
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
@property(nonatomic) _Bool hasExpirationDate;
@property(readonly, nonatomic) _Bool hasBaseUrl;
@property(nonatomic) _Bool hasIsTest;
@property(nonatomic) _Bool hasRequestType;
@property(readonly, nonatomic) _Bool hasBundleId;

@end

