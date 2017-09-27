//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class NSObject<OS_dispatch_queue>;

@interface HMFPowerManager : HMFObject
{
    unsigned int _interestNotification;
    _Bool _hasBattery;
    _Bool _running;
    float _batteryLevel;
    long long _batteryState;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    struct IONotificationPort *_notificationPort;
}

+ (id)sharedManager;
+ (void)initialize;
@property(readonly, nonatomic) struct IONotificationPort *notificationPort; // @synthesize notificationPort=_notificationPort;
@property(nonatomic, getter=isRunning) _Bool running; // @synthesize running=_running;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(readonly) _Bool hasBattery; // @synthesize hasBattery=_hasBattery;
@property(readonly, nonatomic) unsigned int interestNotification; // @synthesize interestNotification=_interestNotification;
- (void).cxx_destruct;
- (void)_deregisterForPowerSourceNotifications:(_Bool)arg1;
- (void)_registerForPowerSourceNotifications;
- (void)updateBatteryState:(unsigned int)arg1;
- (void)notifyBatteryLevelChange:(float)arg1;
@property float batteryLevel; // @synthesize batteryLevel=_batteryLevel;
- (void)notifyBatteryStateChange:(long long)arg1;
@property long long batteryState; // @synthesize batteryState=_batteryState;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)init;

@end

