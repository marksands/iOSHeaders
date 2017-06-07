//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOActiveTileGroupMigrator-Protocol.h>

@class GEOResourceManifestConfiguration, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface GEOResourcesVersionMigrator : NSObject <GEOActiveTileGroupMigrator>
{
    GEOResourceManifestConfiguration *_manifestConfiguration;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSMutableArray *_runningTasks;
}

- (void).cxx_destruct;
- (void)_removeRunningTask:(id)arg1;
- (void)_addRunningTask:(id)arg1;
- (id)taskForNewTileGroup:(id)arg1 inResourceManifest:(id)arg2 oldTileGroup:(id)arg3 activeScales:(id)arg4 activeScenarios:(id)arg5 pruner:(id)arg6;
- (id)taskForNewTileGroup:(id)arg1 inResourceManifest:(id)arg2 oldTileGroup:(id)arg3 activeScales:(id)arg4 activeScenarios:(id)arg5;
- (id)initWithManifestConfiguration:(id)arg1 mapLayerDataManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

