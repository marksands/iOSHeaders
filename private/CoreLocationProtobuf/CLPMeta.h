//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreLocationProtobuf/NSCopying-Protocol.h>

@class NSString;

@interface CLPMeta : PBCodable <NSCopying>
{
    long long _submissionId;
    NSString *_probeId;
    NSString *_productId;
    NSString *_softwareVersion;
    struct {
        unsigned int submissionId:1;
    } _has;
}

@property(retain, nonatomic) NSString *probeId; // @synthesize probeId=_probeId;
@property(nonatomic) long long submissionId; // @synthesize submissionId=_submissionId;
@property(retain, nonatomic) NSString *softwareVersion; // @synthesize softwareVersion=_softwareVersion;
@property(retain, nonatomic) NSString *productId; // @synthesize productId=_productId;
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
@property(readonly, nonatomic) _Bool hasProbeId;
@property(nonatomic) _Bool hasSubmissionId;

@end

