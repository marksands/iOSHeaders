//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_HKFitnessFriendAchievement.h"

#import "ASCloudKitCodable.h"

@class ASCodableCloudKitAchievement, NSString;

@interface _HKFitnessFriendAchievement (CloudKitCodingSupport) <ASCloudKitCodable>
+ (id)_fitnessFriendAchievementWithCodableAchievement:(id)arg1 friendUUID:(id)arg2;
+ (id)fitnessFriendAchievementWithCodableAchievement:(id)arg1 friendUUID:(id)arg2;
+ (id)fitnessFriendAchievementWithCodableAchievement:(id)arg1;
+ (struct _HKFitnessFriendAchievement *)fitnessFriendAchievementWithRecord:(id)arg1 friendUUID:(id)arg2;
- (id)recordWithZoneID:(id)arg1;
@property(readonly, nonatomic) ASCodableCloudKitAchievement *codableAchievement;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

