//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSSet;

@interface BRButtonResolverController : NSObject
{
    NSSet *_interfaces;
}

+ (id)sharedInstance;
- (void)scheduleReadyNotificationOnDispatchQueue:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (_Bool)playState:(unsigned long long)arg1 forSpeed:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)disableStates:(id)arg1 clearAsset:(_Bool)arg2 error:(id *)arg3;
- (_Bool)enableStates:(id)arg1 error:(id *)arg2;
- (_Bool)setConfigs:(id)arg1 withAssets:(id)arg2 forStates:(id)arg3 error:(id *)arg4;
- (_Bool)setGlobalConfigs:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) unsigned long long unusedAssetSlots;
@property(readonly, nonatomic) unsigned long long maxAssetSlots;
@property(readonly, nonatomic) _Bool isReady;
@property(readonly, nonatomic) id propertyList;
- (id)description;
- (void)dealloc;
- (id)init;

@end

