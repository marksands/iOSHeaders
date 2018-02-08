//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NTKFaceCollectionObserver.h"

@class NSMutableArray, NSMutableDictionary, NSString, NTKFaceCollection, NTKTaskScheduler;

@interface NTKKaleidoscopeCoordinatorCache : NSObject <NTKFaceCollectionObserver>
{
    NTKFaceCollection *_libraryCollection;
    NTKTaskScheduler *_taskScheduler;
    NSMutableArray *_pathsToTouch;
    NSMutableDictionary *_pathsToWrite;
    unsigned int _isCleanupScheduled:1;
    unsigned long long _kaleidoscopeFaceCount;
}

+ (id)sharedCache;
- (void).cxx_destruct;
- (void)_performCleanup;
- (void)_removePath:(id)arg1;
- (void)_touchPath:(id)arg1;
- (void)_writeBacking:(id)arg1 atPath:(id)arg2;
- (void)_scheduleCleanup;
- (void)_computeKaleidoscopeFaceCount;
- (void)faceCollectionDidReset:(id)arg1;
- (void)faceCollectionDidLoad:(id)arg1;
- (void)faceCollection:(id)arg1 didRemoveFace:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)faceCollection:(id)arg1 didAddFace:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)provideAtlasBacking:(id)arg1 uuid:(id)arg2;
- (void)setLibraryCollection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
