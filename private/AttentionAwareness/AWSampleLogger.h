//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>;

__attribute__((visibility("hidden")))
@interface AWSampleLogger : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_powerLogQueue;
    NSMutableDictionary *_clientLogData;
    NSMutableSet *_outstandingClientLogData;
    NSMutableSet *_addedClientLogData;
    NSObject<OS_dispatch_source> *_timer;
    unsigned long long _samplingStartTime;
    unsigned long long _cumulativeSamplingTime;
    unsigned long long _samplesRequested;
    unsigned long long _pollsRequested;
    unsigned long long _samplesSucceeded;
}

+ (void)client:(id)arg1 pollEventType:(unsigned long long)arg2 event:(id)arg3;
+ (void)client:(id)arg1 event:(id)arg2;
+ (void)client:(id)arg1 attentionStateChange:(_Bool)arg2;
+ (id)sharedLogger;
- (void).cxx_destruct;
- (void)sampleSucceeded;
- (void)sampleStartedWithDeadline:(unsigned long long)arg1;
- (void)shouldSample:(_Bool)arg1;
- (void)updateDataForClient:(id)arg1 deadline:(unsigned long long)arg2;
- (void)startUpdate;
- (void)powerLogName:(id)arg1 event:(id)arg2;
- (void)outputPowerLog;
- (void)_outputPowerLog;
- (id)init;

@end

