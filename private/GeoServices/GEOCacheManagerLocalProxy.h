//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GEOCacheManaging.h"

@class NSObject<OS_dispatch_queue>, NSString;

__attribute__((visibility("hidden")))
@interface GEOCacheManagerLocalProxy : NSObject <GEOCacheManaging>
{
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (void)refreshLOIReverseGeocodedMapItems:(id)arg1 updatedCoordinates:(id)arg2 traits:(id)arg3 auditToken:(id)arg4 handler:(CDUnknownBlockType)arg5;
- (void)refreshLOIAssociatedMapItems:(id)arg1 updatedCoordinates:(id)arg2 traits:(id)arg3 auditToken:(id)arg4 handler:(CDUnknownBlockType)arg5;
- (id)_syncedRevGeoCoordinate:(CDStruct_c3b9c2ee)arg1 traits:(id)arg2 auditToken:(id)arg3;
- (id)_syncedPlaceRefineMapItem:(id)arg1 coordinate:(CDStruct_c3b9c2ee)arg2 traits:(id)arg3 auditToken:(id)arg4;
- (id)_syncPlaceDataRequest:(id)arg1 traits:(id)arg2 auditToken:(id)arg3;
- (void)_asyncPlaceDataRequest:(id)arg1 traits:(id)arg2 auditToken:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (_Bool)_isKey:(id)arg1 subsetOf:(id)arg2;
- (long long)invalidationStateForComponent:(id)arg1;
- (long long)invalidationStateForPlace:(id)arg1;
- (_Bool)_invalidationDataHasExpiredByVersion:(unsigned int)arg1 domains:(id)arg2;
- (long long)_invalidationStateForTTL:(double)arg1 timestamp:(double)arg2 version:(unsigned int)arg3 versionDomains:(id)arg4;
- (long long)_invalidationDataHasExpired:(id)arg1;
- (void)snapshotWithFilePathArray:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)checkHasExpiredWithInvalidationDatas:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)versionsForDomains:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

