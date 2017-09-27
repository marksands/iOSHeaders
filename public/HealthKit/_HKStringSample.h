//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthKit/HKSample.h>

#import "_HKBinarySample.h"

@class NSString, _HKStringSampleType;

@interface _HKStringSample : HKSample <_HKBinarySample>
{
    NSString *_stringValue;
    _HKStringSampleType *_stringType;
}

+ (_Bool)supportsSecureCoding;
+ (_Bool)_isConcreteObjectClass;
+ (id)stringSampleWithType:(id)arg1 stringValue:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 device:(id)arg5 metadata:(id)arg6;
@property(readonly) _HKStringSampleType *stringType; // @synthesize stringType=_stringType;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)payload;
- (void)_setPayload:(id)arg1;
@property(readonly) NSString *stringValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

