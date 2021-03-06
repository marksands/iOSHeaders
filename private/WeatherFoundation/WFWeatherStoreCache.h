//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSTimer, NSURL;

__attribute__((visibility("hidden")))
@interface WFWeatherStoreCache : NSObject
{
    NSURL *_URL;
    NSTimer *_cacheStoreTimer;
    NSObject<OS_dispatch_queue> *_cacheConcurrentQueue;
    NSMutableDictionary *_cacheForDomain;
    NSMutableSet *_dirtyCacheDomains;
}

+ (_Bool)removeObjectsFromCache:(id)arg1 passingTest:(CDUnknownBlockType)arg2;
+ (id)createCacheIfNecessary:(id)arg1 error:(id *)arg2;
+ (id)wf_masterDomains;
@property(retain) NSMutableSet *dirtyCacheDomains; // @synthesize dirtyCacheDomains=_dirtyCacheDomains;
@property(retain) NSMutableDictionary *cacheForDomain; // @synthesize cacheForDomain=_cacheForDomain;
@property(retain) NSObject<OS_dispatch_queue> *cacheConcurrentQueue; // @synthesize cacheConcurrentQueue=_cacheConcurrentQueue;
@property(retain, nonatomic) NSTimer *cacheStoreTimer; // @synthesize cacheStoreTimer=_cacheStoreTimer;
@property(copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;
- (void)_concurrentQueue_barrier_removeObjectWithinDomain:(id)arg1 forKey:(id)arg2;
- (void)_concurrentQueue_barrier_deleteOldDataFromCache:(id)arg1 allowedStaleness:(unsigned long long)arg2;
- (void)_concurrentQueue_barrier_deleteOldDataFromCache;
- (void)_ensureDomainIsLoaded:(id)arg1;
- (id)_dirtyCacheDomains;
- (id)_loadedCacheDomains;
- (void)_markDomainDirty:(id)arg1;
- (_Bool)_concurrentQueue_barrier_loadDomain:(id)arg1;
- (_Bool)_loadDomain:(id)arg1;
- (void)_concurrentQueue_barrier_shrinkDomain:(id)arg1;
- (void)_shrinkDomain:(id)arg1;
- (void)executeTransaction:(CDUnknownBlockType)arg1;
- (void)removeAllObjects;
- (void)removeObjectWithinDomain:(id)arg1 forKey:(id)arg2;
- (void)cache:(id)arg1 withinDomain:(id)arg2 date:(id)arg3 forKey:(id)arg4 expiration:(id)arg5 synchronous:(_Bool)arg6;
- (void)cache:(id)arg1 withinDomain:(id)arg2 forKey:(id)arg3 expiration:(id)arg4;
- (void)cache:(id)arg1 withinDomain:(id)arg2 forKey:(id)arg3;
- (id)cachedObjectWithinDomain:(id)arg1 forKey:(id)arg2 staleness:(unsigned long long)arg3;
- (id)cachedObjectWithinDomain:(id)arg1 forKey:(id)arg2;
- (void)_concurrentQueue_barrier_writeCacheDictionaryToFile;
- (void)writeCacheDictionaryToFile;
- (void)deleteOldDataFromCache:(id)arg1 allowedStaleness:(unsigned long long)arg2;
- (void)_stopCacheStoreTimer;
- (void)_startCacheStoreTimer;
- (void)dealloc;
- (id)initWithURL:(id)arg1;
- (id)init;

@end

