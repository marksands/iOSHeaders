//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <CoreHAP/HMFMerging-Protocol.h>

@class CBService, HAPAccessory, NSArray, NSNumber, NSString;

@interface HAPService : HMFObject <HMFMerging>
{
    NSString *_type;
    NSNumber *_instanceID;
    HAPAccessory *_accessory;
    NSArray *_characteristics;
    NSArray *_linkedServices;
    unsigned long long _serviceProperties;
}

@property(readonly, nonatomic) unsigned long long serviceProperties; // @synthesize serviceProperties=_serviceProperties;
@property(readonly, nonatomic) NSArray *linkedServices; // @synthesize linkedServices=_linkedServices;
@property(retain, nonatomic) NSArray *characteristics; // @synthesize characteristics=_characteristics;
@property(nonatomic) __weak HAPAccessory *accessory; // @synthesize accessory=_accessory;
@property(copy, nonatomic) NSNumber *instanceID; // @synthesize instanceID=_instanceID;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (_Bool)mergeObject:(id)arg1;
- (_Bool)shouldMergeObject:(id)arg1;
- (id)characteristicsOfType:(id)arg1;
- (_Bool)_validateMandatoryCharacteristics;
- (_Bool)_validateServiceCharacteristics;
- (_Bool)_updateCharacteristic:(id)arg1;
- (_Bool)_updateAndValidateCharacteristics;
- (id)propertiesDescription;
@property(readonly, copy) NSString *description;
- (_Bool)isEqualToService:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithType:(id)arg1 instanceID:(id)arg2;
- (id)initWithType:(id)arg1 instanceID:(id)arg2 parsedCharacteristics:(id)arg3 serviceProperties:(unsigned long long)arg4 linkedServices:(id)arg5;
@property(retain, nonatomic, setter=setCBService:) CBService *cbService;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

