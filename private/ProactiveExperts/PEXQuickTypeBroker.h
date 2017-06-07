//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProactiveExperts/PEXBroker.h>

@class NSDate, NSObject, PEXNameDelegate, PEXNameLoadingContext;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface PEXQuickTypeBroker : PEXBroker
{
    PEXNameDelegate *_nameLoadingDelegate;
    PEXNameLoadingContext *_lastNameLoadingContext;
    NSDate *_lastDetectedSinceDate;
    NSObject<OS_dispatch_queue> *_nameLoadingQueue;
    // Error parsing type: Ai, name: _nameResetCount
    NSObject<OS_dispatch_source> *_namedEntityReloadTimer;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_namesForContext:(id)arg1 doReset:(_Bool)arg2;
- (void)namesForContext:(id)arg1 detectedSince:(id)arg2;
- (void)namesForContext:(id)arg1;
- (void)_recentNamesFromSource:(unsigned char)arg1 objects:(id)arg2;
- (void)_recentNamesFromSource:(unsigned char)arg1;
- (void)deregisterNameDelegate;
- (void)registerNameDelegate:(id)arg1;
- (id)nameItemsWithLimit:(unsigned long long)arg1 timeout:(long long)arg2;
- (id)quickTypeItemsForCriteria:(id)arg1 limit:(unsigned long long)arg2 timeout:(long long)arg3;
- (void)_registerForNotifications;
- (id)init;

@end

