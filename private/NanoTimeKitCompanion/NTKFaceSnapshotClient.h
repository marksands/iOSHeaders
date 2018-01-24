//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSXPCConnection;

@interface NTKFaceSnapshotClient : NSObject
{
    NSXPCConnection *_connection;
    _Bool _registrationNeeded;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_handleConnectionInterrupted;
- (void)_registerIfNeeded;
- (void)_handleSignificantLocationChangeNotification;
- (void)_handleCustomMonogramChangedNotification;
- (void)_updateAllSnapshots;
- (void)faceSnapshotChangedForKey:(id)arg1;
- (void)snapshotFace:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)performAfterCompletingCurrentlyPendingSnapshots:(CDUnknownBlockType)arg1;
- (void)requestSnapshotOfFace:(id)arg1;
- (void)createFaceForPerformanceTesting:(long long)arg1;
- (void)synchronouslyUpdateAllSnapshots;
- (void)dealloc;
- (void)_setupConnection;
- (id)init;

@end

