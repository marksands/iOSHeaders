//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreDuet/NSCopying-Protocol.h>

@class NSMutableArray, NSString, _DKPRSource, _DKPRStream, _DKPRValue;

@interface _DKPREvent : PBCodable <NSCopying>
{
    double _endDate;
    double _startDate;
    NSString *_identifier;
    NSMutableArray *_metadatas;
    _DKPRSource *_source;
    _DKPRStream *_stream;
    _DKPRValue *_value;
}

+ (Class)metadataType;
@property(retain, nonatomic) NSMutableArray *metadatas; // @synthesize metadatas=_metadatas;
@property(retain, nonatomic) _DKPRSource *source; // @synthesize source=_source;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) _DKPRValue *value; // @synthesize value=_value;
@property(nonatomic) double endDate; // @synthesize endDate=_endDate;
@property(nonatomic) double startDate; // @synthesize startDate=_startDate;
@property(retain, nonatomic) _DKPRStream *stream; // @synthesize stream=_stream;
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
- (id)metadataAtIndex:(unsigned long long)arg1;
- (unsigned long long)metadatasCount;
- (void)addMetadata:(id)arg1;
- (void)clearMetadatas;
@property(readonly, nonatomic) _Bool hasSource;

@end

