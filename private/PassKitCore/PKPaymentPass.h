//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PassKitCore/PKPass.h>

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSArray, NSSet, NSString, NSURL, PKCurrencyAmount, PKPaymentApplication, PKTransitPassProperties;

@interface PKPaymentPass : PKPass <NSCopying, NSSecureCoding>
{
    _Bool _supportsDPANNotifications;
    _Bool _supportsFPANNotifications;
    _Bool _supportsDefaultCardSelection;
    _Bool _hasAssociatedPeerPaymentAccount;
    _Bool _supportsPeerPayment;
    _Bool _supportsSerialNumberBasedProvisioning;
    _Bool _paymentOptionSelectable;
    _Bool _cobranded;
    _Bool _requiresTransferSerialNumberBasedProvisioning;
    NSString *_primaryAccountIdentifier;
    NSString *_primaryAccountNumberSuffix;
    NSSet *_associatedApplicationIdentifiers;
    NSSet *_associatedWebDomains;
    NSString *_sanitizedPrimaryAccountNumber;
    NSString *_issuerCountryCode;
    NSSet *_paymentApplications;
    NSSet *_devicePaymentApplications;
    PKPaymentApplication *_devicePrimaryPaymentApplication;
    PKPaymentApplication *_devicePrimaryContactlessPaymentApplication;
    PKPaymentApplication *_devicePrimaryInAppPaymentApplication;
    NSSet *_deviceInAppPaymentApplications;
    NSString *_cobrandName;
    NSURL *_transactionServiceURL;
    NSString *_transactionPushTopic;
    NSURL *_messageServiceURL;
    NSString *_messagePushTopic;
    NSString *_appURLScheme;
    NSString *_localizedSuspendedReason;
    NSArray *_availableActions;
}

+ (unsigned long long)defaultSettings;
+ (_Bool)supportsSecureCoding;
+ (id)displayableErrorForAction:(id)arg1 andReason:(unsigned long long)arg2;
+ (id)displayableNoPaymentNetworkErrorMessageForAction:(id)arg1;
@property(copy, nonatomic) NSArray *availableActions; // @synthesize availableActions=_availableActions;
@property(nonatomic) _Bool requiresTransferSerialNumberBasedProvisioning; // @synthesize requiresTransferSerialNumberBasedProvisioning=_requiresTransferSerialNumberBasedProvisioning;
@property(copy, nonatomic) NSString *localizedSuspendedReason; // @synthesize localizedSuspendedReason=_localizedSuspendedReason;
@property(copy, nonatomic) NSString *appURLScheme; // @synthesize appURLScheme=_appURLScheme;
@property(copy, nonatomic) NSString *messagePushTopic; // @synthesize messagePushTopic=_messagePushTopic;
@property(copy, nonatomic) NSURL *messageServiceURL; // @synthesize messageServiceURL=_messageServiceURL;
@property(copy, nonatomic) NSString *transactionPushTopic; // @synthesize transactionPushTopic=_transactionPushTopic;
@property(copy, nonatomic) NSURL *transactionServiceURL; // @synthesize transactionServiceURL=_transactionServiceURL;
@property(copy, nonatomic) NSString *cobrandName; // @synthesize cobrandName=_cobrandName;
@property(nonatomic, getter=isCobranded) _Bool cobranded; // @synthesize cobranded=_cobranded;
@property(retain, nonatomic) NSSet *deviceInAppPaymentApplications; // @synthesize deviceInAppPaymentApplications=_deviceInAppPaymentApplications;
@property(retain, nonatomic) PKPaymentApplication *devicePrimaryInAppPaymentApplication; // @synthesize devicePrimaryInAppPaymentApplication=_devicePrimaryInAppPaymentApplication;
@property(retain, nonatomic) PKPaymentApplication *devicePrimaryContactlessPaymentApplication; // @synthesize devicePrimaryContactlessPaymentApplication=_devicePrimaryContactlessPaymentApplication;
@property(retain, nonatomic) PKPaymentApplication *devicePrimaryPaymentApplication; // @synthesize devicePrimaryPaymentApplication=_devicePrimaryPaymentApplication;
@property(copy, nonatomic) NSSet *devicePaymentApplications; // @synthesize devicePaymentApplications=_devicePaymentApplications;
@property(copy, nonatomic) NSSet *paymentApplications; // @synthesize paymentApplications=_paymentApplications;
@property(nonatomic, getter=isPaymentOptionSelectable) _Bool paymentOptionSelectable; // @synthesize paymentOptionSelectable=_paymentOptionSelectable;
@property(nonatomic) _Bool supportsSerialNumberBasedProvisioning; // @synthesize supportsSerialNumberBasedProvisioning=_supportsSerialNumberBasedProvisioning;
@property(copy, nonatomic) NSString *issuerCountryCode; // @synthesize issuerCountryCode=_issuerCountryCode;
@property(nonatomic) _Bool supportsPeerPayment; // @synthesize supportsPeerPayment=_supportsPeerPayment;
@property(nonatomic) _Bool hasAssociatedPeerPaymentAccount; // @synthesize hasAssociatedPeerPaymentAccount=_hasAssociatedPeerPaymentAccount;
@property(nonatomic) _Bool supportsDefaultCardSelection; // @synthesize supportsDefaultCardSelection=_supportsDefaultCardSelection;
@property(nonatomic) _Bool supportsFPANNotifications; // @synthesize supportsFPANNotifications=_supportsFPANNotifications;
@property(nonatomic) _Bool supportsDPANNotifications; // @synthesize supportsDPANNotifications=_supportsDPANNotifications;
@property(copy, nonatomic) NSString *sanitizedPrimaryAccountNumber; // @synthesize sanitizedPrimaryAccountNumber=_sanitizedPrimaryAccountNumber;
@property(copy, nonatomic) NSSet *associatedWebDomains; // @synthesize associatedWebDomains=_associatedWebDomains;
@property(copy, nonatomic) NSSet *associatedApplicationIdentifiers; // @synthesize associatedApplicationIdentifiers=_associatedApplicationIdentifiers;
@property(copy, nonatomic) NSString *primaryAccountNumberSuffix; // @synthesize primaryAccountNumberSuffix=_primaryAccountNumberSuffix;
@property(copy, nonatomic) NSString *primaryAccountIdentifier; // @synthesize primaryAccountIdentifier=_primaryAccountIdentifier;
- (void).cxx_destruct;
- (id)sortedPaymentApplications:(id)arg1 ascending:(_Bool)arg2;
- (id)_launchURLForPassAction:(id)arg1;
- (id)addValueURL;
- (id)felicaProperties;
@property(readonly, copy, nonatomic) PKTransitPassProperties *transitProperties;
- (id)notificationCenterTitle;
- (id)_localizedSuspendedReasonForAID:(id)arg1;
- (_Bool)supportsWebPaymentMode:(long long)arg1 withExclusionList:(id)arg2 clientOSVersion:(id)arg3;
- (_Bool)supportsWebPaymentMode:(long long)arg1 withExclusionList:(id)arg2;
- (void)sanitizePaymentApplications;
- (void)updateDevicePaymentApplicationsWithSecureElementIdentifiers:(id)arg1;
- (unsigned long long)contactlessActivationState;
@property(readonly, nonatomic) unsigned long long activationState;
- (unsigned long long)_activationStateForApplicationState:(long long)arg1;
- (_Bool)hasContactlessDevicePaymentApplicationsAvailable;
- (long long)effectiveContactlessPaymentApplicationState;
- (id)sanitizedDeviceAccountNumber;
@property(readonly) __weak NSString *deviceAccountNumberSuffix;
@property(readonly) __weak NSString *deviceAccountIdentifier;
- (_Bool)availableForAutomaticPresentationUsingBeaconContext;
- (_Bool)availableForAutomaticPresentationUsingVASContext;
- (_Bool)isSuicaPass;
- (_Bool)isTransitPass;
- (_Bool)isAccessPass;
@property(readonly, nonatomic, getter=isPrivateLabel) _Bool privateLabel;
- (_Bool)isDevicePrimaryPaymentApplicationPersonalized;
- (id)paymentApplicationForAID:(id)arg1;
- (id)paymentApplicationsForSecureElementIdentifiers:(id)arg1;
- (id)primaryPaymentApplicationForSecureElementIdentifiers:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 bundle:(id)arg2;
@property(retain, nonatomic) PKCurrencyAmount *peerPaymentBalance;
- (_Bool)canPerformAction:(id)arg1 unableReason:(unsigned long long *)arg2 displayableError:(id *)arg3;

@end

