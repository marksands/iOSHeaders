//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/NSSecureCoding-Protocol.h>
#import <CoreParsec/_CPProcessableFeedback-Protocol.h>
#import <CoreParsec/_CPSearchViewAppearFeedback-Protocol.h>

@class NSData, NSString;

@interface _CPSearchViewAppearFeedback : PBCodable <_CPProcessableFeedback, _CPSearchViewAppearFeedback, NSSecureCoding>
{
    struct {
        unsigned int timestamp:1;
        unsigned int viewAppearEvent:1;
        unsigned int isOnLockScreen:1;
        unsigned int isOverApp:1;
    } _has;
    _Bool _isOnLockScreen;
    _Bool _isOverApp;
    int _viewAppearEvent;
    unsigned long long _timestamp;
}

@property(nonatomic) _Bool isOverApp; // @synthesize isOverApp=_isOverApp;
@property(nonatomic) _Bool isOnLockScreen; // @synthesize isOnLockScreen=_isOnLockScreen;
@property(nonatomic) int viewAppearEvent; // @synthesize viewAppearEvent=_viewAppearEvent;
@property(nonatomic) unsigned long long timestamp;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(readonly, nonatomic) _Bool hasIsOverApp;
@property(readonly, nonatomic) _Bool hasIsOnLockScreen;
@property(readonly, nonatomic) _Bool hasViewAppearEvent;
@property(readonly, nonatomic) _Bool hasTimestamp;
- (id)initWithFacade:(id)arg1;
@property(readonly, nonatomic) _Bool requiresQueryId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

