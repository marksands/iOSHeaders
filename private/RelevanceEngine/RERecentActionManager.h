//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <RelevanceEngine/RESingleton.h>

@class NSLock, NSMutableDictionary, REPredictedActionServer;

@interface RERecentActionManager : RESingleton
{
    NSLock *_lock;
    NSMutableDictionary *_dateValues;
    REPredictedActionServer *_server;
}

- (void).cxx_destruct;
- (void)_handleRecentActionNotification:(id)arg1;
- (unsigned long long)actionNumberOfTimesPeformedToday:(id)arg1;
- (_Bool)actionWasPerformedLocally:(id)arg1;
- (id)lastPerformedDateForAction:(id)arg1;
- (id)_dataForAction:(id)arg1;
- (void)_storePerformAction:(id)arg1 date:(id)arg2 remote:(_Bool)arg3;
- (void)didPerformAction:(id)arg1;
- (void)dealloc;
- (id)init;

@end

