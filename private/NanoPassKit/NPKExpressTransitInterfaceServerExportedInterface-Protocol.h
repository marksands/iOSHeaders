//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, PKPass, PKPaymentApplication, PKPaymentTransaction, PKTransitAppletState;

@protocol NPKExpressTransitInterfaceServerExportedInterface <NSObject>
- (void)showInterfaceForExpressTransitTransactionCompleteWithConcreteTransactions:(NSArray *)arg1 ephemeralTransaction:(PKPaymentTransaction *)arg2 forPass:(PKPass *)arg3 paymentApplication:(PKPaymentApplication *)arg4 withAppletState:(PKTransitAppletState *)arg5 completion:(void (^)(_Bool))arg6;
@end

