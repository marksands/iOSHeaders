//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GKTurnBasedExchangeInternal, GKTurnBasedMatch, GKTurnBasedParticipant, NSArray, NSData, NSDate, NSString;

@interface GKTurnBasedExchange : NSObject
{
    GKTurnBasedParticipant *_sender;
    GKTurnBasedMatch *_matchWeak;
    GKTurnBasedExchangeInternal *_internal;
    NSArray *_replies;
    NSArray *_recipients;
}

+ (_Bool)instancesRespondToSelector:(SEL)arg1;
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
@property(retain, nonatomic) NSArray *recipients; // @synthesize recipients=_recipients;
@property(retain, nonatomic) NSArray *replies; // @synthesize replies=_replies;
@property(retain) GKTurnBasedExchangeInternal *internal; // @synthesize internal=_internal;
@property(retain, nonatomic) GKTurnBasedParticipant *sender; // @synthesize sender=_sender;
- (void)replyWithLocalizableMessageKey:(id)arg1 arguments:(id)arg2 data:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)cancelWithLocalizableMessageKey:(id)arg1 arguments:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_updateInternalFromMatchInternal:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
@property(nonatomic) GKTurnBasedMatch *match; // @synthesize match=_matchWeak;
@property(readonly, nonatomic) BOOL status;
@property(readonly, nonatomic) NSString *message; // @dynamic message;
- (id)init;
- (id)initWithInternalRepresentation:(id)arg1;

// Remaining properties
@property(retain, nonatomic) NSDate *completionDate; // @dynamic completionDate;
@property(retain, nonatomic) NSData *data; // @dynamic data;
@property(retain, nonatomic) NSString *exchangeID; // @dynamic exchangeID;
@property(readonly, nonatomic) NSDate *sendDate; // @dynamic sendDate;
@property(retain, nonatomic) NSDate *timeoutDate; // @dynamic timeoutDate;

@end

