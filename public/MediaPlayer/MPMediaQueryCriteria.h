//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSDictionary, NSMutableSet, NSSet;

@interface MPMediaQueryCriteria : NSObject <NSCopying>
{
    NSMutableSet *_filterPredicates;
    unsigned long long _entityOrder;
    long long _groupingType;
    unsigned long long _entityLimit;
    NSArray *_orderingProperties;
    NSSet *_itemPropertiesToFetch;
    NSSet *_collectionPropertiesToFetch;
    _Bool _useSections;
    _Bool _ignoreSystemFilterPredicates;
    _Bool _ignoreRestrictionsPredicates;
    _Bool _includeNonLibraryEntities;
    _Bool _includeEntitiesWithBlankNames;
    NSDictionary *_orderingDirectionMappings;
}

@property(nonatomic) unsigned long long entityOrder; // @synthesize entityOrder=_entityOrder;
@property(copy, nonatomic) NSDictionary *orderingDirectionMappings; // @synthesize orderingDirectionMappings=_orderingDirectionMappings;
@property(nonatomic) _Bool includeEntitiesWithBlankNames; // @synthesize includeEntitiesWithBlankNames=_includeEntitiesWithBlankNames;
@property(nonatomic) _Bool includeNonLibraryEntities; // @synthesize includeNonLibraryEntities=_includeNonLibraryEntities;
@property(nonatomic) _Bool ignoreRestrictionsPredicates; // @synthesize ignoreRestrictionsPredicates=_ignoreRestrictionsPredicates;
@property(nonatomic) _Bool ignoreSystemFilterPredicates; // @synthesize ignoreSystemFilterPredicates=_ignoreSystemFilterPredicates;
@property(copy, nonatomic) NSSet *itemPropertiesToFetch; // @synthesize itemPropertiesToFetch=_itemPropertiesToFetch;
@property(copy, nonatomic) NSSet *filterPredicates; // @synthesize filterPredicates=_filterPredicates;
@property(copy, nonatomic) NSArray *orderingProperties; // @synthesize orderingProperties=_orderingProperties;
@property(nonatomic) unsigned long long entityLimit; // @synthesize entityLimit=_entityLimit;
@property(nonatomic) long long groupingType; // @synthesize groupingType=_groupingType;
@property(copy, nonatomic) NSSet *collectionPropertiesToFetch; // @synthesize collectionPropertiesToFetch=_collectionPropertiesToFetch;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool specifiesPlaylistItems;
- (void)removePredicatesForProperty:(id)arg1;
- (id)predicateForProperty:(id)arg1;
- (void)removeFilterPredicate:(id)arg1;
- (void)addFilterPredicates:(id)arg1;
- (void)addFilterPredicate:(id)arg1;
@property(readonly, nonatomic) _Bool excludesEntitiesWithBlankNames;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)init;
- (id)ML3CollectionsQueryInLibrary:(id)arg1;
- (id)ML3ItemsQueryInLibrary:(id)arg1 orderingTerms:(id)arg2 nameBlankProperty:(id)arg3;
- (id)ML3ItemsQueryInLibrary:(id)arg1;
- (id)ML3OrderingTermsForGroupingType:(long long)arg1;
- (id)ML3OrderingTermsForMPOrderingProperties:(id)arg1 directionalityMapping:(id)arg2 entityClass:(Class)arg3;

@end

