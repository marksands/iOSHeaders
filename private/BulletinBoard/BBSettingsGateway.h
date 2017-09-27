//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BBSettingsGatewayClientInterface.h"

@class NSObject<OS_dispatch_queue>, NSString, NSXPCConnection;

@interface BBSettingsGateway : NSObject <BBSettingsGatewayClientInterface>
{
    CDUnknownBlockType _overrideStatusChangeHandler;
    CDUnknownBlockType _activeOverrideTypesChangedHandler;
    CDUnknownBlockType _activeOverrideTypesChangedActiveQuietModeAssertionCountHandler;
    CDUnknownBlockType _overrideStateChangeHandler;
    CDUnknownBlockType _overridesChangedHandler;
    CDUnknownBlockType _overridesEffectiveWhileUnlockedChangedHandler;
    CDUnknownBlockType _privilegedSenderGroupChangedHandler;
    CDUnknownBlockType _privilegedSenderTypesChangedHandler;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (void)initialize;
+ (id)serverInterface;
+ (id)clientInterface;
- (void).cxx_destruct;
- (void)setPrivilegedSenderTypes:(unsigned long long)arg1;
- (void)setPrivilegedSenderAddressBookGroupRecordID:(int)arg1 name:(id)arg2;
- (void)setBehaviorOverridesEffectiveWhileUnlocked:(_Bool)arg1;
- (void)setBehaviorOverrideStatus:(long long)arg1;
- (void)setBehaviorOverrides:(id)arg1;
- (void)setActiveBehaviorOverrideTypesChangeHandler:(CDUnknownBlockType)arg1;
- (void)setBehaviorOverrideStatusChangeHandler:(CDUnknownBlockType)arg1;
- (void)setBehaviorOverridesChangeHandler:(CDUnknownBlockType)arg1;
- (void)setBehaviorOverridesEnabled:(_Bool)arg1;
- (void)getBehaviorOverridesEnabledWithCompletion:(CDUnknownBlockType)arg1;
- (void)requestQuietModeOverrideAssertionWithCompletion:(CDUnknownBlockType)arg1;
- (void)privilegedSenderTypesChanged:(unsigned long long)arg1 source:(unsigned long long)arg2;
- (void)privilegedSenderAddressBookGroupRecordIDChanged:(int)arg1 name:(id)arg2 source:(unsigned long long)arg3;
- (void)activeBehaviorOverrideTypesChanged:(unsigned long long)arg1 source:(unsigned long long)arg2 activeQuietModeAssertionCount:(unsigned long long)arg3;
- (void)activeBehaviorOverrideTypesChanged:(unsigned long long)arg1 source:(unsigned long long)arg2;
- (void)behaviorOverrideStatusChanged:(long long)arg1 source:(unsigned long long)arg2;
- (void)behaviorOverridesEffectiveWhileUnlockedChanged:(_Bool)arg1 source:(unsigned long long)arg2;
- (void)behaviorOverridesChanged:(id)arg1 source:(unsigned long long)arg2;
- (void)getBehaviorOverridesEffectiveWhileUnlockedWithCompletion:(CDUnknownBlockType)arg1;
- (void)setBehaviorOverridesEffectiveWhileUnlocked:(_Bool)arg1 source:(unsigned long long)arg2;
- (void)setPrivilegedSenderAddressBookGroupRecordID:(int)arg1 name:(id)arg2 source:(unsigned long long)arg3;
- (void)setEffectiveGlobalContentPreviewsSetting:(long long)arg1;
- (void)setPrivilegedSenderTypes:(unsigned long long)arg1 source:(unsigned long long)arg2;
- (void)setBehaviorOverrideStatus:(long long)arg1 effectiveDate:(id)arg2 source:(unsigned long long)arg3;
- (void)setBehaviorOverrideStatus:(long long)arg1 source:(unsigned long long)arg2;
- (void)setBehaviorOverrides:(id)arg1 source:(unsigned long long)arg2;
- (void)updateSectionInfoForSectionID:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)setSectionInfo:(id)arg1 forSectionID:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)setSectionInfo:(id)arg1 forSectionID:(id)arg2;
- (void)setOrderedSectionIDs:(id)arg1;
- (void)setSectionOrderRule:(long long)arg1;
- (void)setPrivilegedSenderTypesWithSourceChangeHandler:(CDUnknownBlockType)arg1;
- (void)setPrivilegedSenderAddressBookGroupRecordIDWithSourceChangeHandler:(CDUnknownBlockType)arg1;
- (void)setBehaviorOverrideStateChangeHandler:(CDUnknownBlockType)arg1;
- (void)getEffectiveGlobalContentPreviewsSettingWithCompletion:(CDUnknownBlockType)arg1;
- (void)getBehaviorOverridesEnabledAndEffectiveDateWithCompletion:(CDUnknownBlockType)arg1;
- (void)setActiveBehaviorOverrideTypesWithSourceChangeActiveQuietModeAssertionCountHandler:(CDUnknownBlockType)arg1;
- (void)setActiveBehaviorOverrideTypesWithSourceChangeHandler:(CDUnknownBlockType)arg1;
- (void)setBehaviorOverrideStatusWithSourceChangeHandler:(CDUnknownBlockType)arg1;
- (void)setBehaviorOverridesWithSourceChangeHandler:(CDUnknownBlockType)arg1;
- (void)setBehaviorOverridesEffectiveWhileUnlockedChangeHandler:(CDUnknownBlockType)arg1;
- (void)getPrivilegedSenderAddressBookGroupRecordIDAndNameWithCompletion:(CDUnknownBlockType)arg1;
- (void)getPrivilegedSenderTypesWithCompletion:(CDUnknownBlockType)arg1;
- (void)getBehaviorOverridesWithCompletion:(CDUnknownBlockType)arg1;
- (void)getSectionOrderRuleWithCompletion:(CDUnknownBlockType)arg1;
- (void)getSectionInfoForActiveSectionsWithCompletion:(CDUnknownBlockType)arg1;
- (void)getEffectiveSectionInfoForSectionID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)getSectionInfoForSectionID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)getEffectiveSectionInfoForSectionIDs:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)getSectionInfoForSectionIDs:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)getSectionInfoWithCompletion:(CDUnknownBlockType)arg1;
- (void)invalidate;
- (void)dealloc;
- (id)initWithQueue:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

