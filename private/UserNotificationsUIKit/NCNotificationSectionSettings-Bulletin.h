//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NCNotificationSectionSettings.h"

@interface NCNotificationSectionSettings (Bulletin)
+ (id)notificationSectionSettingsForBBSectionInfo:(id)arg1;
- (unsigned long long)_groupingSettingFromBBGroupingSetting:(long long)arg1;
- (unsigned long long)_contentPreviewSettingFromBBContentPreviewSetting:(long long)arg1;
- (unsigned long long)contentPreviewSettingForRequestWithSubSectionIdentifiers:(id)arg1;
- (id)_notificationSectionSettingsForSubSectionWithIdentifier:(id)arg1;
@property(readonly, nonatomic) unsigned long long groupingSetting;
@property(readonly, nonatomic) unsigned long long contentPreviewSetting;
@property(readonly, nonatomic) long long subSectionPriority;
@property(readonly, nonatomic) _Bool showsInLockScreen;
@property(readonly, nonatomic) _Bool showsInNotificationCenter;
@property(readonly, nonatomic) _Bool criticalAlertsEnabled;
@property(readonly, nonatomic) _Bool notificationsEnabled;
@end

