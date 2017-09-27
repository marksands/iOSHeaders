//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString, PBUnknownFields, _INPBDataString, _INPBDateTimeRange, _INPBIntentMetadata, _INPBLocation;

@interface _INPBSearchForNotebookItemsIntent : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSString *_content;
    int _dateSearchType;
    _INPBDateTimeRange *_dateTime;
    _INPBIntentMetadata *_intentMetadata;
    int _itemType;
    _INPBLocation *_location;
    int _locationSearchType;
    int _status;
    _INPBDataString *_title;
    struct {
        unsigned int dateSearchType:1;
        unsigned int itemType:1;
        unsigned int locationSearchType:1;
        unsigned int status:1;
    } _has;
}

+ (id)options;
@property(retain, nonatomic) _INPBDateTimeRange *dateTime; // @synthesize dateTime=_dateTime;
@property(retain, nonatomic) _INPBLocation *location; // @synthesize location=_location;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) _INPBDataString *title; // @synthesize title=_title;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsDateSearchType:(id)arg1;
- (id)dateSearchTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasDateSearchType;
@property(nonatomic) int dateSearchType; // @synthesize dateSearchType=_dateSearchType;
@property(readonly, nonatomic) _Bool hasDateTime;
- (int)StringAsLocationSearchType:(id)arg1;
- (id)locationSearchTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasLocationSearchType;
@property(nonatomic) int locationSearchType; // @synthesize locationSearchType=_locationSearchType;
@property(readonly, nonatomic) _Bool hasLocation;
- (int)StringAsStatus:(id)arg1;
- (id)statusAsString:(int)arg1;
@property(nonatomic) _Bool hasStatus;
@property(nonatomic) int status; // @synthesize status=_status;
- (int)StringAsItemType:(id)arg1;
- (id)itemTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasItemType;
@property(nonatomic) int itemType; // @synthesize itemType=_itemType;
@property(readonly, nonatomic) _Bool hasContent;
@property(readonly, nonatomic) _Bool hasTitle;
@property(readonly, nonatomic) _Bool hasIntentMetadata;

@end

