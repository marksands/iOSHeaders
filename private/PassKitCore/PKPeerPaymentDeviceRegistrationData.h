//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSData, NSDictionary, NSString;

@interface PKPeerPaymentDeviceRegistrationData : NSObject <NSSecureCoding>
{
    _Bool _devSigned;
    NSString *_signedAuthToken;
    NSDictionary *_enrollmentData;
    NSData *_signedEnrollmentDataSignature;
    NSString *_companionSerialNumber;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *companionSerialNumber; // @synthesize companionSerialNumber=_companionSerialNumber;
@property(nonatomic) _Bool devSigned; // @synthesize devSigned=_devSigned;
@property(copy, nonatomic) NSData *signedEnrollmentDataSignature; // @synthesize signedEnrollmentDataSignature=_signedEnrollmentDataSignature;
@property(copy, nonatomic) NSDictionary *enrollmentData; // @synthesize enrollmentData=_enrollmentData;
@property(copy, nonatomic) NSString *signedAuthToken; // @synthesize signedAuthToken=_signedAuthToken;
- (void).cxx_destruct;
- (_Bool)isEqualToPeerPaymentDeviceRegistrationData:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

