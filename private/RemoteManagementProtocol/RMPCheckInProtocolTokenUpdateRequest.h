//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CEMPayloadBase.h"

@class NSData, NSNumber, NSString;

@interface RMPCheckInProtocolTokenUpdateRequest : CEMPayloadBase
{
    NSString *_messageType;
    NSString *_topic;
    NSString *_UDID;
    NSString *_userShortName;
    NSData *_token;
    NSString *_pushMagic;
    NSData *_unlockToken;
    NSNumber *_awaitingConfiguration;
}

+ (id)request;
@property(retain, nonatomic) NSNumber *awaitingConfiguration; // @synthesize awaitingConfiguration=_awaitingConfiguration;
@property(retain, nonatomic) NSData *unlockToken; // @synthesize unlockToken=_unlockToken;
@property(retain, nonatomic) NSString *pushMagic; // @synthesize pushMagic=_pushMagic;
@property(retain, nonatomic) NSData *token; // @synthesize token=_token;
@property(retain, nonatomic) NSString *userShortName; // @synthesize userShortName=_userShortName;
@property(retain, nonatomic) NSString *UDID; // @synthesize UDID=_UDID;
@property(retain, nonatomic) NSString *topic; // @synthesize topic=_topic;
@property(retain, nonatomic) NSString *messageType; // @synthesize messageType=_messageType;
- (void).cxx_destruct;
- (id)serialize;
- (_Bool)loadFromDictionary:(id)arg1 error:(id *)arg2;

@end
