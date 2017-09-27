//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CPLEngineComponent.h"
#import "CPLNetworkWatcherDelegate.h"

@class CPLEngineLibrary, CPLNetworkWatcher, NSObject<OS_dispatch_queue>, NSString, NSURL;

@interface CPLEngineSystemMonitor : NSObject <CPLNetworkWatcherDelegate, CPLEngineComponent>
{
    NSURL *_volumeURL;
    NSObject<OS_dispatch_queue> *_queue;
    CPLNetworkWatcher *_watcher;
    CPLEngineLibrary *_engineLibrary;
}

@property(readonly, nonatomic) __weak CPLEngineLibrary *engineLibrary; // @synthesize engineLibrary=_engineLibrary;
- (void).cxx_destruct;
- (void)networkStateDidChangeForNetworkWatched:(id)arg1;
- (_Bool)isNetworkConnected;
- (void)getStatusWithCompletionHandler:(CDUnknownBlockType)arg1;
- (unsigned long long)freeDiskSpaceSize;
- (unsigned long long)diskPressureState;
- (id)componentName;
- (void)closeAndDeactivate:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)openWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithEngineLibrary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

