//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@interface _SFCertificate : NSObject
{
    id _certificateInternal;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct __SecCertificate *secCertificate;
@property(readonly, nonatomic) NSData *serialNumber;
@property(readonly, nonatomic) NSString *issuerName;
@property(readonly, nonatomic) NSString *subject;
@property(readonly, nonatomic) long long certificateType;
- (id)initWithSecCertificate:(struct __SecCertificate *)arg1;

@end

