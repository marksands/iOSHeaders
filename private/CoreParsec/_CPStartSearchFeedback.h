//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/NSSecureCoding-Protocol.h>
#import <CoreParsec/_CPProcessableFeedback-Protocol.h>
#import <CoreParsec/_CPStartSearchFeedback-Protocol.h>

@class NSData, NSString;

@interface _CPStartSearchFeedback : PBCodable <_CPProcessableFeedback, _CPStartSearchFeedback, NSSecureCoding>
{
    struct {
        unsigned int timestamp:1;
        unsigned int triggerEvent:1;
        unsigned int queryId:1;
    } _has;
    int _triggerEvent;
    unsigned long long _timestamp;
    NSString *_input;
    NSString *_uuid;
    unsigned long long _queryId;
}

@property(nonatomic) unsigned long long queryId; // @synthesize queryId=_queryId;
@property(nonatomic) int triggerEvent; // @synthesize triggerEvent=_triggerEvent;
@property(copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(copy, nonatomic) NSString *input; // @synthesize input=_input;
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
@property(readonly, nonatomic) _Bool hasQueryId;
@property(readonly, nonatomic) _Bool hasTriggerEvent;
@property(readonly, nonatomic) _Bool hasUuid;
@property(readonly, nonatomic) _Bool hasInput;
@property(readonly, nonatomic) _Bool hasTimestamp;
- (id)initWithFacade:(id)arg1;
@property(readonly, nonatomic) _Bool requiresQueryId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

