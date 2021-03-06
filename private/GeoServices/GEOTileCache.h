//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GEOTileCacheReserved, NSObject<OS_dispatch_source>;

@interface GEOTileCache : NSObject
{
    GEOTileCacheReserved *_reserved;
    NSObject<OS_dispatch_source> *_memoryNotificationEventSource;
}

- (void).cxx_destruct;
- (void)_enteredBackground:(id)arg1;
- (void)removeTilesMatchingPredicate:(CDUnknownBlockType)arg1;
- (void)enumerate:(CDUnknownBlockType)arg1;
- (void)removeAllObjects;
- (void)removeTilesWithKeys:(id)arg1;
- (void)removeTileForKey:(const struct _GEOTileKey *)arg1;
- (void)_removeTileForKey:(const struct _GEOTileKey *)arg1;
- (void)setNullForKey:(const struct _GEOTileKey *)arg1;
- (void)setTile:(id)arg1 forKey:(const struct _GEOTileKey *)arg2 cost:(unsigned long long)arg3;
- (_Bool)containsKey:(const struct _GEOTileKey *)arg1 cost:(unsigned long long *)arg2;
- (id)tileForKey:(const struct _GEOTileKey *)arg1;
@property unsigned long long maxCost;
@property unsigned long long maxCapacity;
- (void)_receivedMemoryNotification;
- (void)_evictWithMaxCost:(unsigned long long)arg1 maxCapacity:(unsigned long long)arg2;
- (id)description;
- (id)_description;
- (void)dealloc;
- (id)init;
@property(readonly) unsigned long long currentCost;
@property(readonly) unsigned long long currentCount;

@end

