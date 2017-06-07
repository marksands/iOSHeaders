//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NSData, NSString;

@interface NPKProtoSetIEFTPPUniqueIDRequest : PBRequest <NSCopying>
{
    NSString *_applicationIdentifier;
    NSData *_expressPassInformation;
    NSString *_uniqueID;
    _Bool _cancelOutstandingRequests;
    _Bool _requestAuthorization;
    struct {
        unsigned int cancelOutstandingRequests:1;
        unsigned int requestAuthorization:1;
    } _has;
}

@property(retain, nonatomic) NSData *expressPassInformation; // @synthesize expressPassInformation=_expressPassInformation;
@property(nonatomic) _Bool requestAuthorization; // @synthesize requestAuthorization=_requestAuthorization;
@property(retain, nonatomic) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
@property(nonatomic) _Bool cancelOutstandingRequests; // @synthesize cancelOutstandingRequests=_cancelOutstandingRequests;
@property(retain, nonatomic) NSString *uniqueID; // @synthesize uniqueID=_uniqueID;
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
@property(readonly, nonatomic) _Bool hasExpressPassInformation;
@property(nonatomic) _Bool hasRequestAuthorization;
@property(readonly, nonatomic) _Bool hasApplicationIdentifier;
@property(nonatomic) _Bool hasCancelOutstandingRequests;
@property(readonly, nonatomic) _Bool hasUniqueID;

@end

