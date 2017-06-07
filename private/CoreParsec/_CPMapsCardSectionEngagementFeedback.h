//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/NSSecureCoding-Protocol.h>
#import <CoreParsec/_CPMapsCardSectionEngagementFeedback-Protocol.h>
#import <CoreParsec/_CPProcessableFeedback-Protocol.h>

@class NSData, NSString, _CPCardSectionForFeedback, _CPPunchoutForFeedback;

@interface _CPMapsCardSectionEngagementFeedback : PBCodable <_CPProcessableFeedback, _CPMapsCardSectionEngagementFeedback, NSSecureCoding>
{
    struct {
        unsigned int timestamp:1;
        unsigned int triggerEvent:1;
        unsigned int actionCardType:1;
        unsigned int feedbackType:1;
    } _has;
    int _triggerEvent;
    int _actionCardType;
    int _feedbackType;
    unsigned long long _timestamp;
    _CPPunchoutForFeedback *_destination;
    _CPCardSectionForFeedback *_cardSection;
}

@property(nonatomic) int feedbackType; // @synthesize feedbackType=_feedbackType;
@property(retain, nonatomic) _CPCardSectionForFeedback *cardSection; // @synthesize cardSection=_cardSection;
@property(nonatomic) int actionCardType; // @synthesize actionCardType=_actionCardType;
@property(nonatomic) int triggerEvent; // @synthesize triggerEvent=_triggerEvent;
@property(retain, nonatomic) _CPPunchoutForFeedback *destination; // @synthesize destination=_destination;
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
@property(readonly, nonatomic) _Bool hasFeedbackType;
@property(readonly, nonatomic) _Bool hasCardSection;
@property(readonly, nonatomic) _Bool hasActionCardType;
@property(readonly, nonatomic) _Bool hasTriggerEvent;
@property(readonly, nonatomic) _Bool hasDestination;
@property(readonly, nonatomic) _Bool hasTimestamp;
- (id)initWithFacade:(id)arg1;
@property(readonly, nonatomic) _Bool requiresQueryId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

