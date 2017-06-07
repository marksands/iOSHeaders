//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Photos/PHPhotoLibrary.h>

#import <PhotoAnalysis/PVPhotoLibraryProtocol-Protocol.h>

@class NSString;

@interface PHPhotoLibrary (PVPhotoLibraryProtocol) <PVPhotoLibraryProtocol>
+ (id)_defaultFacePropertySets;
+ (id)_defaultAssetPropertySets;
+ (id)_phPeopleSortDescriptors;
+ (id)_phFaceSortDescriptors;
- (id)pv_lastAssetDate;
- (id)pv_fetchInvalidAssetIdentifiersForCommonComparison;
- (_Bool)pv_isLibraryBeingSynchronized;
- (float)pv_faceProcessingProgress;
- (double)_progressFromWorkerStatesDictionary:(id)arg1;
- (id)pv_fetchFaceGroupsForPerson:(id)arg1;
- (id)pv_fetchFaceGroups;
- (id)pv_fetchAssetsForFaceGroup:(id)arg1;
- (id)pv_fetchAssetsForPerson:(id)arg1;
- (id)pv_fetchAssetsInMoment:(id)arg1;
- (id)pv_fetchAssetsWithLocalIdentifiers:(id)arg1;
- (id)pv_fetchMomentsForAssetsWithLocalIdentifiers:(id)arg1;
- (id)pv_fetchMomentsForPerson:(id)arg1;
- (id)pv_fetchMomentsWithLocalIdentifiers:(id)arg1;
- (id)pv_fetchMoments;
- (id)pv_fetchFacesGroupedByAssetLocalIdentifierForAssets:(id)arg1;
- (id)pv_fetchFacesForFaceGroup:(id)arg1;
- (id)pv_fetchFacesForPersonLocalIdentifiers:(id)arg1 inMoment:(id)arg2;
- (id)pv_fetchFacesForPerson:(id)arg1 inMoment:(id)arg2;
- (id)pv_fetchFacesForPerson:(id)arg1;
- (id)pv_fetchFacesWithLocalIdentifiers:(id)arg1;
- (id)pv_fetchFaces;
- (id)pv_fetchPersonsGroupedByAssetLocalIdentifierForAssets:(id)arg1;
- (id)pv_fetchInvalidCandidatePersonsForPerson:(id)arg1;
- (id)pv_fetchCandidatePersonsForPerson:(id)arg1;
- (id)pv_fetchPersonsInMoment:(id)arg1;
- (id)pv_fetchPersonsWithType:(unsigned long long)arg1;
- (id)pv_fetchPersonsWithLocalIdentifiers:(id)arg1;
- (id)pv_persistentStorageDirectoryURL;
- (id)_defaultAssetFetchOptions;
- (id)_defaultFetchOptions;
- (_Bool)pv_performChangesAndWait:(CDUnknownBlockType)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

