//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSSecureCoding.h"
#import "_CPDidGoToSearchFeedback.h"
#import "_CPProcessableFeedback.h"

@class NSData, NSDictionary, NSString;

@interface _CPDidGoToSearchFeedback : PBCodable <_CPProcessableFeedback, _CPDidGoToSearchFeedback, NSSecureCoding>
{
    struct {
        unsigned int timestamp:1;
        unsigned int endpoint:1;
    } _has;
    int _endpoint;
    unsigned long long _timestamp;
    NSString *_input;
}

@property(nonatomic) int endpoint; // @synthesize endpoint=_endpoint;
@property(copy, nonatomic) NSString *input; // @synthesize input=_input;
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
@property(readonly, nonatomic) _Bool hasEndpoint;
@property(readonly, nonatomic) _Bool hasInput;
@property(readonly, nonatomic) _Bool hasTimestamp;
- (id)init;
- (id)initWithFacade:(id)arg1;
@property(readonly, nonatomic) _Bool requiresQueryId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) id feedbackJSON;
@property(readonly) Class superclass;

@end

