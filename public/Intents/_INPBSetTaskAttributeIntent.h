//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBSetTaskAttributeIntent.h"

@class NSString, _INPBIntentMetadata, _INPBSpatialEventTrigger, _INPBTask, _INPBTemporalEventTrigger;

@interface _INPBSetTaskAttributeIntent : PBCodable <_INPBSetTaskAttributeIntent, NSSecureCoding, NSCopying>
{
    CDStruct_47fe53f2 _has;
    int _status;
    _INPBIntentMetadata *_intentMetadata;
    _INPBSpatialEventTrigger *_spatialEventTrigger;
    _INPBTask *_targetTask;
    _INPBTemporalEventTrigger *_temporalEventTrigger;
}

@property(retain, nonatomic) _INPBTemporalEventTrigger *temporalEventTrigger; // @synthesize temporalEventTrigger=_temporalEventTrigger;
@property(retain, nonatomic) _INPBTask *targetTask; // @synthesize targetTask=_targetTask;
@property(nonatomic) int status; // @synthesize status=_status;
@property(retain, nonatomic) _INPBSpatialEventTrigger *spatialEventTrigger; // @synthesize spatialEventTrigger=_spatialEventTrigger;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(readonly, nonatomic) _Bool hasTemporalEventTrigger;
@property(readonly, nonatomic) _Bool hasTargetTask;
- (int)StringAsStatus:(id)arg1;
- (id)statusAsString:(int)arg1;
@property(nonatomic) _Bool hasStatus;
@property(readonly, nonatomic) _Bool hasSpatialEventTrigger;
@property(readonly, nonatomic) _Bool hasIntentMetadata;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

