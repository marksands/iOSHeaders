//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSData;

__attribute__((visibility("hidden")))
@interface _LSValidationToken : NSObject <NSSecureCoding>
{
    NSData *_payload;
    NSData *_nonce;
    NSData *_HMAC;
    id _owner;
}

+ (_Bool)supportsSecureCoding;
+ (id)HMACWithPayload:(id)arg1 nonce:(id)arg2;
@property(nonatomic) __weak id owner; // @synthesize owner=_owner;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isCorrectForPayload:(id)arg1;
- (id)initWithPayload:(id)arg1;

@end

