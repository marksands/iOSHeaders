//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SASettingOpenSettings.h>

#import "SASettingSettingsAction.h"

@class NSString;

@interface SASettingOpenAirplaneMode : SASettingOpenSettings <SASettingSettingsAction>
{
}

+ (id)openAirplaneModeWithDictionary:(id)arg1 context:(id)arg2;
+ (id)openAirplaneMode;
- (_Bool)requiresResponse;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

