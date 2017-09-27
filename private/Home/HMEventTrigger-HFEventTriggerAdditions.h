//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMEventTrigger.h"

#import "HFTriggerProtocol.h"

@class NSString;

@interface HMEventTrigger (HFEventTriggerAdditions) <HFTriggerProtocol>
+ (id)_hf_localizedStringOrNilIfNotFoundForKey:(id)arg1;
+ (id)hf_localizedStringForProgrammableSwitchCharacteristic:(id)arg1 value:(id)arg2;
+ (id)hf_localizationKeyForProgrammableSwitchCharacteristic:(id)arg1 value:(id)arg2;
+ (id)hf_triggerValueNaturalLanguageDescriptionWithCharacteristics:(id)arg1 triggerValue:(id)arg2;
+ (id)_hf_naturalLanguageNameWithHome:(id)arg1 nonAlarmCharacteristics:(id)arg2 triggerValue:(id)arg3 type:(unsigned long long)arg4;
+ (id)_hf_naturalLanguageNameWithHome:(id)arg1 alarmCharacteristics:(id)arg2 triggerValue:(id)arg3 type:(unsigned long long)arg4;
+ (id)hf_naturalLanguageNameWithHome:(id)arg1 characteristics:(id)arg2 triggerValue:(id)arg3 type:(unsigned long long)arg4;
+ (id)hf_naturalLanguageNameWithHome:(id)arg1 presenceEvent:(id)arg2 type:(unsigned long long)arg3;
+ (id)hf_naturalLanguageNameWithHome:(id)arg1 region:(id)arg2 type:(unsigned long long)arg3 forUser:(id)arg4;
+ (id)hf_naturalLanguageNameWithHome:(id)arg1 events:(id)arg2 recurrences:(id)arg3 type:(unsigned long long)arg4 forUser:(id)arg5;
+ (id)hf_naturalLanguageNameWithHome:(id)arg1 events:(id)arg2 recurrences:(id)arg3 type:(unsigned long long)arg4;
+ (id)hf_naturalLanguageNameWithHome:(id)arg1 events:(id)arg2 type:(unsigned long long)arg3 forUser:(id)arg4;
+ (id)hf_naturalLanguageNameWithHome:(id)arg1 events:(id)arg2 type:(unsigned long long)arg3;
- (id)hf_designateTrigger:(_Bool)arg1;
- (id)hf_unmarkTriggerAsHomeAppCreated;
- (id)hf_markTriggerAsHomeAppCreated;
- (_Bool)hf_isHomeAppCreatedTrigger;
- (unsigned long long)hf_triggerType;
- (id)hf_naturalLanguageNameWithHome:(id)arg1 type:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

