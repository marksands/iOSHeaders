//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Intents/INIntent.h>

#import "INTransferMoneyIntentExport.h"

@class INDateComponentsRange, INPaymentAccount, INPaymentAmount, NSString;

@interface INTransferMoneyIntent : INIntent <INTransferMoneyIntentExport>
{
}

- (void)setParametersByName:(id)arg1;
- (id)parametersByName;
- (void)setVerb:(id)arg1;
- (id)verb;
- (void)setDomain:(id)arg1;
- (id)domain;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (id)_dictionaryRepresentation;
- (void)setTransactionNote:(id)arg1;
@property(readonly, copy, nonatomic) NSString *transactionNote;
- (void)setTransactionScheduledDate:(id)arg1;
@property(readonly, copy, nonatomic) INDateComponentsRange *transactionScheduledDate;
- (void)setTransactionAmount:(id)arg1;
@property(readonly, copy, nonatomic) INPaymentAmount *transactionAmount;
- (void)setToAccount:(id)arg1;
@property(readonly, copy, nonatomic) INPaymentAccount *toAccount;
- (void)setFromAccount:(id)arg1;
@property(readonly, copy, nonatomic) INPaymentAccount *fromAccount;
- (id)initWithFromAccount:(id)arg1 toAccount:(id)arg2 transactionAmount:(id)arg3 transactionScheduledDate:(id)arg4 transactionNote:(id)arg5;
- (id)_metadata;
- (id)_typedBackingStore;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

