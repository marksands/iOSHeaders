//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CDDClientConnection, NSArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSSet;

@interface CDSession : NSObject
{
    CDDClientConnection *_cddClientConnection;
    NSSet *_deviceList;
    NSMutableDictionary *_cachedAttributes;
    NSMutableDictionary *_cachedBudgets;
    NSObject<OS_dispatch_queue> *_cacheSerializerQ;
    unsigned long long _clientId;
    _Bool _verbose;
    _Bool _enabledCaching;
    int _deviceChangeToken;
    int duetRestartToken;
    NSArray *nonBundles;
    CDUnknownBlockType _deviceHandler;
}

+ (id)sharedSessionWithClientId:(unsigned long long)arg1;
@property(copy) CDUnknownBlockType deviceHandler; // @synthesize deviceHandler=_deviceHandler;
@property int deviceChangeToken; // @synthesize deviceChangeToken=_deviceChangeToken;
@property _Bool enabledCaching; // @synthesize enabledCaching=_enabledCaching;
@property _Bool verbose; // @synthesize verbose=_verbose;
@property(retain) NSObject<OS_dispatch_queue> *cacheSerializerQ; // @synthesize cacheSerializerQ=_cacheSerializerQ;
@property(retain) NSMutableDictionary *cachedBudgets; // @synthesize cachedBudgets=_cachedBudgets;
@property(retain) NSMutableDictionary *cachedAttributes; // @synthesize cachedAttributes=_cachedAttributes;
@property(retain) NSSet *deviceList; // @synthesize deviceList=_deviceList;
@property unsigned long long clientId; // @synthesize clientId=_clientId;
@property(readonly) CDDClientConnection *cddClientConnection; // @synthesize cddClientConnection=_cddClientConnection;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)setGlancesLingeredOn:(id)arg1 error:(id *)arg2;
- (_Bool)setActiveComplications:(id)arg1 error:(id *)arg2;
- (_Bool)setNonAppBundlIdWithError:(id)arg1 error:(id *)arg2;
- (_Bool)setNonAppBundleIdWithError:(id)arg1 error:(id *)arg2;
- (_Bool)broadcastSystemDataWithError:(id *)arg1;
- (id)getDeviceFromDescription:(id)arg1 error:(id *)arg2;
- (_Bool)setDevicesChangedHandlerWithError:(id *)arg1 handler:(CDUnknownBlockType)arg2;
- (id)copyDevicesUncached;
- (id)getDevices;
- (id)getDevicesInternal;
- (_Bool)registerForDeviceChanges;
- (id)attributeComponentsFromRepresentation:(id)arg1 error:(id *)arg2;
- (id)attributeExtendedComponentsFromRepresentation:(id)arg1 error:(id *)arg2;
- (id)attributeFromRepresentation:(id)arg1 error:(id *)arg2;
- (id)representationStringFromAttribute:(id)arg1 value:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (id)representationStringFromAttribute:(id)arg1 value:(id)arg2 error:(id *)arg3;
- (id)attributeFromFullname:(id)arg1 error:(id *)arg2;
- (_Bool)deleteClientDataWithError:(id *)arg1;
- (id)registerBudgetWithName:(id)arg1 value:(long long)arg2 type:(long long)arg3 withOptions:(unsigned long long)arg4 error:(id *)arg5;
- (id)registerBudgetWithName:(id)arg1 value:(long long)arg2 type:(long long)arg3 error:(id *)arg4;
- (id)registerAttributeWithName:(id)arg1 type:(long long)arg2 dataProtectionClass:(id)arg3 error:(id *)arg4;
- (id)budgetForName:(id)arg1 type:(long long)arg2 error:(id *)arg3;
- (id)attributeForName:(id)arg1 type:(long long)arg2 error:(id *)arg3;
- (id)attributeForName:(id)arg1 type:(long long)arg2 clientId:(unsigned long long)arg3 error:(id *)arg4;
- (id)budgetNamesWithError:(id *)arg1;
- (id)attributeNamesWithError:(id *)arg1;
- (id)description;
- (id)initWithClientId:(unsigned long long)arg1 enableCaching:(_Bool)arg2;
- (id)initWithClientId:(unsigned long long)arg1;
- (id)init;

@end

