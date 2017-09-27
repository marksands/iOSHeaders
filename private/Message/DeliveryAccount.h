//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Message/MFAccount.h>

@interface DeliveryAccount : MFAccount
{
}

+ (id)newDefaultInstance;
+ (id)carrierDeliveryAccount;
+ (id)accountWithHostname:(id)arg1 username:(id)arg2 lookForExistingAccounts:(_Bool)arg3;
+ (id)accountWithHostname:(id)arg1 username:(id)arg2;
+ (id)existingAccountWithHostname:(id)arg1 username:(id)arg2;
+ (id)existingAccountWithIdentifier:(id)arg1;
+ (id)accountWithIdentifier:(id)arg1;
+ (id)accountWithUniqueId:(id)arg1;
+ (void)removeDeliveryAccount:(id)arg1;
+ (void)addDeliveryAccount:(id)arg1;
+ (id)deliveryAccounts;
+ (id)existingAccountForUniqueID:(id)arg1;
+ (void)reloadDeliveryAccounts;
+ (void)_postDeliveryAccountsHaveChanged;
+ (id)accountTypeIdentifier;
- (void)_updateAccountDescriptionWithUsername:(id)arg1 hostname:(id)arg2;
- (_Bool)shouldUseSaveSentForAccount:(id)arg1;
- (_Bool)supportsOutboxCopy;
- (_Bool)hasEnoughInformationForEasySetup;
- (_Bool)canBeFallbackAccount;
- (id)displayHostname;
- (_Bool)hasNoReferences;
- (id)mailAccountIfAvailable;
- (void)setMaximumMessageBytes:(unsigned long long)arg1;
- (unsigned long long)maximumMessageBytes;
- (void)_setAccountProperties:(id)arg1;
- (void)setUsername:(id)arg1;
- (void)setShouldUseAuthentication:(_Bool)arg1;
- (_Bool)shouldUseAuthentication;
- (id)identifier;
- (id)newDeliveryWithHeaders:(id)arg1 HTML:(id)arg2 plainTextAlternative:(id)arg3 other:(id)arg4 charsets:(id)arg5;
- (id)newDeliveryWithHeaders:(id)arg1 mixedContent:(id)arg2 textPartsAreHTML:(_Bool)arg3;
- (id)newDeliveryWithMessage:(id)arg1;
- (Class)deliveryClass;

@end

