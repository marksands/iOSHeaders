//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CompanionSync/NSCopying-Protocol.h>

@class NSString, SYErrorInfo, SYMessageHeader;

@interface SYBatchChunkAck : PBCodable <NSCopying>
{
    unsigned int _chunkIndex;
    SYErrorInfo *_error;
    SYMessageHeader *_header;
    NSString *_syncID;
}

@property(retain, nonatomic) SYErrorInfo *error; // @synthesize error=_error;
@property(nonatomic) unsigned int chunkIndex; // @synthesize chunkIndex=_chunkIndex;
@property(retain, nonatomic) NSString *syncID; // @synthesize syncID=_syncID;
@property(retain, nonatomic) SYMessageHeader *header; // @synthesize header=_header;
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
@property(readonly, nonatomic) _Bool hasError;

@end
