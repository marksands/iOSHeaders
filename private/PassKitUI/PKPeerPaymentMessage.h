//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MSMessage, NSData, NSDecimalNumber, NSString, PKCurrencyAmount, PKProtobufPeerPaymentMessage;

@interface PKPeerPaymentMessage : NSObject
{
    PKProtobufPeerPaymentMessage *_protoMessage;
    MSMessage *_underlyingMessage;
}

@property(readonly, nonatomic) MSMessage *underlyingMessage; // @synthesize underlyingMessage=_underlyingMessage;
- (void).cxx_destruct;
- (id)description;
- (id)_dataWithDataURL:(id)arg1;
- (id)_dataURLWithData:(id)arg1;
- (void)_updateLayoutContents;
- (void)_updateSummayText;
- (void)_updateDataURL;
- (void)updateWithPeerPaymentPerformResponse:(id)arg1;
- (void)updateSummaryTextWithSenderParticipantIdentifier:(id)arg1;
@property(readonly, nonatomic) _Bool hasBeenSent;
@property(copy, nonatomic) NSData *externalizedControllerState;
@property(copy, nonatomic) NSString *memo;
@property(copy, nonatomic) NSString *transactionIdentifier;
@property(copy, nonatomic) NSString *paymentIdentifier;
@property(copy, nonatomic) NSString *requestToken;
@property(copy, nonatomic) NSString *recipientAddress;
@property(copy, nonatomic) NSString *senderAddress;
@property(copy, nonatomic) PKCurrencyAmount *currencyAmount;
@property(copy, nonatomic) NSDecimalNumber *amount;
@property(copy, nonatomic) NSString *currency;
@property(nonatomic) unsigned long long type;
- (id)initWithUnderlyingMessage:(id)arg1;
- (id)initWithType:(unsigned long long)arg1 session:(id)arg2;
- (id)initWithType:(unsigned long long)arg1;
- (id)init;

@end

