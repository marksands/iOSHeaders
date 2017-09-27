//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaMiningKit/CLSDBCache.h>

@class NSPredicate;

@interface CLSBusinessCategoryCache : CLSDBCache
{
    NSPredicate *_predicateBusinessItemTemplate;
    NSPredicate *_predicateEntryWithUpdateDate;
}

+ (id)deserializeCategories:(unsigned int)arg1;
+ (unsigned int)serializeCategories:(id)arg1;
+ (_Bool)cachedRegion:(id)arg1 isMatchingOtherRegion:(id)arg2;
+ (id)defaultCache;
- (void).cxx_destruct;
- (unsigned long long)numberOfBusinessItemsForRegion:(id)arg1;
- (_Bool)hasRegion:(id)arg1;
- (id)businessItemsForRegion:(id)arg1;
- (id)nearestItemForRegion:(id)arg1 inItems:(id)arg2;
- (void)setBusinessItems:(id)arg1 forRegion:(id)arg2;
- (void)insertBatchesOfBusinessItems:(id)arg1 forRegions:(id)arg2;
- (id)predicateForRegion:(id)arg1;
- (void)invalidateCacheItemsBeforeDateWithTimestamp:(double)arg1;
- (void)invalidateCacheForRegion:(id)arg1;
- (id)dataModelName;
- (id)init;

@end

