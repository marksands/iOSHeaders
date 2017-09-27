//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

#import "SAAlarmAlarmAction.h"

@class NSArray, NSNumber, NSString, NSURL;

@interface SAAlarmUpdate : SADomainCommand <SAAlarmAlarmAction>
{
}

+ (id)updateWithDictionary:(id)arg1 context:(id)arg2;
+ (id)update;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSArray *removedFrequency;
@property(copy, nonatomic) NSArray *modifications;
@property(copy, nonatomic) NSNumber *minute;
@property(copy, nonatomic) NSString *label;
@property(copy, nonatomic) NSNumber *hour;
@property(copy, nonatomic) NSNumber *enabled;
@property(copy, nonatomic) NSURL *alarmId;
@property(copy, nonatomic) NSArray *addedFrequency;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

