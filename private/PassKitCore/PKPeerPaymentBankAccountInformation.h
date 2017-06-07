//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSString;

@interface PKPeerPaymentBankAccountInformation : NSObject <NSSecureCoding>
{
    NSString *_accountNumber;
    NSString *_routingNumber;
    NSString *_bankName;
    NSString *_userName;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(copy, nonatomic) NSString *bankName; // @synthesize bankName=_bankName;
@property(copy, nonatomic) NSString *routingNumber; // @synthesize routingNumber=_routingNumber;
@property(copy, nonatomic) NSString *accountNumber; // @synthesize accountNumber=_accountNumber;
- (void).cxx_destruct;
- (id)_bankAccountInformationInKeychain;
- (void)_writeBankAccountInformationToKeychain;
- (id)description;
- (void)updateToLatestKeychainData;
- (_Bool)isValid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

