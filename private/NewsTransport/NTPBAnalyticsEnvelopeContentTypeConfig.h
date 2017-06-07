//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSString;

@interface NTPBAnalyticsEnvelopeContentTypeConfig : PBCodable <NSCopying>
{
    unsigned long long _seedTime;
    NSString *_contentHeaderName;
    NSString *_contentHeaderValue;
    NSString *_endpointURLString;
    unsigned int _samplingCeiling;
    unsigned int _samplingFloor;
    struct {
        unsigned int seedTime:1;
        unsigned int samplingCeiling:1;
        unsigned int samplingFloor:1;
    } _has;
}

@property(nonatomic) unsigned int samplingCeiling; // @synthesize samplingCeiling=_samplingCeiling;
@property(nonatomic) unsigned int samplingFloor; // @synthesize samplingFloor=_samplingFloor;
@property(retain, nonatomic) NSString *contentHeaderValue; // @synthesize contentHeaderValue=_contentHeaderValue;
@property(retain, nonatomic) NSString *contentHeaderName; // @synthesize contentHeaderName=_contentHeaderName;
@property(nonatomic) unsigned long long seedTime; // @synthesize seedTime=_seedTime;
@property(retain, nonatomic) NSString *endpointURLString; // @synthesize endpointURLString=_endpointURLString;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasSamplingCeiling;
@property(nonatomic) _Bool hasSamplingFloor;
@property(readonly, nonatomic) _Bool hasContentHeaderValue;
@property(readonly, nonatomic) _Bool hasContentHeaderName;
@property(nonatomic) _Bool hasSeedTime;
@property(readonly, nonatomic) _Bool hasEndpointURLString;
- (void)dealloc;

@end

