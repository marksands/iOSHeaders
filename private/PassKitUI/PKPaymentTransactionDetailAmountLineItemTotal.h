//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitUI/PKPaymentTransactionDetailAmountLineItem-Protocol.h>

@class NSString;

@interface PKPaymentTransactionDetailAmountLineItemTotal : NSObject <PKPaymentTransactionDetailAmountLineItem>
{
    NSString *_label;
    NSString *_value;
    _Bool _hasTrailingLineSeperator;
}

@property(nonatomic) _Bool hasTrailingLineSeperator; // @synthesize hasTrailingLineSeperator=_hasTrailingLineSeperator;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long lineItemType;
@property(readonly, nonatomic) _Bool isEmphasized;
@property(readonly, nonatomic) NSString *value;
@property(readonly, nonatomic) NSString *label;
- (id)initWithAmount:(id)arg1 totalType:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

