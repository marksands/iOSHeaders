//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NTKFaceCollectionObserver.h"

@class NSLock, NSString, NTKFaceCollection, NTKUpNextElementCoordinator;

@interface NTKUpNextElementCoordinatorCache : NSObject <NTKFaceCollectionObserver>
{
    NSLock *_coordinatorLock;
    NTKUpNextElementCoordinator *_coordinator;
    NTKUpNextElementCoordinator *_staticCoordinator;
    NTKFaceCollection *_libraryCollection;
    _Bool _isEditing;
}

+ (id)applicationPrewarmIdentifiers;
+ (_Bool)_disableCoordinatorCache;
+ (Class)_coordinatorCacheClass;
+ (id)sharedCache;
- (void).cxx_destruct;
- (void)_unloadCoordinatorIfNeeded;
- (void)_loadCoordinatorIfNeeded;
- (_Bool)_faceCollectionContainsFaceNeedingElementCoordinator:(id)arg1;
- (_Bool)_needsLiveElementCoordinator;
- (_Bool)_faceNeedsElementCoordinator:(id)arg1;
- (void)faceCollectionDidLoad:(id)arg1;
- (void)faceCollection:(id)arg1 didRemoveFace:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)faceCollection:(id)arg1 didAddFace:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)prewarm;
- (void)_clockViewControllerDidEndEditing;
- (void)_clockViewControllerDidBeginEditing;
- (id)canonicalElementCoordinator;
- (id)sharedElementCoordinator;
- (void)setLibraryCollection:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

