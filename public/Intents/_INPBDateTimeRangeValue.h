//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBDateTimeRangeValue.h"

@class NSString, _INPBDateTime, _INPBRecurrenceValue, _INPBValueMetadata;

@interface _INPBDateTimeRangeValue : PBCodable <_INPBDateTimeRangeValue, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int endCalendar:1;
        unsigned int startCalendar:1;
    } _has;
    long long _endCalendar;
    _INPBDateTime *_endDateTime;
    _INPBRecurrenceValue *_recurrence;
    long long _startCalendar;
    _INPBDateTime *_startDateTime;
    _INPBValueMetadata *_valueMetadata;
}

@property(retain, nonatomic) _INPBValueMetadata *valueMetadata; // @synthesize valueMetadata=_valueMetadata;
@property(retain, nonatomic) _INPBDateTime *startDateTime; // @synthesize startDateTime=_startDateTime;
@property(nonatomic) long long startCalendar; // @synthesize startCalendar=_startCalendar;
@property(retain, nonatomic) _INPBRecurrenceValue *recurrence; // @synthesize recurrence=_recurrence;
@property(retain, nonatomic) _INPBDateTime *endDateTime; // @synthesize endDateTime=_endDateTime;
@property(nonatomic) long long endCalendar; // @synthesize endCalendar=_endCalendar;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(readonly, nonatomic) _Bool hasValueMetadata;
@property(readonly, nonatomic) _Bool hasStartDateTime;
@property(nonatomic) _Bool hasStartCalendar;
@property(readonly, nonatomic) _Bool hasRecurrence;
@property(readonly, nonatomic) _Bool hasEndDateTime;
@property(nonatomic) _Bool hasEndCalendar;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

