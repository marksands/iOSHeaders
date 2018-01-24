//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSDate, NSString;

@interface HKMedicalDate : NSObject <NSSecureCoding, NSCopying>
{
    long long _form;
    NSString *_originalTimeZoneString;
    NSDate *_underlyingDate;
}

+ (_Bool)supportsSecureCoding;
+ (id)_descriptionForForm:(long long)arg1;
+ (unsigned long long)_calendarUnitForForm:(long long)arg1;
+ (_Bool)_validForm:(long long)arg1;
+ (id)_medicalDateFromComponents:(id)arg1 originalTimeZoneString:(id)arg2 form:(long long)arg3 error:(out id *)arg4;
+ (id)_adjustDate:(id)arg1 calendar:(id)arg2 form:(long long)arg3;
+ (id)_medicalDateWithForm:(long long)arg1 underlyingDate:(id)arg2 originalTimeZoneString:(id)arg3;
+ (id)medicalDateWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 hour:(long long)arg4 minute:(long long)arg5 second:(long long)arg6 originalTimeZoneString:(id)arg7 error:(out id *)arg8;
+ (id)medicalDateWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 error:(out id *)arg4;
+ (id)medicalDateWithYear:(long long)arg1 month:(long long)arg2 error:(out id *)arg3;
+ (id)medicalDateWithYear:(long long)arg1 error:(out id *)arg2;
+ (id)referenceCalendarWithLocalTimezone;
+ (id)referenceCalendar;
@property(readonly, copy, nonatomic) NSDate *underlyingDate; // @synthesize underlyingDate=_underlyingDate;
@property(readonly, copy, nonatomic) NSString *originalTimeZoneString; // @synthesize originalTimeZoneString=_originalTimeZoneString;
@property(readonly, nonatomic) long long form; // @synthesize form=_form;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithForm:(long long)arg1 underlyingDate:(id)arg2 originalTimeZoneString:(id)arg3;
- (id)description;
@property(readonly, copy, nonatomic) NSDate *dateForUTC;
- (_Bool)isCompatibleWithMedicalDateForm:(long long)arg1;
- (id)adjustedDateForCalendar:(id)arg1;

@end

