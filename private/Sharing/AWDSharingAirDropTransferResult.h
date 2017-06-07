//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Sharing/NSCopying-Protocol.h>

@class NSString;

@interface AWDSharingAirDropTransferResult : PBCodable <NSCopying>
{
    unsigned long long _bytesPerSec;
    unsigned long long _timestamp;
    NSString *_bundleID;
    int _errorCode;
    NSString *_errorDomain;
    NSString *_model;
    _Bool _sender;
    _Bool _success;
    struct {
        unsigned int bytesPerSec:1;
        unsigned int timestamp:1;
        unsigned int errorCode:1;
        unsigned int sender:1;
        unsigned int success:1;
    } _has;
}

@property(retain, nonatomic) NSString *errorDomain; // @synthesize errorDomain=_errorDomain;
@property(nonatomic) int errorCode; // @synthesize errorCode=_errorCode;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(retain, nonatomic) NSString *model; // @synthesize model=_model;
@property(nonatomic) unsigned long long bytesPerSec; // @synthesize bytesPerSec=_bytesPerSec;
@property(nonatomic) _Bool success; // @synthesize success=_success;
@property(nonatomic) _Bool sender; // @synthesize sender=_sender;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
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
@property(readonly, nonatomic) _Bool hasErrorDomain;
@property(nonatomic) _Bool hasErrorCode;
@property(readonly, nonatomic) _Bool hasBundleID;
@property(readonly, nonatomic) _Bool hasModel;
@property(nonatomic) _Bool hasBytesPerSec;
@property(nonatomic) _Bool hasSuccess;
@property(nonatomic) _Bool hasSender;
@property(nonatomic) _Bool hasTimestamp;

@end

