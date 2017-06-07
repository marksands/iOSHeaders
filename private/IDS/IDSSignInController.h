//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDS/IDSServiceDelegate-Protocol.h>

@class NSMapTable, NSMutableDictionary, NSNumber, NSString;

@interface IDSSignInController : NSObject <IDSServiceDelegate>
{
    NSMapTable *_serviceCallbackMap;
    NSMutableDictionary *_nameServiceMap;
    NSNumber *_faceTimePreviousEnabled;
}

@property(retain, nonatomic) NSNumber *faceTimePreviousEnabled; // @synthesize faceTimePreviousEnabled=_faceTimePreviousEnabled;
@property(retain, nonatomic) NSMutableDictionary *nameServiceMap; // @synthesize nameServiceMap=_nameServiceMap;
@property(retain, nonatomic) NSMapTable *serviceCallbackMap; // @synthesize serviceCallbackMap=_serviceCallbackMap;
- (void).cxx_destruct;
- (id)_serviceForName:(id)arg1;
- (void)service:(id)arg1 activeAccountsChanged:(id)arg2;
- (void)unregisterEnabledStatusChangedCallbackForService:(id)arg1;
- (void)registerEnabledStatusChangedCallback:(CDUnknownBlockType)arg1 forService:(id)arg2;
- (void)disableService:(id)arg1;
- (void)enableService:(id)arg1;
- (_Bool)isServiceCurrentlyEnabled:(id)arg1;
- (id)init;
- (void)unregisteriMessageEnabledStatusChangedCallback;
- (void)registeriMessageEnabledStatusChangedCallback:(CDUnknownBlockType)arg1;
- (void)disableiMessage;
- (void)enableiMessage;
- (_Bool)isiMessageEnabled;
- (void)unregisterFaceTimeEnabledStatusChangedCallback;
- (void)registerFaceTimeEnabledStatusChangedCallback:(CDUnknownBlockType)arg1;
- (void)disableFaceTime;
- (void)enableFaceTime;
- (_Bool)isFaceTimeEnabled;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

