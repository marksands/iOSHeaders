//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface PKEntitlementWhitelist : NSObject
{
    _Bool _passesAllAccess;
    _Bool _passesAddSilently;
    _Bool _passPresentationSuppression;
    _Bool _paymentAllAccess;
    _Bool _paymentConfiguration;
    _Bool _paymentPresentation;
    _Bool _inAppPayments;
    _Bool _inAppPaymentsPrivate;
    _Bool _cardOnFilePayments;
    _Bool _trustedDeviceEnrollmentInfo;
    _Bool _peerPaymentAllAccess;
    _Bool _addSilently;
    NSString *_applicationID;
    NSArray *_merchantIdentifiers;
    NSArray *_teamIDs;
    NSArray *_passTypeIDs;
}

+ (_Bool)supportsSecureCoding;
@property _Bool addSilently; // @synthesize addSilently=_addSilently;
@property(copy) NSArray *passTypeIDs; // @synthesize passTypeIDs=_passTypeIDs;
@property(copy) NSArray *teamIDs; // @synthesize teamIDs=_teamIDs;
@property(readonly, copy) NSArray *merchantIdentifiers; // @synthesize merchantIdentifiers=_merchantIdentifiers;
@property(readonly, copy) NSString *applicationID; // @synthesize applicationID=_applicationID;
@property(readonly) _Bool peerPaymentAllAccess; // @synthesize peerPaymentAllAccess=_peerPaymentAllAccess;
@property(readonly) _Bool trustedDeviceEnrollmentInfo; // @synthesize trustedDeviceEnrollmentInfo=_trustedDeviceEnrollmentInfo;
@property(readonly) _Bool cardOnFilePayments; // @synthesize cardOnFilePayments=_cardOnFilePayments;
@property(readonly) _Bool inAppPaymentsPrivate; // @synthesize inAppPaymentsPrivate=_inAppPaymentsPrivate;
@property(readonly) _Bool inAppPayments; // @synthesize inAppPayments=_inAppPayments;
@property(readonly) _Bool paymentPresentation; // @synthesize paymentPresentation=_paymentPresentation;
@property(readonly) _Bool paymentConfiguration; // @synthesize paymentConfiguration=_paymentConfiguration;
@property(readonly) _Bool paymentAllAccess; // @synthesize paymentAllAccess=_paymentAllAccess;
@property(readonly) _Bool passPresentationSuppression; // @synthesize passPresentationSuppression=_passPresentationSuppression;
@property(readonly) _Bool passesAddSilently; // @synthesize passesAddSilently=_passesAddSilently;
@property(readonly) _Bool passesAllAccess; // @synthesize passesAllAccess=_passesAllAccess;
- (void).cxx_destruct;
- (void)_probeEntitlementsWithConnection:(id)arg1;
@property(readonly) _Bool allAccess;
- (id)initWithConnection:(id)arg1;

@end

