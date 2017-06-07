//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/NSSecureCoding-Protocol.h>
#import <CoreParsec/_CPLookupHintRelevancyFeedback-Protocol.h>
#import <CoreParsec/_CPProcessableFeedback-Protocol.h>

@class NSData, NSString, _CPRange;

@interface _CPLookupHintRelevancyFeedback : PBCodable <_CPProcessableFeedback, _CPLookupHintRelevancyFeedback, NSSecureCoding>
{
    struct {
        unsigned int timestamp:1;
        unsigned int discarded:1;
        unsigned int grade:1;
    } _has;
    _Bool _discarded;
    int _grade;
    unsigned long long _timestamp;
    _CPRange *_hintRange;
    NSString *_domain;
}

@property(nonatomic) int grade; // @synthesize grade=_grade;
@property(nonatomic) _Bool discarded; // @synthesize discarded=_discarded;
@property(copy, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(retain, nonatomic) _CPRange *hintRange; // @synthesize hintRange=_hintRange;
@property(nonatomic) unsigned long long timestamp;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(readonly, nonatomic) _Bool hasGrade;
@property(readonly, nonatomic) _Bool hasDiscarded;
@property(readonly, nonatomic) _Bool hasDomain;
@property(readonly, nonatomic) _Bool hasHintRange;
@property(readonly, nonatomic) _Bool hasTimestamp;
- (id)initWithFacade:(id)arg1;
@property(readonly, nonatomic) _Bool requiresQueryId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

