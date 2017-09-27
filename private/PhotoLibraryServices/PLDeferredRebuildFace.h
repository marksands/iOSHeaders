//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryServices/PLManagedObject.h>

#import "PLFaceRebuildDescription.h"

@class NSString;

@interface PLDeferredRebuildFace : PLManagedObject <PLFaceRebuildDescription>
{
}

+ (id)deferredFacesWithAssetCloudGUID:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)entityName;
+ (id)insertInManagedObjectContext:(id)arg1;
@property(readonly, nonatomic, getter=isClusterRejected) _Bool clusterRejected;
@property(readonly, nonatomic, getter=isRepresentative) _Bool representative;
@property(readonly, nonatomic, getter=isManual) _Bool manual;
@property(readonly, nonatomic, getter=isHidden) _Bool hidden;

// Remaining properties
@property(copy, nonatomic) NSString *assetCloudGUID; // @dynamic assetCloudGUID;
@property(copy, nonatomic) NSString *assetUUID; // @dynamic assetUUID;
@property(nonatomic) double centerX; // @dynamic centerX;
@property(nonatomic) double centerY; // @dynamic centerY;
@property(nonatomic) int cloudNameSource; // @dynamic cloudNameSource;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) int faceAlgorithmVersion; // @dynamic faceAlgorithmVersion;
@property(readonly) unsigned long long hash;
@property(nonatomic) int nameSource; // @dynamic nameSource;
@property(copy, nonatomic) NSString *personUUID; // @dynamic personUUID;
@property(nonatomic) _Bool rejected; // @dynamic rejected;
@property(nonatomic) double size; // @dynamic size;
@property(readonly) Class superclass;

@end

