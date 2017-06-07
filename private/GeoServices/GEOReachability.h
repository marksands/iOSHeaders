//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOResourceManifestTileGroupObserver-Protocol.h>

@class NSString;

@interface GEOReachability : NSObject <GEOResourceManifestTileGroupObserver>
{
    _Bool _networkReachable;
    unsigned long long _errorCount;
}

+ (id)sharedReachability;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
- (void)_reachabilityChanged:(id)arg1;
- (_Bool)networkAvailable;
- (void)reportLoadFailure:(id)arg1;
- (_Bool)anyFailures;
- (void)reportTileLoadSuccess:(id)arg1;
- (void)_resetErrors;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

