//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthDaemon/HDSQLiteQueryDescriptor.h>

@class HDProfile, HKObjectType, NSArray, NSMutableDictionary, NSNumber, NSSet, _HKFilter;

@interface HDDataEntityEnumerator : HDSQLiteQueryDescriptor
{
    HDProfile *_profile;
    NSMutableDictionary *_encodingOptions;
    _Bool _useLeftJoin;
    _Bool _improveJoinOrderingForStartDateIndexSelection;
    HKObjectType *_objectType;
    _HKFilter *_filter;
    NSSet *_restrictedSourceEntities;
    CDUnknownBlockType _authorizationFilter;
    NSNumber *_anchor;
    NSNumber *_deletedObjectsAnchor;
    NSArray *_sortDescriptors;
}

@property(nonatomic) _Bool improveJoinOrderingForStartDateIndexSelection; // @synthesize improveJoinOrderingForStartDateIndexSelection=_improveJoinOrderingForStartDateIndexSelection;
@property(copy, nonatomic) NSArray *sortDescriptors; // @synthesize sortDescriptors=_sortDescriptors;
@property(retain, nonatomic) NSNumber *deletedObjectsAnchor; // @synthesize deletedObjectsAnchor=_deletedObjectsAnchor;
@property(retain, nonatomic) NSNumber *anchor; // @synthesize anchor=_anchor;
@property(copy, nonatomic) CDUnknownBlockType authorizationFilter; // @synthesize authorizationFilter=_authorizationFilter;
@property(retain, nonatomic) NSSet *restrictedSourceEntities; // @synthesize restrictedSourceEntities=_restrictedSourceEntities;
@property(retain, nonatomic) _HKFilter *filter; // @synthesize filter=_filter;
@property(readonly, nonatomic) HKObjectType *objectType; // @synthesize objectType=_objectType;
- (void).cxx_destruct;
- (id)_joinClauseForProperties:(id)arg1;
- (_Bool)_enumerateObjectsOnDatabase:(id)arg1 error:(id *)arg2 handler:(CDUnknownBlockType)arg3;
- (_Bool)_prepareDeletedObjectsAndSamplesDescriptor:(id)arg1 error:(id *)arg2;
- (_Bool)_prepareDescriptor:(id)arg1 error:(id *)arg2;
- (_Bool)_setColumnNamesAndSortOrderingsOnDescriptor:(id)arg1 error:(id *)arg2;
- (_Bool)enumerateIncludingDeletedObjects:(_Bool)arg1 error:(id *)arg2 handler:(CDUnknownBlockType)arg3;
- (_Bool)enumerateWithError:(id *)arg1 handler:(CDUnknownBlockType)arg2;
- (id)encodingOptionForKey:(id)arg1;
- (void)setEncodingOption:(id)arg1 forKey:(id)arg2;
- (void)addEncodingOptionsFromDictionary:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithObjectType:(id)arg1 entityClass:(Class)arg2 profile:(id)arg3;
- (id)initWithEntityClass:(Class)arg1 profile:(id)arg2;

@end

