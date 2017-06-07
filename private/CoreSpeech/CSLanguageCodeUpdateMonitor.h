//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreSpeech/CSEventMonitor.h>

@interface CSLanguageCodeUpdateMonitor : CSEventMonitor
{
    int _notifyToken;
}

+ (id)sharedInstance;
- (void)_notifyObserver:(id)arg1 withLanguageCode:(id)arg2;
- (void)_didReceiveLanguageCodeUpdate;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)arg1;
- (id)init;

@end

