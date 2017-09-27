//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ButtonResolver/BRInterface.h>

@class NSMutableArray;

@interface BRInterfaceLegacy : BRInterface
{
    _Bool _isReady;
    struct __IOHIDEventSystemClient *_client;
    NSMutableArray *_services;
    CDUnknownBlockType _block;
    unsigned long long _doublePressTimeoutUs;
    unsigned long long _triplePressTimeoutUs;
    unsigned long long _doubleTapTimeoutUs;
    unsigned long long _tripleTapTimeoutUs;
    unsigned long long _longPressTimeoutUs;
    _Bool _tapOnly;
    unsigned long long _maxAssetSlots;
    unsigned long long _unusedAssetSlots;
}

+ (_Bool)_isTapState:(unsigned long long)arg1;
+ (id)interface;
@property(nonatomic) _Bool tapOnly; // @synthesize tapOnly=_tapOnly;
- (unsigned long long)unusedAssetSlots;
- (unsigned long long)maxAssetSlots;
- (_Bool)isReady;
- (_Bool)_disableState:(unsigned long long)arg1;
- (_Bool)_enableState:(unsigned long long)arg1;
- (_Bool)_setConfig:(id)arg1 forState:(unsigned long long)arg2 error:(id *)arg3;
- (void)scheduleReadyNotificationWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)disableStates:(id)arg1 clearAsset:(_Bool)arg2 error:(id *)arg3;
- (_Bool)enableStates:(id)arg1 error:(id *)arg2;
- (_Bool)setConfigs:(id)arg1 withAssets:(id)arg2 forStates:(id)arg3 error:(id *)arg4;
- (_Bool)setGlobalConfigs:(id)arg1 error:(id *)arg2;
- (_Bool)_setDefaultServicePropertiesOnService:(struct __IOHIDServiceClient *)arg1;
- (_Bool)_servicesSetProperty:(void *)arg1 forKey:(struct __CFString *)arg2;
- (void)serviceAddedHandler:(struct __IOHIDServiceClient *)arg1;
- (void)_findServices;
- (id)propertyList;
- (id)description;
- (void)dealloc;
- (id)init;

@end

