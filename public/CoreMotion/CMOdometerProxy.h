//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CMOdometer, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>;

@interface CMOdometerProxy : NSObject
{
    NSObject<OS_dispatch_queue> *fInternalQueue;
    NSObject<OS_dispatch_source> *fWatchdogTimer;
    NSObject<OS_dispatch_queue> *fCallbackQueue;
    struct CLConnectionClient *fLocationdConnection;
    CDUnknownBlockType fHandler;
    long long fGpsAvailability;
    CMOdometer *_odometer;
    double _totalDistance;
    double _averageSpeed;
    double _startDate;
}

@property double startDate; // @synthesize startDate=_startDate;
@property double averageSpeed; // @synthesize averageSpeed=_averageSpeed;
@property double totalDistance; // @synthesize totalDistance=_totalDistance;
@property(nonatomic) CMOdometer *odometer; // @synthesize odometer=_odometer;
- (void)_stopWatchdogCheckins;
- (void)_startWatchdogCheckins;
- (void)_stopOdometerUpdates;
- (void)_startOdometerUpdatesWithHandler:(CDUnknownBlockType)arg1;
- (void)_startDaemonConnection;
- (void)_teardown;
- (void)dealloc;
- (id)initWithOdometer:(id)arg1;

@end

