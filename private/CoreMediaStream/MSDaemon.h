//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSTimer;

@interface MSDaemon : NSObject
{
    _Bool _stabilizedIsBusy;
    int _busyCount;
    int _UIBusyCount;
    NSObject<OS_dispatch_queue> *_idleCountQueue;
    NSTimer *_hysteresisTimer;
}

@property(nonatomic) _Bool stabilizedIsBusy; // @synthesize stabilizedIsBusy=_stabilizedIsBusy;
@property(retain, nonatomic) NSTimer *hysteresisTimer; // @synthesize hysteresisTimer=_hysteresisTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *idleCountQueue; // @synthesize idleCountQueue=_idleCountQueue;
@property(nonatomic) int UIBusyCount; // @synthesize UIBusyCount=_UIBusyCount;
@property(nonatomic) int busyCount; // @synthesize busyCount=_busyCount;
- (void).cxx_destruct;
- (void)stabilizedDidUnidle;
- (void)stabilizedDidIdle;
- (void)_hysteresisTimerDidFire:(id)arg1;
- (void)didUnidle;
- (void)didIdle;
- (void)_didChangeIdleBusyState:(_Bool)arg1;
- (void)releasePowerAssertion;
- (void)retainPowerAssertion;
- (void)releaseUIBusy;
- (void)retainUIBusy;
- (_Bool)isBusy;
- (void)releaseBusy;
- (void)retainBusy;
- (void)dealloc;
- (id)init;

@end

