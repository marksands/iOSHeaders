//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DNDBypassSettings, DNDSScheduleSettings;

@protocol DNDSSettingsSyncManagerDelegate <NSObject>
- (void)syncManager:(id <DNDSSettingsSyncManager>)arg1 didReceiveUpdatedScheduleSettings:(DNDSScheduleSettings *)arg2;
- (void)syncManager:(id <DNDSSettingsSyncManager>)arg1 didReceiveUpdatedPhoneCallBypassSettings:(DNDBypassSettings *)arg2;
@end

