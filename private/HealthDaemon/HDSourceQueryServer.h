//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthDaemon/HDQueryServer.h>

#import "HDDataObserver.h"

@class NSMutableSet, NSString;

@interface HDSourceQueryServer : HDQueryServer <HDDataObserver>
{
    _Bool _deliversUpdates;
    NSMutableSet *_sources;
}

- (void).cxx_destruct;
- (void)_queue_sourceAdded:(id)arg1;
- (void)_sourcesForObjectsOfType:(id)arg1 filter:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)_queue_start;
- (id)requiredEntitlements;
- (_Bool)_shouldListenForUpdates;
- (id)sourceClientProxy;
- (id)initWithQueryUUID:(id)arg1 configuration:(id)arg2 clientProxy:(id)arg3 client:(id)arg4 delegate:(id)arg5 profile:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

