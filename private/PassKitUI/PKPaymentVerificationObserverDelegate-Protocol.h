//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, PKPaymentVerificationObserver;

@protocol PKPaymentVerificationObserverDelegate <NSObject>
- (void)verificationObserverDidTimeout:(PKPaymentVerificationObserver *)arg1;
- (void)verificationObserver:(PKPaymentVerificationObserver *)arg1 didObserveVerificationCode:(NSString *)arg2;
@end

