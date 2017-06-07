//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/NSSecureCoding-Protocol.h>
#import <CoreParsec/_CPProcessableFeedback-Protocol.h>
#import <CoreParsec/_CPSearchViewDisappearFeedback-Protocol.h>

@class NSData, NSString;

@interface _CPSearchViewDisappearFeedback : PBCodable <_CPProcessableFeedback, _CPSearchViewDisappearFeedback, NSSecureCoding>
{
    struct {
        unsigned int timestamp:1;
        unsigned int viewDisappearEvent:1;
    } _has;
    int _viewDisappearEvent;
    unsigned long long _timestamp;
}

@property(nonatomic) int viewDisappearEvent; // @synthesize viewDisappearEvent=_viewDisappearEvent;
@property(nonatomic) unsigned long long timestamp;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(readonly, nonatomic) _Bool hasViewDisappearEvent;
@property(readonly, nonatomic) _Bool hasTimestamp;
- (id)initWithFacade:(id)arg1;
@property(readonly, nonatomic) _Bool requiresQueryId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

