//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MTAgentDiagnosticDelegate.h"
#import "MTAgentNotificationListener.h"

@class MTMetrics, NSMutableArray, NSString;

@interface MTSyncMonitor : NSObject <MTAgentNotificationListener, MTAgentDiagnosticDelegate>
{
    _Bool _ready;
    id <MTSyncService> _service;
    NSMutableArray *_providers;
    id <NAScheduler> _serializer;
    MTMetrics *_syncMetrics;
}

+ (_Bool)isSyncingEnabledInternally;
+ (_Bool)syncingSupported;
@property(retain, nonatomic) MTMetrics *syncMetrics; // @synthesize syncMetrics=_syncMetrics;
@property(retain, nonatomic) id <NAScheduler> serializer; // @synthesize serializer=_serializer;
@property(retain, nonatomic) NSMutableArray *providers; // @synthesize providers=_providers;
@property(nonatomic) _Bool ready; // @synthesize ready=_ready;
@property(retain, nonatomic) id <MTSyncService> service; // @synthesize service=_service;
- (void).cxx_destruct;
- (void)printDiagnostics;
- (void)handleNotification:(id)arg1;
- (_Bool)handlesNotification:(id)arg1;
- (_Bool)startSyncServiceIfSyncingEnabled;
- (void)syncConfigurationChanged:(id)arg1;
- (_Bool)syncingEnabled;
- (void)registerSyncStatusProvider:(id)arg1;
- (void)startMonitoring;
- (id)initWithSyncService:(id)arg1 syncMetrics:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

