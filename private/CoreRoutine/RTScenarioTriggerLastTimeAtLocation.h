//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreRoutine/RTScenarioTrigger.h>

@class NSDate, RTLocationOfInterest;

@interface RTScenarioTriggerLastTimeAtLocation : RTScenarioTrigger
{
    RTLocationOfInterest *_locationOfInterest;
    NSDate *_lastEntryDate;
    NSDate *_lastExitDate;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSDate *lastExitDate; // @synthesize lastExitDate=_lastExitDate;
@property(readonly, nonatomic) NSDate *lastEntryDate; // @synthesize lastEntryDate=_lastEntryDate;
@property(readonly, nonatomic) RTLocationOfInterest *locationOfInterest; // @synthesize locationOfInterest=_locationOfInterest;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithLocationOfInterest:(id)arg1 lastEntryDate:(id)arg2 lastExitDate:(id)arg3;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

