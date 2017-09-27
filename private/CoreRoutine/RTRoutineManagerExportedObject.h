//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RTFrameworkProtocol.h"

@class NSString, RTRoutineManager;

__attribute__((visibility("hidden")))
@interface RTRoutineManagerExportedObject : NSObject <RTFrameworkProtocol>
{
    RTRoutineManager *_routineManager;
}

@property(nonatomic) __weak RTRoutineManager *routineManager; // @synthesize routineManager=_routineManager;
- (void).cxx_destruct;
- (void)onActionConditions:(id)arg1 error:(id)arg2;
- (void)onVehicleEvents:(id)arg1 error:(id)arg2;
- (void)onNextPredictedLocationsOfInterest:(id)arg1 withError:(id)arg2;
- (void)onPredictedApplications:(id)arg1 error:(id)arg2;
- (void)onScenarioTrigger:(id)arg1 withError:(id)arg2;
- (void)onLeechedLowConfidenceVisit:(id)arg1 withError:(id)arg2;
- (void)onLeechedVisit:(id)arg1 withError:(id)arg2;
- (void)onVisit:(id)arg1 withError:(id)arg2;
- (id)initWithRoutineManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

