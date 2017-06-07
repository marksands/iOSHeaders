//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSString;

@interface PKExpressPassInformation : NSObject <NSSecureCoding>
{
    NSString *_passUniqueIdentifier;
    NSString *_paymentApplicationIdentifier;
    NSString *_expressMode;
    long long _expressPassType;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) long long expressPassType; // @synthesize expressPassType=_expressPassType;
@property(readonly, nonatomic) NSString *expressMode; // @synthesize expressMode=_expressMode;
@property(readonly, nonatomic) NSString *paymentApplicationIdentifier; // @synthesize paymentApplicationIdentifier=_paymentApplicationIdentifier;
@property(readonly, nonatomic) NSString *passUniqueIdentifier; // @synthesize passUniqueIdentifier=_passUniqueIdentifier;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initForExpressMode:(id)arg1 withPassUniqueIdentifier:(id)arg2 paymentApplicationIdentifier:(id)arg3;
- (id)init;

@end

