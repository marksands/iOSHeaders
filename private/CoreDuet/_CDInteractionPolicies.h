//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSDictionary, _CDInteractionPolicy;

@interface _CDInteractionPolicies : NSObject
{
    unsigned long long _maxNumberOfInteractions;
    unsigned long long _maxNumberOfInteractionsDeletedInBatch;
    double _maxLifespanInSeconds;
    _CDInteractionPolicy *_defaultPolicy;
    NSDictionary *_specialPolicies;
}

+ (id)limitArray:(id)arg1 toMaxCount:(unsigned long long)arg2;
+ (id)modifyDate:(id)arg1 usingPolicy:(id)arg2;
+ (id)interactionPolicies;
- (void).cxx_destruct;
- (void)readConfigurationPlist;
- (void)setupDefaultHardcodedPolicies;
- (id)description;
- (id)filterAndModifyInteractionsWithPolicies:(id)arg1 enforceDataLimits:(_Bool)arg2 enforcePrivacy:(_Bool)arg3;
- (id)dateOfOldestAllowedInteractionForMechanism:(long long)arg1;
@property(readonly) NSDate *dateOfOldestAllowedInteraction;
@property(readonly) unsigned long long maxNumberOfInteractionsDeleted;
@property(readonly) unsigned long long maxNumberOfInteractionsStored;
- (id)policyForMechanism:(long long)arg1;
- (id)init;

@end

