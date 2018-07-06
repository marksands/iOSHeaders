//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMNetworkVPNDeclaration_VendorConfig : CEMPayloadBase
{
    NSString *_payloadRealm;
    NSString *_payloadRole;
    NSString *_payloadGroup;
    NSString *_payloadLoginGroupOrDomain;
}

+ (id)buildRequiredOnly;
+ (id)buildWithRealm:(id)arg1 withRole:(id)arg2 withGroup:(id)arg3 withLoginGroupOrDomain:(id)arg4;
+ (id)allowedPayloadKeys;
@property(copy, nonatomic) NSString *payloadLoginGroupOrDomain; // @synthesize payloadLoginGroupOrDomain=_payloadLoginGroupOrDomain;
@property(copy, nonatomic) NSString *payloadGroup; // @synthesize payloadGroup=_payloadGroup;
@property(copy, nonatomic) NSString *payloadRole; // @synthesize payloadRole=_payloadRole;
@property(copy, nonatomic) NSString *payloadRealm; // @synthesize payloadRealm=_payloadRealm;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;

@end

