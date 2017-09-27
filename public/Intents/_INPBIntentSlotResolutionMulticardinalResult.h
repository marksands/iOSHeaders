//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray, PBUnknownFields;

@interface _INPBIntentSlotResolutionMulticardinalResult : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_resolutionResults;
}

+ (Class)resolutionResultsType;
+ (id)options;
@property(retain, nonatomic) NSMutableArray *resolutionResults; // @synthesize resolutionResults=_resolutionResults;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)resolutionResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)resolutionResultsCount;
- (void)addResolutionResults:(id)arg1;
- (void)clearResolutionResults;

@end

