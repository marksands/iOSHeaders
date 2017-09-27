//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CKDFlowControlManager : NSObject
{
    unsigned long long _defaultBudget;
    double _defaultRegeneration;
    double _maximumThrottleTime;
    NSMutableDictionary *_operationFlowControls;
}

@property(retain, nonatomic) NSMutableDictionary *operationFlowControls; // @synthesize operationFlowControls=_operationFlowControls;
@property double maximumThrottleTime; // @synthesize maximumThrottleTime=_maximumThrottleTime;
- (void).cxx_destruct;
- (double)currentRegeneration:(id)arg1;
- (unsigned long long)currentBudgetCap:(id)arg1;
- (double)currentBudget:(id)arg1;
@property(nonatomic) double defaultRegeneration;
@property(nonatomic) unsigned long long defaultBudget;
- (void)updateFlowControlForOperation:(id)arg1 reportableError:(id)arg2;
- (void)updateFlowControl:(id)arg1 withRetryAfter:(unsigned long long)arg2 reportableError:(id)arg3;
- (void)updateFlowControl:(id)arg1 withCost:(unsigned long long)arg2 reportableError:(id)arg3;
- (id)_flowControlForOperation:(id)arg1;
- (id)_flowControlForOperation:(id)arg1 createIfNecessary:(_Bool)arg2;
- (_Bool)checkFlowControlIsLimited:(id)arg1 outReportableError:(id *)arg2;
- (double)secondsUntilFlowControlNotLimited:(id)arg1;
- (id)CKStatusReportArray;
- (_Bool)hasStatusToReport;
- (id)description;
- (id)CKPropertiesDescription;
- (id)initWithDefaultBudget:(unsigned long long)arg1 maximumThrottleTime:(double)arg2 andDefaultRegeneration:(double)arg3;

@end

