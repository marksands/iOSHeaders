//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitCore/PKPeerPaymentWebServiceResponse.h>

@class NSArray, NSData, NSString;

@interface PKPeerPaymentStatusResponse : PKPeerPaymentWebServiceResponse
{
    unsigned long long _status;
    NSString *_paymentIdentifier;
    NSString *_transactionIdentifier;
    NSArray *_actions;
    NSData *_amountHash;
}

@property(readonly, copy, nonatomic) NSData *amountHash; // @synthesize amountHash=_amountHash;
@property(readonly, copy, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property(readonly, copy, nonatomic) NSString *transactionIdentifier; // @synthesize transactionIdentifier=_transactionIdentifier;
@property(readonly, copy, nonatomic) NSString *paymentIdentifier; // @synthesize paymentIdentifier=_paymentIdentifier;
@property(readonly, nonatomic) unsigned long long status; // @synthesize status=_status;
- (void).cxx_destruct;
- (_Bool)amountHashIsValidForAmount:(id)arg1 andCurrency:(id)arg2;
- (id)initWithData:(id)arg1;

@end

