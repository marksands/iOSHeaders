//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitCore/PKPeerPaymentPerformResponse.h>

@class NSArray, NSData, NSString;

@interface NPKMockPeerPaymentPerformResponse : PKPeerPaymentPerformResponse
{
    unsigned long long status;
    NSString *paymentIdentifier;
    NSString *transactionIdentifier;
    NSArray *actions;
    NSData *amountHash;
}

@property(copy, nonatomic) NSData *amountHash; // @synthesize amountHash;
@property(copy, nonatomic) NSArray *actions; // @synthesize actions;
@property(copy, nonatomic) NSString *transactionIdentifier; // @synthesize transactionIdentifier;
@property(copy, nonatomic) NSString *paymentIdentifier; // @synthesize paymentIdentifier;
@property(nonatomic) unsigned long long status; // @synthesize status;
- (void).cxx_destruct;

@end

