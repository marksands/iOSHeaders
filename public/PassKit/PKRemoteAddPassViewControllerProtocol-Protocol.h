//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSData, NSError, PKPaymentPass;

@protocol PKRemoteAddPassViewControllerProtocol <NSObject>
- (void)didFinishWithPass:(PKPaymentPass *)arg1 error:(NSError *)arg2;
- (void)generateRequestWithCertificateChain:(NSArray *)arg1 nonce:(NSData *)arg2 nonceSignature:(NSData *)arg3 completionHandler:(void (^)(PKAddPaymentPassRequest *))arg4;
@end

