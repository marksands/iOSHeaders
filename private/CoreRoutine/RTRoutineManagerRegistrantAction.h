//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreRoutine/RTRoutineManagerRegistrant.h>

@class NSDictionary, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface RTRoutineManagerRegistrantAction : RTRoutineManagerRegistrant
{
    NSMutableDictionary *__actionHandlers;
    _Bool _registered;
}

@property(readonly, nonatomic) _Bool registered; // @synthesize registered=_registered;
@property(readonly, copy, nonatomic) NSDictionary *actionHandlers; // @synthesize actionHandlers=__actionHandlers;
- (void).cxx_destruct;
- (void)onActionConditions:(id)arg1 error:(id)arg2;
- (id)stopMonitoringPredictedConditionsForAction:(id)arg1;
- (id)startMonitoringPredictedConditionsForAction:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)init;

@end

