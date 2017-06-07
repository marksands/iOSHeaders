//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSDate, NSString;

@interface PKPaymentMessage : NSObject <NSSecureCoding>
{
    _Bool _allowDeepLink;
    _Bool _hasAssociatedPaymentApplication;
    _Bool _archived;
    NSString *_identifier;
    NSString *_serviceIdentifier;
    NSString *_content;
    NSDate *_messageDate;
    NSDate *_expirationDate;
    unsigned long long _messageType;
}

+ (_Bool)supportsSecureCoding;
+ (id)paymentMessageWithDictionary:(id)arg1;
@property(nonatomic, getter=isArchived) _Bool archived; // @synthesize archived=_archived;
@property(nonatomic) _Bool hasAssociatedPaymentApplication; // @synthesize hasAssociatedPaymentApplication=_hasAssociatedPaymentApplication;
@property(nonatomic) _Bool allowDeepLink; // @synthesize allowDeepLink=_allowDeepLink;
@property(nonatomic) unsigned long long messageType; // @synthesize messageType=_messageType;
@property(copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(copy, nonatomic) NSDate *messageDate; // @synthesize messageDate=_messageDate;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *serviceIdentifier; // @synthesize serviceIdentifier=_serviceIdentifier;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool archiveOnNextTransaction;
@property(readonly, nonatomic, getter=isValid) _Bool valid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (_Bool)isEqualToPaymentMessage:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)init;

@end

