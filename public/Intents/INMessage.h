//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/INCacheableContainer-Protocol.h>
#import <Intents/INMessageExport-Protocol.h>
#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class INPerson, NSArray, NSDate, NSNumber, NSString;

@interface INMessage : NSObject <INCacheableContainer, INMessageExport, NSCopying, NSSecureCoding>
{
    NSString *_identifier;
    NSString *_conversationIdentifier;
    NSString *_content;
    NSDate *_dateSent;
    INPerson *_sender;
    NSArray *_recipients;
    long long _messageType;
    NSDate *_dateMessageWasLastRead;
    NSNumber *_numberOfAttachments;
    long long _messageEffectType;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) long long messageEffectType; // @synthesize messageEffectType=_messageEffectType;
@property(readonly, copy, nonatomic) NSNumber *numberOfAttachments; // @synthesize numberOfAttachments=_numberOfAttachments;
@property(readonly, copy, nonatomic) NSDate *dateMessageWasLastRead; // @synthesize dateMessageWasLastRead=_dateMessageWasLastRead;
@property(readonly, nonatomic) long long messageType; // @synthesize messageType=_messageType;
@property(readonly, copy, nonatomic) NSArray *recipients; // @synthesize recipients=_recipients;
@property(readonly, copy, nonatomic) INPerson *sender; // @synthesize sender=_sender;
@property(readonly, copy, nonatomic) NSDate *dateSent; // @synthesize dateSent=_dateSent;
@property(readonly, copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(readonly, copy, nonatomic) NSString *conversationIdentifier; // @synthesize conversationIdentifier=_conversationIdentifier;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
@property(readonly, copy) NSString *description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithIdentifier:(id)arg1 content:(id)arg2 dateSent:(id)arg3 sender:(id)arg4 recipients:(id)arg5;
- (id)initWithIdentifier:(id)arg1 conversationIdentifier:(id)arg2 content:(id)arg3 dateSent:(id)arg4 sender:(id)arg5 recipients:(id)arg6 messageType:(long long)arg7;
- (id)initWithIdentifier:(id)arg1 conversationIdentifier:(id)arg2 content:(id)arg3 dateSent:(id)arg4 sender:(id)arg5 recipients:(id)arg6 dateMessageWasLastRead:(id)arg7 numberOfAttachments:(id)arg8 messageType:(long long)arg9 messageEffectType:(long long)arg10;
- (id)cacheableObjects;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
