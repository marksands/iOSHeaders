//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIApplicationSceneClientSettings.h"

#import "SBSUILoginUISceneClientSettings.h"

@class NSString;

@interface SBSUILoginUISceneClientSettings : UIApplicationSceneClientSettings <SBSUILoginUISceneClientSettings>
{
}

- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) long long rotationMode;
@property(readonly, copy, nonatomic) NSString *statusBarUserNameOverride;
@property(readonly, nonatomic) long long idleTimerMode;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

