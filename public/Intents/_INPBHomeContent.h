//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBHomeContent.h"

@class NSArray, NSString, _INPBHomeFilter;

@interface _INPBHomeContent : PBCodable <_INPBHomeContent, NSSecureCoding, NSCopying>
{
    struct _has;
    NSArray *_actions;
    _INPBHomeFilter *_filter;
}

+ (Class)actionsType;
@property(retain, nonatomic) _INPBHomeFilter *filter; // @synthesize filter=_filter;
@property(copy, nonatomic) NSArray *actions; // @synthesize actions=_actions;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(readonly, nonatomic) _Bool hasFilter;
- (id)actionsAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long actionsCount;
- (void)addActions:(id)arg1;
- (void)clearActions;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

