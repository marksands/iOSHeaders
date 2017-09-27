//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSDate, NSHashTable, NSNumber, NSString, NSUUID;

@interface _HKAchievement : NSObject <NSSecureCoding>
{
    NSHashTable *_observers;
    _Bool _alerted;
    _Bool _viewed;
    NSUUID *_UUID;
    NSString *_definitionIdentifier;
    NSDate *_completedDate;
    NSNumber *_value;
    unsigned long long _workoutActivityType;
    NSNumber *_progressValue;
    NSNumber *_goalValue;
    NSNumber *_referenceProgressValue;
    NSNumber *_paceToReachGoal;
    NSString *_progressMilestoneLocalizationKeyPrefix;
}

+ (void)setOverridenUUID:(id)arg1;
+ (_Bool)supportsSecureCoding;
+ (id)_achievementWithUUID:(id)arg1 definitionIdentifier:(id)arg2 completedDate:(id)arg3 value:(id)arg4 workoutActivityType:(unsigned long long)arg5 alerted:(_Bool)arg6;
+ (id)achievementWithDefinitionIdentifier:(id)arg1 completedDate:(id)arg2 progressValue:(id)arg3 goalValue:(id)arg4 value:(id)arg5 workoutActivityType:(unsigned long long)arg6;
+ (id)achievementWithDefinitionIdentifier:(id)arg1 completedDate:(id)arg2 value:(id)arg3 workoutActivityType:(unsigned long long)arg4;
+ (id)_nextUUID;
+ (id)_formatValue:(id)arg1 usingFormatterNamed:(id)arg2;
+ (id)_valueFromPlaceholder:(id)arg1 withAchievement:(id)arg2 context:(id)arg3;
@property(retain, nonatomic) NSString *progressMilestoneLocalizationKeyPrefix; // @synthesize progressMilestoneLocalizationKeyPrefix=_progressMilestoneLocalizationKeyPrefix;
@property(retain, nonatomic) NSNumber *paceToReachGoal; // @synthesize paceToReachGoal=_paceToReachGoal;
@property(retain, nonatomic) NSNumber *referenceProgressValue; // @synthesize referenceProgressValue=_referenceProgressValue;
@property(retain, nonatomic) NSNumber *goalValue; // @synthesize goalValue=_goalValue;
@property(retain, nonatomic) NSNumber *progressValue; // @synthesize progressValue=_progressValue;
@property(nonatomic, getter=isViewed) _Bool viewed; // @synthesize viewed=_viewed;
@property(nonatomic, getter=isAlerted) _Bool alerted; // @synthesize alerted=_alerted;
@property(nonatomic) unsigned long long workoutActivityType; // @synthesize workoutActivityType=_workoutActivityType;
@property(retain, nonatomic) NSNumber *value; // @synthesize value=_value;
@property(retain, nonatomic) NSDate *completedDate; // @synthesize completedDate=_completedDate;
@property(retain, nonatomic) NSString *definitionIdentifier; // @synthesize definitionIdentifier=_definitionIdentifier;
@property(retain, nonatomic) NSUUID *UUID; // @synthesize UUID=_UUID;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)_validateConfiguration;
- (id)_achievementDefinition;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)_initWithDefinitionIdentifier:(id)arg1 completedDate:(id)arg2 progressValue:(id)arg3 goalValue:(id)arg4 value:(id)arg5 workoutActivityType:(unsigned long long)arg6;
- (id)_initWithDefinitionIdentifier:(id)arg1 completedDate:(id)arg2 value:(id)arg3 workoutActivityType:(unsigned long long)arg4;
- (id)_initWithDefinitionIdentifier:(id)arg1 completedDate:(id)arg2 value:(id)arg3;
- (id)_replacePlaceholdersInString:(id)arg1 withContext:(id)arg2;
- (id)_pluralizeLocalizedString:(id)arg1 context:(id)arg2;
- (id)_buildKeyWithPrefix:(id)arg1 keyBaseString:(id)arg2 includingUserName:(_Bool)arg3 isWheelchairUser:(_Bool)arg4;
- (id)_localizedStringWithContext:(id)arg1;
- (id)localizedShareDescriptionWithNumberOfTimesAchieved:(long long)arg1 isWheelchairUser:(_Bool)arg2;
- (id)localizedShareDescriptionWithNumberOfTimesAchieved:(long long)arg1;
- (id)localizedDescriptionForNewUnearnedAlertBadgeBack;
- (id)localizedDescriptionForNewUnearnedAlert;
- (id)localizedDescriptionForProgressAlertWithUserName:(id)arg1;
- (id)localizedDescriptionForAlertWithUserName:(id)arg1 isWheelchairUser:(_Bool)arg2;
- (id)localizedDescriptionForAlertWithUserName:(id)arg1;
- (id)localizedDescriptionWithNumberOfTimesAchieved:(long long)arg1 isWheelchairUser:(_Bool)arg2;
- (id)localizedDescriptionWithNumberOfTimesAchieved:(long long)arg1;
- (id)localizedDescriptionFriendAchievedWithName:(id)arg1 wheelchairUser:(_Bool)arg2;
- (id)localizedDescriptionAchieved;
- (id)localizedDescriptionUnachieved;
- (id)localizedTitleWithIsWheelchairUser:(_Bool)arg1;
- (id)localizedTitle;
- (_Bool)_isWheelchairUser;

@end

