//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray, UWLMessageHeaders;

@interface UWLMessageWireEnvelope : PBCodable <NSCopying>
{
    UWLMessageHeaders *_headers;
    NSMutableArray *_optInEvents;
    NSMutableArray *_optOutEvents;
    NSMutableArray *_playEvents;
    int _version;
}

+ (Class)optOutEventsType;
+ (Class)optInEventsType;
+ (Class)playEventsType;
@property(retain, nonatomic) NSMutableArray *optOutEvents; // @synthesize optOutEvents=_optOutEvents;
@property(retain, nonatomic) NSMutableArray *optInEvents; // @synthesize optInEvents=_optInEvents;
@property(retain, nonatomic) NSMutableArray *playEvents; // @synthesize playEvents=_playEvents;
@property(retain, nonatomic) UWLMessageHeaders *headers; // @synthesize headers=_headers;
@property(nonatomic) int version; // @synthesize version=_version;
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
- (id)optOutEventsAtIndex:(unsigned long long)arg1;
- (unsigned long long)optOutEventsCount;
- (void)addOptOutEvents:(id)arg1;
- (void)clearOptOutEvents;
- (id)optInEventsAtIndex:(unsigned long long)arg1;
- (unsigned long long)optInEventsCount;
- (void)addOptInEvents:(id)arg1;
- (void)clearOptInEvents;
- (id)playEventsAtIndex:(unsigned long long)arg1;
- (unsigned long long)playEventsCount;
- (void)addPlayEvents:(id)arg1;
- (void)clearPlayEvents;

@end

