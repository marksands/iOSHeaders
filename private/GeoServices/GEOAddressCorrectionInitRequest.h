//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBRequest.h"

#import "NSCopying.h"

@class NSString;

@interface GEOAddressCorrectionInitRequest : PBRequest <NSCopying>
{
    NSString *_personID;
    NSString *_token;
    _Bool _supportsMultipleAddresses;
    struct {
        unsigned int supportsMultipleAddresses:1;
    } _has;
}

@property(nonatomic) _Bool supportsMultipleAddresses; // @synthesize supportsMultipleAddresses=_supportsMultipleAddresses;
@property(retain, nonatomic) NSString *personID; // @synthesize personID=_personID;
@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
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
@property(nonatomic) _Bool hasSupportsMultipleAddresses;
@property(readonly, nonatomic) _Bool hasPersonID;
@property(readonly, nonatomic) _Bool hasToken;

@end

