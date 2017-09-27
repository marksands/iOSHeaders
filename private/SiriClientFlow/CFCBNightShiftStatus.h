//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SADomainCommand.h"

#import "SAAceSerializable.h"

@class CFCBNightShiftSchedule, NSString;

@interface CFCBNightShiftStatus : SADomainCommand <SAAceSerializable>
{
}

+ (id)aceObjectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)nightShiftStatusWithDictionary:(id)arg1 context:(id)arg2;
+ (id)nightShiftStatus;
- (_Bool)requiresResponse;
@property(nonatomic) _Bool supported;
@property(nonatomic) _Bool sunSchedulePermitted;
@property(retain, nonatomic) CFCBNightShiftSchedule *nightShiftSchedule;
@property(copy, nonatomic) NSString *nightShiftMode;
@property(nonatomic) _Bool enabled;
@property(nonatomic) _Bool active;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

