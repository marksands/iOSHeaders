//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray, NSString, PBUnknownFields, _INPBDataString, _INPBDateTime;

@interface _INPBTaskList : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    _INPBDateTime *_createdDateTime;
    _INPBDataString *_groupName;
    NSString *_identifier;
    _INPBDateTime *_modifiedDateTime;
    NSMutableArray *_tasks;
    _INPBDataString *_title;
}

+ (Class)tasksType;
+ (id)options;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) _INPBDateTime *modifiedDateTime; // @synthesize modifiedDateTime=_modifiedDateTime;
@property(retain, nonatomic) _INPBDateTime *createdDateTime; // @synthesize createdDateTime=_createdDateTime;
@property(retain, nonatomic) _INPBDataString *groupName; // @synthesize groupName=_groupName;
@property(retain, nonatomic) NSMutableArray *tasks; // @synthesize tasks=_tasks;
@property(retain, nonatomic) _INPBDataString *title; // @synthesize title=_title;
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
@property(readonly, nonatomic) _Bool hasIdentifier;
@property(readonly, nonatomic) _Bool hasModifiedDateTime;
@property(readonly, nonatomic) _Bool hasCreatedDateTime;
@property(readonly, nonatomic) _Bool hasGroupName;
- (id)tasksAtIndex:(unsigned long long)arg1;
- (unsigned long long)tasksCount;
- (void)addTasks:(id)arg1;
- (void)clearTasks;
@property(readonly, nonatomic) _Bool hasTitle;

@end

