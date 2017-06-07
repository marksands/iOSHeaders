//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@interface HDCodableAuthorization : PBCodable <NSCopying>
{
    long long _authorizationRequest;
    long long _authorizationStatus;
    double _modificationDate;
    long long _modificationEpoch;
    long long _objectType;
    struct {
        unsigned int authorizationRequest:1;
        unsigned int authorizationStatus:1;
        unsigned int modificationDate:1;
        unsigned int modificationEpoch:1;
        unsigned int objectType:1;
    } _has;
}

@property(nonatomic) long long modificationEpoch; // @synthesize modificationEpoch=_modificationEpoch;
@property(nonatomic) double modificationDate; // @synthesize modificationDate=_modificationDate;
@property(nonatomic) long long authorizationRequest; // @synthesize authorizationRequest=_authorizationRequest;
@property(nonatomic) long long authorizationStatus; // @synthesize authorizationStatus=_authorizationStatus;
@property(nonatomic) long long objectType; // @synthesize objectType=_objectType;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasModificationEpoch;
@property(nonatomic) _Bool hasModificationDate;
@property(nonatomic) _Bool hasAuthorizationRequest;
@property(nonatomic) _Bool hasAuthorizationStatus;
@property(nonatomic) _Bool hasObjectType;
- (void)_setModificationDate:(id)arg1;
- (id)_modificationDate;
- (void)_setAuthorizationRequestWithNumber:(id)arg1;
- (long long)_authorizationRequest;
- (void)_setAuthorizationStatusWithNumber:(id)arg1;
- (long long)_authorizationStatus;
- (void)_setDataTypeCodeWithObjectType:(id)arg1;
- (long long)_dataTypeCode;

@end

