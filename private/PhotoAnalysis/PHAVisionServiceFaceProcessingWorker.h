//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoAnalysis/PHAVisionServiceWorker.h>

#import "PLPhotoAnalysisVisionServiceFaceProcessingProtocol.h"
#import "PVCVMLIntegrating.h"
#import "PVNotificationListener.h"
#import "PVPersonPromoterDelegate.h"

@class NSMutableDictionary, NSString, NSURL, PHAVisionServicePersistenceDelegate, PhotoVision;

@interface PHAVisionServiceFaceProcessingWorker : PHAVisionServiceWorker <PVNotificationListener, PVCVMLIntegrating, PVPersonPromoterDelegate, PLPhotoAnalysisVisionServiceFaceProcessingProtocol>
{
    PhotoVision *_photoVision;
    PHAVisionServicePersistenceDelegate *_persistenceDelegate;
    struct {
        double startTimeInterval;
        unsigned long long assetCount;
        unsigned long long faceCount;
        unsigned long long clusteringCount;
    } _analysisStatistics;
    NSMutableDictionary *_state;
    unsigned long long _incrementalPersonProcessingStage;
    _Bool _disabledByUserDefaults;
    NSURL *_suggestionLoggingDirectory;
    _Bool _suggestionLoggingSessionOpen;
    _Bool _suggestionsLoggingEnabled;
    _Bool _personBuilderMergeCandidatesEnabled;
    unsigned long long _lastMinimumFaceGroupSizeForCreatingMergeCandidates;
}

+ (long long)applicationDataFolderIdentifier;
+ (_Bool)runsExclusively;
+ (short)workerType;
@property(nonatomic) unsigned long long lastMinimumFaceGroupSizeForCreatingMergeCandidates; // @synthesize lastMinimumFaceGroupSizeForCreatingMergeCandidates=_lastMinimumFaceGroupSizeForCreatingMergeCandidates;
@property(nonatomic) _Bool personBuilderMergeCandidatesEnabled; // @synthesize personBuilderMergeCandidatesEnabled=_personBuilderMergeCandidatesEnabled;
@property(nonatomic) unsigned long long incrementalPersonProcessingStage; // @synthesize incrementalPersonProcessingStage=_incrementalPersonProcessingStage;
- (void).cxx_destruct;
- (void)personPromoterStatusWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)requestSuggestedMePersonIdentifierWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)faceProcessingStatusForUserInterfaceWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)validateClusterCacheWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)faceClusteringInformation:(unsigned long long)arg1 withContext:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (id)densityClusteringForObjects:(id)arg1 maximumDistance:(double)arg2 minimumNumberOfObjects:(unsigned long long)arg3 withDistanceBlock:(CDUnknownBlockType)arg4;
- (id)performSocialGroupsIdentifiersWithPersonClusterManager:(id)arg1 forPersons:(id)arg2 overTheYearsComputation:(_Bool)arg3 updateBlock:(CDUnknownBlockType)arg4;
- (id)suggestedMeIdentifierWithPersonClusterManager:(id)arg1 forPersons:(id)arg2 updateBlock:(CDUnknownBlockType)arg3;
- (id)keyFaceForPerson:(id)arg1 qualityMeasureByFace:(id)arg2 updateBlock:(CDUnknownBlockType)arg3;
- (void)rebuildPersonsWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)processPersonsWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (_Bool)_promotePersonsWithError:(id *)arg1;
- (_Bool)_buildPersonsIncrementally:(_Bool)arg1 error:(id *)arg2;
- (_Bool)_clusterFacesWithPhotoVision:(id)arg1 incrementally:(_Bool)arg2 error:(id *)arg3;
- (_Bool)_deleteAllVerifiedPersonsWithError:(id *)arg1;
- (void)reclusterFacesWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)resetPeopleWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)resetFaceClusteringStateWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)updateKeyFacesOfPersonsWithLocalIdentifiers:(id)arg1 forceUpdate:(_Bool)arg2 context:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)faceCandidatesforKeyFaceForPersonsWithLocalIdentifiers:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (id)bestRepresentativeFaceForPerson:(id)arg1 qualityMeasureByFace:(id)arg2 canceler:(id)arg3;
- (id)_faceToFaceCountMapForFaces:(id)arg1;
- (void)renderFaceTilesForFaceLocalIdentifiers:(id)arg1 inAssetWithLocalIdentifier:(id)arg2 context:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)suggestVerifiedPersonLocalIdentifierForPersonWithLocalIdentifier:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)suggestVerifiedPersonLocalIdentifierForFaceWithLocalIdentifier:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)suggestPersonsForPersonWithLocalIdentifier:(id)arg1 toBeConfirmedPersonSuggestions:(id)arg2 toBeRejectedPersonSuggestions:(id)arg3 context:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)performFaceProcessingOnAssetWithLocalIdentifier:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (id)newPhotoVisionCVMLRequestOptions;
- (void)handlePVNotification:(id)arg1;
- (void)processDirtyFaceCrops;
- (_Bool)processAsset:(id)arg1 error:(id *)arg2;
- (_Bool)getLocallyAvailableAssetResource:(id *)arg1 forAnalyzingAsset:(id)arg2 error:(id *)arg3;
- (id)preferredAssetResourcesForAnalyzingAsset:(id)arg1;
- (unsigned long long)analyzeImageData:(id)arg1 forAsset:(id)arg2 withAttributes:(id)arg3 error:(id *)arg4;
- (unsigned long long)analyzeAssetResourceFileAtURL:(id)arg1 forAsset:(id)arg2 withAttributes:(id)arg3 error:(id *)arg4;
- (unsigned long long)_analyzeAsset:(id)arg1 withAttributes:(id)arg2 usingPVImageProvidedByBlock:(CDUnknownBlockType)arg3 error:(id *)arg4;
- (int)_faceWorkerTasksToPerformOnAsset:(id)arg1 accordingToAnalysisAttributes:(id)arg2;
- (_Bool)_generateAndPersistFaceCropsOfUserConfirmedFacesInImage:(id)arg1 forAsset:(id)arg2 error:(id *)arg3;
- (id)_facesRequiringFaceCropGenerationForAsset:(id)arg1 error:(id *)arg2;
- (_Bool)_generateAndPersistFaceCropsOfFaces:(id)arg1 inImage:(id)arg2 forAsset:(id)arg3 error:(id *)arg4;
- (_Bool)_validateAsset:(id)arg1 error:(id *)arg2;
- (void)setLastMinimumFaceGroupSizeForCreatingMergeCandidate:(unsigned long long)arg1;
- (void)_setStateValue:(id)arg1 forKey:(id)arg2;
- (void)_readState;
- (id)workerStateFileURL;
- (id)nextAdditionalJobWithScenario:(unsigned long long)arg1 requestReason:(unsigned long long)arg2;
- (_Bool)hasStandaloneJobsForScenario:(unsigned long long)arg1;
- (_Bool)hasAdditionalJobsForScenario:(unsigned long long)arg1 requestReason:(unsigned long long)arg2;
- (id)statusAsDictionary;
- (_Bool)_needToRunPersonPromoterForScenario:(unsigned long long)arg1;
- (_Bool)_needToRunPersonBuildingJobForScenario:(unsigned long long)arg1;
- (_Bool)_needToRunClusteringJobForScenario:(unsigned long long)arg1;
- (_Bool)_needToRunFaceCropProcessingJobForScenario:(unsigned long long)arg1;
- (_Bool)isEnabled;
- (void)willCompleteJob:(id)arg1;
- (_Bool)stopAnalysisJob:(id)arg1 error:(id *)arg2;
- (void)cooldown;
- (void)warmup;
- (void)shutdown;
- (_Bool)performPersonBuildingWithCanceler:(id)arg1 error:(id *)arg2;
- (_Bool)_setAllFaceGroupsNeedPersonBuilding;
- (_Bool)processDirtyFaceCrop:(id)arg1 error:(id *)arg2;
- (_Bool)_updateFaceCropFace:(id)arg1 withFaceprintForFaceCrop:(id)arg2 error:(id *)arg3;
- (_Bool)_generateAndAssociateFaceprintedFaceForFaceCrop:(id)arg1 error:(id *)arg2;
- (_Bool)performFaceClusteringWithCompletion:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (void)_performFaceCropProcessingWhileKeepingAliveJob:(id)arg1;
- (void)_didPerformFaceClustering;
- (void)_willPerformFaceClustering;
- (_Bool)_resetFaceClusteringStateWithContext:(id)arg1 error:(id *)arg2;
- (_Bool)_renderFaceTilesForFaceLocalIdentifiers:(id)arg1 inAssetWithLocalIdentifier:(id)arg2 error:(id *)arg3;
- (id)_suggestionsForPersonWithLocalIdentifier:(id)arg1 toBeConfirmedPersonSuggestions:(id)arg2 toBeRejectedPersonSuggestions:(id)arg3 operation:(id)arg4 error:(id *)arg5;
- (void)_finalizeSuggestionsLog;
- (void)_logFaceToSuggestionsLog:(id)arg1;
- (void)_copyImageAtURLToSuggestionsLoggingSession:(id)arg1;
- (void)_appendToSuggestionsLog:(id)arg1;
- (void)_closeSuggestionsLoggingSession;
- (void)_openSuggestionsLoggingSession;
- (id)_analyzePVImage:(id)arg1 forAsset:(id)arg2 withAttributes:(id)arg3 error:(id *)arg4;
- (int)_performPersistedFaceAnalysisOfPVImage:(id)arg1 withAttributes:(id)arg2 forAsset:(id)arg3 error:(id *)arg4;
- (int)_performPersistedFaceAnalysisOfResource:(id)arg1 withAttributes:(id)arg2 forAsset:(id)arg3 error:(id *)arg4;
- (id)_pvImageForAsset:(id)arg1 error:(id *)arg2;
- (id)_pvImageForAssetResourceFileURL:(id)arg1 assetWidth:(unsigned long long)arg2 assetHeight:(unsigned long long)arg3 error:(id *)arg4;
- (id)_pvImageForAssetResource:(id)arg1 assetWidth:(unsigned long long)arg2 assetHeight:(unsigned long long)arg3 error:(id *)arg4;
- (void)interruptPhotoVision;
- (void)terminatePhotoVision;
- (id)_photoVisionAllowingCreation:(_Bool)arg1 error:(id *)arg2;
- (_Bool)_synchronouslyGenerateFaceTilesForFaces:(id)arg1 fromAsset:(id)arg2 assetImage:(id)arg3 error:(id *)arg4;
- (id)_suggestionsForPersonLocalIdentifier:(id)arg1 clusterSequenceNumbers:(id)arg2 excludePersonLocalIdentifiers:(id)arg3 operation:(id)arg4 context:(id)arg5 error:(id *)arg6;
- (void)_logAnalysisStatistics;
- (void)_resetAnalysisStatistics;
- (void)_performFullCVMLCleanup;
- (void)_performIntermediateCVMLCleanup;
- (id)initWithPhotoAnalysisManager:(id)arg1 dataLoader:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

