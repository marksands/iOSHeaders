//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBSetTaskAttributeIntentResponse.h"

@class NSString, _INPBTask;

@interface _INPBSetTaskAttributeIntentResponse : PBCodable <_INPBSetTaskAttributeIntentResponse, NSSecureCoding, NSCopying>
{
    struct _has;
    _INPBTask *_modifiedTask;
}

@property(retain, nonatomic) _INPBTask *modifiedTask; // @synthesize modifiedTask=_modifiedTask;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(readonly, nonatomic) _Bool hasModifiedTask;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

