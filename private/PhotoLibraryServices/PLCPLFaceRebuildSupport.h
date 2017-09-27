//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSManagedObjectContext, PLFaceRebuildHelper, PLManagedAsset;

@interface PLCPLFaceRebuildSupport : NSObject
{
    PLManagedAsset *_asset;
    NSManagedObjectContext *_context;
    PLFaceRebuildHelper *_rebuildHelper;
    int _detectedFaceCount;
    int _rejectedFaceCount;
    int _hiddenFaceCount;
}

+ (void)rebuildDeferredFacesForAsset:(id)arg1 inManagedObjectContext:(id)arg2;
- (id)fetchPersonForDeferredFace:(id)arg1;
- (id)fetchDeferredFacesToRebuild;
- (void)rebuildHiddenFace:(id)arg1;
- (void)rebuildRejectedFace:(id)arg1;
- (void)rebuildDetectedFace:(id)arg1;
- (void)rebuildFace:(id)arg1;
- (void)rebuildAllFaces;
- (void)dealloc;
- (id)initWithAsset:(id)arg1 managedObjectContext:(id)arg2;

@end

