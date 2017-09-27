//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreSpeech/CSEventMonitor.h>

@interface CSFirstUnlockMonitor : CSEventMonitor
{
    int _notifyToken;
    _Bool _firstUnlocked;
}

+ (id)sharedInstance;
- (_Bool)_checkFirstUnlocked;
- (_Bool)isFirstUnlocked;
- (void)_notifyObserver:(id)arg1 withUnlocked:(_Bool)arg2;
- (void)_didReceiveFirstUnlock:(_Bool)arg1;
- (void)_didReceiveFirstUnlockInQueue:(_Bool)arg1;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)arg1;
- (id)init;

@end

