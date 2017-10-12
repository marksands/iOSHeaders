//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MTAgentNotificationListener.h"

@class MTAlarmScheduler, MTTimerScheduler, NSString;

@interface MTTimeListener : NSObject <MTAgentNotificationListener>
{
    MTAlarmScheduler *_alarmScheduler;
    MTTimerScheduler *_timerScheduler;
}

@property(retain, nonatomic) MTTimerScheduler *timerScheduler; // @synthesize timerScheduler=_timerScheduler;
@property(retain, nonatomic) MTAlarmScheduler *alarmScheduler; // @synthesize alarmScheduler=_alarmScheduler;
- (void).cxx_destruct;
- (void)handleNotification:(id)arg1;
- (_Bool)handlesNotification:(id)arg1;
- (id)initWithAlarmScheduler:(id)arg1 timerScheduler:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
