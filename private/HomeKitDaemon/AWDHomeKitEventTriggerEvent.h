//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class AWDHomeKitCalendarEvent, AWDHomeKitCharacteristicEvent, AWDHomeKitCharacteristicThresholdEvent, AWDHomeKitDurationEvent, AWDHomeKitLocationEvent, AWDHomeKitPresenceEvent, AWDHomeKitSignificantTimeEvent;

@interface AWDHomeKitEventTriggerEvent : PBCodable <NSCopying>
{
    AWDHomeKitCalendarEvent *_calendarEvent;
    AWDHomeKitCharacteristicEvent *_charEvent;
    AWDHomeKitCharacteristicThresholdEvent *_charThresholdEvent;
    AWDHomeKitDurationEvent *_durationEvent;
    AWDHomeKitLocationEvent *_locationEvent;
    AWDHomeKitPresenceEvent *_presenceEvent;
    AWDHomeKitSignificantTimeEvent *_significantTimeEvent;
    AWDHomeKitCharacteristicThresholdEvent *_thresholdEvent;
    _Bool _endEvent;
    struct {
        unsigned int endEvent:1;
    } _has;
}

@property(retain, nonatomic) AWDHomeKitDurationEvent *durationEvent; // @synthesize durationEvent=_durationEvent;
@property(retain, nonatomic) AWDHomeKitPresenceEvent *presenceEvent; // @synthesize presenceEvent=_presenceEvent;
@property(retain, nonatomic) AWDHomeKitCharacteristicThresholdEvent *thresholdEvent; // @synthesize thresholdEvent=_thresholdEvent;
@property(retain, nonatomic) AWDHomeKitSignificantTimeEvent *significantTimeEvent; // @synthesize significantTimeEvent=_significantTimeEvent;
@property(retain, nonatomic) AWDHomeKitCalendarEvent *calendarEvent; // @synthesize calendarEvent=_calendarEvent;
@property(retain, nonatomic) AWDHomeKitCharacteristicThresholdEvent *charThresholdEvent; // @synthesize charThresholdEvent=_charThresholdEvent;
@property(retain, nonatomic) AWDHomeKitLocationEvent *locationEvent; // @synthesize locationEvent=_locationEvent;
@property(retain, nonatomic) AWDHomeKitCharacteristicEvent *charEvent; // @synthesize charEvent=_charEvent;
@property(nonatomic) _Bool endEvent; // @synthesize endEvent=_endEvent;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasDurationEvent;
@property(readonly, nonatomic) _Bool hasPresenceEvent;
@property(readonly, nonatomic) _Bool hasThresholdEvent;
@property(readonly, nonatomic) _Bool hasSignificantTimeEvent;
@property(readonly, nonatomic) _Bool hasCalendarEvent;
@property(readonly, nonatomic) _Bool hasCharThresholdEvent;
@property(readonly, nonatomic) _Bool hasLocationEvent;
@property(readonly, nonatomic) _Bool hasCharEvent;
@property(nonatomic) _Bool hasEndEvent;

@end

