//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

#import "CEMRegisteredTypeProtocol.h"

@class NSNumber, NSString;

@interface CEMSecurityADCertificateDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>
{
    NSString *_payloadCertServer;
    NSString *_payloadCertTemplate;
    NSString *_payloadDescription;
    NSNumber *_payloadCertificateRenewalTimeInterval;
    NSString *_payloadCertificateAuthority;
    NSString *_payloadCertificateAcquisitionMechanism;
    NSNumber *_payloadAllowAllAppsAccess;
    NSNumber *_payloadPromptForCredentials;
    NSNumber *_payloadKeyIsExtractable;
    NSNumber *_payloadKeysize;
    NSNumber *_payloadEnableAutoRenewal;
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withCertServer:(id)arg2 withCertTemplate:(id)arg3;
+ (id)buildWithIdentifier:(id)arg1 withCertServer:(id)arg2 withCertTemplate:(id)arg3 withDescription:(id)arg4 withCertificateRenewalTimeInterval:(id)arg5 withCertificateAuthority:(id)arg6 withCertificateAcquisitionMechanism:(id)arg7 withAllowAllAppsAccess:(id)arg8 withPromptForCredentials:(id)arg9 withKeyIsExtractable:(id)arg10 withKeysize:(id)arg11 withEnableAutoRenewal:(id)arg12;
+ (id)restrictionPayloadKeys;
+ (id)allowedPayloadKeys;
+ (id)profileType;
+ (id)registeredIdentifier;
+ (id)registeredClassName;
@property(copy, nonatomic) NSNumber *payloadEnableAutoRenewal; // @synthesize payloadEnableAutoRenewal=_payloadEnableAutoRenewal;
@property(copy, nonatomic) NSNumber *payloadKeysize; // @synthesize payloadKeysize=_payloadKeysize;
@property(copy, nonatomic) NSNumber *payloadKeyIsExtractable; // @synthesize payloadKeyIsExtractable=_payloadKeyIsExtractable;
@property(copy, nonatomic) NSNumber *payloadPromptForCredentials; // @synthesize payloadPromptForCredentials=_payloadPromptForCredentials;
@property(copy, nonatomic) NSNumber *payloadAllowAllAppsAccess; // @synthesize payloadAllowAllAppsAccess=_payloadAllowAllAppsAccess;
@property(copy, nonatomic) NSString *payloadCertificateAcquisitionMechanism; // @synthesize payloadCertificateAcquisitionMechanism=_payloadCertificateAcquisitionMechanism;
@property(copy, nonatomic) NSString *payloadCertificateAuthority; // @synthesize payloadCertificateAuthority=_payloadCertificateAuthority;
@property(copy, nonatomic) NSNumber *payloadCertificateRenewalTimeInterval; // @synthesize payloadCertificateRenewalTimeInterval=_payloadCertificateRenewalTimeInterval;
@property(copy, nonatomic) NSString *payloadDescription; // @synthesize payloadDescription=_payloadDescription;
@property(copy, nonatomic) NSString *payloadCertTemplate; // @synthesize payloadCertTemplate=_payloadCertTemplate;
@property(copy, nonatomic) NSString *payloadCertServer; // @synthesize payloadCertServer=_payloadCertServer;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)assetReferences;
- (int)activationLevel;
- (_Bool)mustBeSupervised;
- (_Bool)multipleAllowed;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

