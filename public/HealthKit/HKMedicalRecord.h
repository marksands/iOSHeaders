//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthKit/HKSample.h>

#import "HKMedicalRecordCodings.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"

@class HKFHIRIdentifier, HKSemanticDate, NSArray, NSDate, NSString;

@interface HKMedicalRecord : HKSample <HKMedicalRecordCodings, NSSecureCoding, NSCopying>
{
    _Bool _enteredInError;
    NSString *_note;
    NSDate *_modifiedDate;
    HKFHIRIdentifier *_FHIRIdentifier;
    long long _extractionVersion;
    HKSemanticDate *_sortDate;
}

+ (_Bool)_isConcreteObjectClass;
+ (id)_sortDateIntervalFromStartDateComponents:(id)arg1 endDateComponents:(id)arg2 error:(out id *)arg3;
+ (_Bool)supportsEquivalence;
+ (_Bool)supportsSecureCoding;
+ (id)_newMedicalRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(_Bool)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 extractionVersion:(long long)arg6 device:(id)arg7 metadata:(id)arg8 sortDate:(id)arg9 config:(CDUnknownBlockType)arg10;
+ (id)defaultDisplayString;
@property(readonly, copy, nonatomic) HKSemanticDate *sortDate; // @synthesize sortDate=_sortDate;
@property(readonly, nonatomic) long long extractionVersion; // @synthesize extractionVersion=_extractionVersion;
@property(readonly, copy, nonatomic) HKFHIRIdentifier *FHIRIdentifier; // @synthesize FHIRIdentifier=_FHIRIdentifier;
@property(readonly, copy, nonatomic) NSDate *modifiedDate; // @synthesize modifiedDate=_modifiedDate;
@property(readonly, nonatomic) _Bool enteredInError; // @synthesize enteredInError=_enteredInError;
@property(readonly, copy, nonatomic) NSString *note; // @synthesize note=_note;
- (void).cxx_destruct;
- (id)_validateConfiguration;
- (void)_setSortDate:(id)arg1;
- (void)_setExtractionVersion:(long long)arg1;
- (void)_setFHIRIdentifier:(id)arg1;
- (void)_setModifiedDate:(id)arg1;
- (void)_setEnteredInError:(_Bool)arg1;
- (void)_setNote:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEquivalent:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)fallbackDisplayString;
@property(readonly, nonatomic) NSArray *medicalRecordPreferredSystems;
@property(readonly, nonatomic) NSArray *medicalRecordCodings;
@property(readonly, nonatomic) NSArray *indexKeywords;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSDate *endDate; // @dynamic endDate;
@property(readonly) unsigned long long hash;
@property(readonly) NSDate *startDate; // @dynamic startDate;
@property(readonly) Class superclass;

@end

