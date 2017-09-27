//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class MSMessage, NSArray, NSData, NSString, NSUUID;

@interface _MSConversationState : NSObject <NSSecureCoding>
{
    NSUUID *_conversationIdentifier;
    NSUUID *_senderIdentifier;
    NSArray *_recipientIdentifiers;
    NSString *_conversationID;
    NSData *_conversationEngramID;
    NSString *_senderAddress;
    NSArray *_recipientAddresses;
    MSMessage *_activeMessage;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) MSMessage *activeMessage; // @synthesize activeMessage=_activeMessage;
@property(retain, nonatomic) NSArray *recipientAddresses; // @synthesize recipientAddresses=_recipientAddresses;
@property(retain, nonatomic) NSString *senderAddress; // @synthesize senderAddress=_senderAddress;
@property(retain, nonatomic) NSData *conversationEngramID; // @synthesize conversationEngramID=_conversationEngramID;
@property(retain, nonatomic) NSString *conversationID; // @synthesize conversationID=_conversationID;
@property(retain, nonatomic) NSArray *recipientIdentifiers; // @synthesize recipientIdentifiers=_recipientIdentifiers;
@property(retain, nonatomic) NSUUID *senderIdentifier; // @synthesize senderIdentifier=_senderIdentifier;
@property(retain, nonatomic) NSUUID *conversationIdentifier; // @synthesize conversationIdentifier=_conversationIdentifier;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

