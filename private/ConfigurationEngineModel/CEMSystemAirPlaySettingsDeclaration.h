//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

#import "CEMRegisteredTypeProtocol.h"

@class NSNumber, NSString;

@interface CEMSystemAirPlaySettingsDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>
{
    NSNumber *_payloadForceAirPlayOutgoingRequestsPairingPassword;
    NSNumber *_payloadForceAirPlayIncomingRequestsPairingPassword;
    NSNumber *_payloadAllowAirPlayIncomingRequests;
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)buildWithIdentifier:(id)arg1 withForceAirPlayOutgoingRequestsPairingPassword:(id)arg2 withForceAirPlayIncomingRequestsPairingPassword:(id)arg3 withAllowAirPlayIncomingRequests:(id)arg4;
+ (id)restrictionPayloadKeys;
+ (id)allowedPayloadKeys;
+ (id)profileType;
+ (id)registeredIdentifier;
+ (id)registeredClassName;
@property(copy, nonatomic) NSNumber *payloadAllowAirPlayIncomingRequests; // @synthesize payloadAllowAirPlayIncomingRequests=_payloadAllowAirPlayIncomingRequests;
@property(copy, nonatomic) NSNumber *payloadForceAirPlayIncomingRequestsPairingPassword; // @synthesize payloadForceAirPlayIncomingRequestsPairingPassword=_payloadForceAirPlayIncomingRequestsPairingPassword;
@property(copy, nonatomic) NSNumber *payloadForceAirPlayOutgoingRequestsPairingPassword; // @synthesize payloadForceAirPlayOutgoingRequestsPairingPassword=_payloadForceAirPlayOutgoingRequestsPairingPassword;
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

