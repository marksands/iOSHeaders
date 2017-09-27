//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaPlayer/MPMediaItemCollection.h>

#import "MPCacheableConcreteMediaEntity.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class MPConcreteMediaEntityPropertiesCache, MPMediaItem, MPMediaQuery;

@interface MPConcreteMediaItemCollection : MPMediaItemCollection <NSCoding, NSCopying, MPCacheableConcreteMediaEntity>
{
    long long _identifier;
    MPMediaQuery *_itemsQuery;
    long long _grouping;
    MPMediaItem *_representativeItem;
    MPConcreteMediaEntityPropertiesCache *_propertiesCache;
}

- (void).cxx_destruct;
- (void)_enumerateItemPersistentIDsUsingBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)count;
- (id)representativeItem;
- (id)items;
- (id)itemsQuery;
- (void)setValue:(id)arg1 forProperty:(id)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (_Bool)setValue:(id)arg1 forProperty:(id)arg2;
- (id)valuesForProperties:(id)arg1;
- (id)valueForProperty:(id)arg1;
- (void)enumerateValuesForProperties:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (unsigned long long)persistentID;
- (id)mediaLibrary;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)invalidateCachedProperties;
@property(readonly, retain, nonatomic) MPConcreteMediaEntityPropertiesCache *cachedPropertyValues;
- (long long)groupingType;
- (void)dealloc;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithMultiverseIdentifier:(id)arg1;
- (id)initWithIdentifier:(long long)arg1 itemsQuery:(id)arg2 grouping:(long long)arg3;
- (id)initWithIdentifier:(long long)arg1 valuesForProperties:(id)arg2 itemsQuery:(id)arg3 grouping:(long long)arg4 representativeItemIdentifier:(long long)arg5;
- (id)_initWithIdentifier:(long long)arg1 valuesForProperties:(id)arg2 itemsQuery:(id)arg3 grouping:(long long)arg4 representativeItemIdentifier:(long long)arg5 propertiesCache:(id)arg6;

@end

