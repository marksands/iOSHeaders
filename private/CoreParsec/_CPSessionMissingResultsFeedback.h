//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSSecureCoding.h"
#import "_CPProcessableFeedback.h"
#import "_CPSessionMissingResultsFeedback.h"

@class NSArray, NSData, NSDictionary, NSString;

@interface _CPSessionMissingResultsFeedback : PBCodable <_CPProcessableFeedback, _CPSessionMissingResultsFeedback, NSSecureCoding>
{
    CDStruct_b5306035 _has;
    unsigned long long _timestamp;
    NSArray *_results;
}

@property(copy, nonatomic) NSArray *results; // @synthesize results=_results;
@property(nonatomic) unsigned long long timestamp;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)resultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)resultsCount;
- (void)addResults:(id)arg1;
- (void)clearResults;
@property(readonly, nonatomic) _Bool hasTimestamp;
- (id)init;
@property(readonly, nonatomic) _Bool requiresQueryId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) id feedbackJSON;
@property(readonly) Class superclass;

@end

