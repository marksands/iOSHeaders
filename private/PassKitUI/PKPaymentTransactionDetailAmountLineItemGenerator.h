//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PKPaymentTransactionDetailAmountLineItemGenerator : NSObject
{
    _Bool _hasTrailingLineSeperator;
}

@property(nonatomic) _Bool hasTrailingLineSeperator; // @synthesize hasTrailingLineSeperator=_hasTrailingLineSeperator;
- (id)_feeLineItemsForFees:(id)arg1;
- (id)_unqualifiedTotalLineItemForTransaction:(id)arg1;
- (id)_totalSentLineItemForTransaction:(id)arg1;
- (id)_totalPaidLineItemForTransaction:(id)arg1;
- (id)_primaryFundingSourceLineItemForTransaction:(id)arg1 pass:(id)arg2;
- (id)_secondaryFundingSourceLineItemForTransaction:(id)arg1;
- (id)lineItemsForTransaction:(id)arg1 pass:(id)arg2;

@end

