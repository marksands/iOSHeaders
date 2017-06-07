//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSData, NSString;

@interface PKTrustedDeviceEnrollmentInfo : NSObject <NSSecureCoding>
{
    _Bool _supportsAccessExpressMode;
    NSString *_deviceName;
    NSString *_deviceSerialNumber;
    NSString *_deviceUDID;
    NSString *_productType;
    NSString *_secureElementIdentifier;
    NSString *_certificate;
    NSData *_signature;
    unsigned long long _secureElementHardwareVersion;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool supportsAccessExpressMode; // @synthesize supportsAccessExpressMode=_supportsAccessExpressMode;
@property(nonatomic) unsigned long long secureElementHardwareVersion; // @synthesize secureElementHardwareVersion=_secureElementHardwareVersion;
@property(retain, nonatomic) NSData *signature; // @synthesize signature=_signature;
@property(retain, nonatomic) NSString *certificate; // @synthesize certificate=_certificate;
@property(retain, nonatomic) NSString *secureElementIdentifier; // @synthesize secureElementIdentifier=_secureElementIdentifier;
@property(retain, nonatomic) NSString *productType; // @synthesize productType=_productType;
@property(retain, nonatomic) NSString *deviceUDID; // @synthesize deviceUDID=_deviceUDID;
@property(retain, nonatomic) NSString *deviceSerialNumber; // @synthesize deviceSerialNumber=_deviceSerialNumber;
@property(retain, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

