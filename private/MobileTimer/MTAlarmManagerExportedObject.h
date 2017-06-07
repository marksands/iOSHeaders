//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MobileTimer/MTAlarmClient-Protocol.h>

@class MTAlarmManager, NSString;

@interface MTAlarmManagerExportedObject : NSObject <MTAlarmClient>
{
    MTAlarmManager *_alarmManager;
}

@property(readonly, nonatomic) __weak MTAlarmManager *alarmManager; // @synthesize alarmManager=_alarmManager;
- (void).cxx_destruct;
- (void)nextAlarmChanged:(id)arg1;
- (void)alarmDismissed:(id)arg1;
- (void)alarmFired:(id)arg1;
- (void)alarmSnoozed:(id)arg1;
- (void)alarmsRemoved:(id)arg1;
- (void)alarmsUpdated:(id)arg1;
- (void)alarmsAdded:(id)arg1;
- (void)_didReceiveAlarmServerReadyNotification:(id)arg1;
- (void)dealloc;
- (id)initWithAlarmManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

