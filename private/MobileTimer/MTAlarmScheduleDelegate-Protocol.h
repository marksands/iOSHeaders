//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MTAlarmScheduler, MTScheduledObject;

@protocol MTAlarmScheduleDelegate <NSObject>
- (void)scheduler:(MTAlarmScheduler *)arg1 didFireAlarm:(MTScheduledObject *)arg2;
- (void)scheduler:(MTAlarmScheduler *)arg1 didChangeNextAlarm:(MTScheduledObject *)arg2;
@end
