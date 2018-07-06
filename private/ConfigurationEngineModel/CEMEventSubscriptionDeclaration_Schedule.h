//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSNumber, NSString;

@interface CEMEventSubscriptionDeclaration_Schedule : CEMPayloadBase
{
    NSString *_payloadFrequency;
    NSString *_payloadLocalTime;
    NSNumber *_payloadSpread;
    NSNumber *_payloadDay;
}

+ (id)buildRequiredOnlyWithFrequency:(id)arg1;
+ (id)buildWithFrequency:(id)arg1 withLocalTime:(id)arg2 withSpread:(id)arg3 withDay:(id)arg4;
+ (id)allowedPayloadKeys;
@property(copy, nonatomic) NSNumber *payloadDay; // @synthesize payloadDay=_payloadDay;
@property(copy, nonatomic) NSNumber *payloadSpread; // @synthesize payloadSpread=_payloadSpread;
@property(copy, nonatomic) NSString *payloadLocalTime; // @synthesize payloadLocalTime=_payloadLocalTime;
@property(copy, nonatomic) NSString *payloadFrequency; // @synthesize payloadFrequency=_payloadFrequency;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;

@end

