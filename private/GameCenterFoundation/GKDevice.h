//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GKEventEmitter<GKLockStatusObserver>, NSString;

@interface GKDevice : NSObject
{
    NSString *_udid;
    NSString *_deviceName;
    NSString *_osVersion;
    NSString *_buildVersion;
    NSString *_gameKitVersion;
    _Bool _gameKitAvailable;
    GKEventEmitter<GKLockStatusObserver> *_emitter;
}

+ (id)currentDevice;
@property(retain, nonatomic) GKEventEmitter<GKLockStatusObserver> *emitter; // @synthesize emitter=_emitter;
@property(readonly, nonatomic, getter=isGameKitAvailable) _Bool gameKitAvailable; // @synthesize gameKitAvailable=_gameKitAvailable;
@property(readonly, nonatomic) NSString *gameKitVersion; // @synthesize gameKitVersion=_gameKitVersion;
@property(readonly, nonatomic) NSString *buildVersion; // @synthesize buildVersion=_buildVersion;
@property(readonly, nonatomic) NSString *osVersion; // @synthesize osVersion=_osVersion;
@property(retain, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
- (void)removeLockStatusObserver:(id)arg1;
- (void)addLockStatusObserver:(id)arg1;
- (void)stopObservingKeyBagStatus;
- (void)beginObservingKeyBagStatusWithCallback:(CDUnknownFunctionPointerType)arg1;
- (id)buildVersionHeader;
- (id)protocolVersionHeader;
- (id)storeUserAgent;
- (id)processNameHeader;
- (id)userAgentWithProcessName:(id)arg1 protocolVersion:(id)arg2;
- (id)userAgent;
- (void)dealloc;
@property(readonly, nonatomic) NSString *udid;
- (id)init;
- (_Bool)isProductType:(unsigned int)arg1;
- (_Bool)isFocusDevice;
- (_Bool)isDevelopmentDevice;
- (id)_platformUDID;
- (void)_initPlatform;

@end

