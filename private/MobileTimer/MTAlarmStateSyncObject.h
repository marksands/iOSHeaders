//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MobileTimer/MTSyncObject.h>

@class MTAlarm, NSArray, NSDate;

@interface MTAlarmStateSyncObject : MTSyncObject
{
    NSArray *_alarms;
    MTAlarm *_sleepAlarm;
    NSDate *_stateModifiedDate;
}

+ (id)createSYChangeFromProtobuffObject:(id)arg1 changeType:(long long)arg2;
+ (id)alarmStateWithAlarms:(id)arg1 sleepAlarm:(id)arg2 lastModifiedDate:(id)arg3 changeType:(long long)arg4;
@property(retain, nonatomic) NSDate *stateModifiedDate; // @synthesize stateModifiedDate=_stateModifiedDate;
@property(readonly, nonatomic) MTAlarm *sleepAlarm; // @synthesize sleepAlarm=_sleepAlarm;
@property(readonly, nonatomic) NSArray *alarms; // @synthesize alarms=_alarms;
- (void).cxx_destruct;
- (id)description;
- (id)createProtobufWithOptions:(id)arg1;
- (id)objectIdentifier;
- (id)allAlarms;
- (id)lastModifiedDate;
- (id)initWithAlarms:(id)arg1 sleepAlarm:(id)arg2 lastModifiedDate:(id)arg3 changeType:(long long)arg4;

@end

