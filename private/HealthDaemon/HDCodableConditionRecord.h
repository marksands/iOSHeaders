//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "HDDecoding.h"
#import "NSCopying.h"

@class HDCodableInspectableValue, HDCodableMedicalCoding, HDCodableMedicalCodingList, HDCodableMedicalCodingListList, HDCodableMedicalRecord, NSData, NSString;

@interface HDCodableConditionRecord : PBCodable <HDDecoding, NSCopying>
{
    HDCodableInspectableValue *_abatement;
    NSString *_asserter;
    HDCodableMedicalCodingListList *_bodySitesCodings;
    HDCodableMedicalCodingList *_categoryCodings;
    HDCodableMedicalCoding *_clinicalStatusCoding;
    HDCodableMedicalCodingList *_conditionCodings;
    HDCodableMedicalRecord *_medicalRecord;
    HDCodableInspectableValue *_onset;
    NSData *_recordedDate;
    HDCodableMedicalCodingList *_severityCodings;
    HDCodableMedicalCoding *_verificationStatusCoding;
}

@property(retain, nonatomic) HDCodableMedicalCodingListList *bodySitesCodings; // @synthesize bodySitesCodings=_bodySitesCodings;
@property(retain, nonatomic) HDCodableMedicalCodingList *severityCodings; // @synthesize severityCodings=_severityCodings;
@property(retain, nonatomic) HDCodableMedicalCoding *verificationStatusCoding; // @synthesize verificationStatusCoding=_verificationStatusCoding;
@property(retain, nonatomic) HDCodableMedicalCoding *clinicalStatusCoding; // @synthesize clinicalStatusCoding=_clinicalStatusCoding;
@property(retain, nonatomic) NSData *recordedDate; // @synthesize recordedDate=_recordedDate;
@property(retain, nonatomic) HDCodableInspectableValue *onset; // @synthesize onset=_onset;
@property(retain, nonatomic) HDCodableInspectableValue *abatement; // @synthesize abatement=_abatement;
@property(retain, nonatomic) NSString *asserter; // @synthesize asserter=_asserter;
@property(retain, nonatomic) HDCodableMedicalCodingList *categoryCodings; // @synthesize categoryCodings=_categoryCodings;
@property(retain, nonatomic) HDCodableMedicalCodingList *conditionCodings; // @synthesize conditionCodings=_conditionCodings;
@property(retain, nonatomic) HDCodableMedicalRecord *medicalRecord; // @synthesize medicalRecord=_medicalRecord;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool hasBodySitesCodings;
@property(readonly, nonatomic) _Bool hasSeverityCodings;
@property(readonly, nonatomic) _Bool hasVerificationStatusCoding;
@property(readonly, nonatomic) _Bool hasClinicalStatusCoding;
@property(readonly, nonatomic) _Bool hasRecordedDate;
@property(readonly, nonatomic) _Bool hasOnset;
@property(readonly, nonatomic) _Bool hasAbatement;
@property(readonly, nonatomic) _Bool hasAsserter;
@property(readonly, nonatomic) _Bool hasCategoryCodings;
@property(readonly, nonatomic) _Bool hasConditionCodings;
@property(readonly, nonatomic) _Bool hasMedicalRecord;
- (_Bool)applyToObject:(id)arg1 error:(out id *)arg2;
- (_Bool)applyToObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

