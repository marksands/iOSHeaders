//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@interface SFCertificate_Ivars : NSObject
{
    long long certificateType;
    NSString *subject;
    NSString *issuerName;
    NSData *serialNumber;
    struct __SecCertificate *secCertificate;
}

- (void).cxx_destruct;

@end

