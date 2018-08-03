//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUICore/PXUserEventTrackerCommon.h>

@class NSHashTable;

@interface PXUserEventTracker : PXUserEventTrackerCommon
{
    double _timeLoggedOnDetailViewWillAppear;
    double _timeLoggedOnMemoriesFeedWillAppear;
    unsigned long long _totalNumberOfRelatedJumps;
    unsigned long long _MaxDepthOfRelatedJumps;
    NSHashTable *__relatedLookupTable;
}

+ (_Bool)_isMemoryTriggered:(id)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic, setter=_setRelatedLookupTable:) NSHashTable *_relatedLookupTable; // @synthesize _relatedLookupTable=__relatedLookupTable;
- (void).cxx_destruct;
- (void)_aggdJumpCountLoggingDryrun:(unsigned long long)arg1 totalJumpCount:(unsigned long long)arg2;
- (void)_aggdDurationLoggingDryrun:(unsigned long long)arg1 duration:(double)arg2;
- (void)_aggdDurationLoggingDryrunForSubState:(unsigned long long)arg1 duration:(double)arg2;
- (void)livePhotoEffectShared;
- (void)livePhotoEffectSuggestionApplied;
- (void)livePhotoEffectSuggested:(long long)arg1;
- (void)livePhotoEffectReverted;
- (void)livePhotoEffectSavingFinished:(double)arg1;
- (void)livePhotoEffectSavingFailed;
- (void)livePhotoEffectSelected:(long long)arg1;
- (void)livePhotoEffectPreviewFinishedRendering:(double)arg1;
- (void)livePhotoEffectRenderingFailed;
- (void)livePhotoEffectOptionsAppeared;
- (void)logNavigationListViewTapWithKey:(struct __CFString *)arg1;
- (void)logSearchNumberOfTermsInSearchFieldOnSuccessfulSearch:(unsigned long long)arg1;
- (void)logSearchPerSessionNextTokenSuggestionTapped:(_Bool)arg1 wordCompletionTapped:(_Bool)arg2;
- (void)logSearchSuccessfulResult:(_Bool)arg1;
- (void)logSearchSiriFoundResults:(_Bool)arg1;
- (void)logSearchTapSearch;
- (void)logSearchZeroKeywordSearch;
- (void)logSearchNextTokenSuggestionTapped;
- (void)logSearchWordCompletionTapped;
- (void)logSearchWordEmbeddingSelected;
- (void)logSearchWordEmbeddingsPresented;
- (void)logZKSectionVisible:(_Bool)arg1 forSectionType:(long long)arg2;
- (void)logTappedZKItemType:(long long)arg1;
- (void)logSearchResultType:(unsigned long long)arg1;
- (void)logForYouInboxItemSelectedWithType:(long long)arg1;
- (void)logForYouInboxViewedCount;
- (void)logForYouSuggestionSavedCount;
- (void)logForYouSuggestionSharedCount;
- (void)logForYouSuggestionViewed1UpCount;
- (void)logForYouSuggestionViewedCount;
- (void)logForYouSharedAlbumActivityViewed1UpCount;
- (void)logForYouSharedAlbumInvitationReportedAsJunkCount;
- (void)logForYouSharedAlbumInvitationDeclinedCount;
- (void)logForYouSharedAlbumInvitationAcceptedCount;
- (void)logForYouContextualMemoriesDetailsCount;
- (void)logForYouMemoriesDetailsCount;
- (void)logForYouMemoriesFeedCount;
- (void)logForYouFeedCount;
- (void)logPeopleDetailShowFaces;
- (void)logPeopleDetailNotThisPerson;
- (void)logPeopleDetailKeyPhotoChanged;
- (void)logPeopleRemoveFromPeopleHome;
- (void)logPeopleAddToPeopleHome;
- (void)logPeopleHomeNumberOfPeopleWithContactName:(unsigned long long)arg1 numberOfPeopleWithStringName:(unsigned long long)arg2;
- (void)logPeopleHomeFavoritePersonCount:(unsigned long long)arg1 totalPersonCount:(unsigned long long)arg2;
- (void)logNamingTypeSelection:(unsigned long long)arg1;
- (void)logConfirmAdditionalMergeCandidatesVerifiedConfirmed:(unsigned long long)arg1 verifiedRejected:(unsigned long long)arg2 unverifiedConfirmed:(unsigned long long)arg3 unverifiedRejected:(unsigned long long)arg4;
- (void)logConfirmAdditionalMergeCandidateFaceCountVerifiedConfirmed:(unsigned long long)arg1 verifiedRejected:(unsigned long long)arg2 unverifiedConfirmed:(unsigned long long)arg3 unverifiedRejected:(unsigned long long)arg4;
- (void)logConfirmAdditionalVisionFaceCountConfirmed:(unsigned long long)arg1 rejected:(unsigned long long)arg2;
- (void)logConfirmAdditionalSuggestionsConfirmed:(unsigned long long)arg1 rejected:(unsigned long long)arg2;
- (void)logPeopleConfirmAdditionalViewCount;
- (void)logBootstrapMergeCandidateFaceCountVerifiedConfirmed:(unsigned long long)arg1 verifiedRejected:(unsigned long long)arg2 unverifiedConfirmed:(unsigned long long)arg3 unverifiedRejected:(unsigned long long)arg4;
- (void)logBootstrapMergeCandidatesVerifiedConfirmed:(unsigned long long)arg1 verifiedRejected:(unsigned long long)arg2 unverifiedConfirmed:(unsigned long long)arg3 unverifiedRejected:(unsigned long long)arg4;
- (void)logMergeCandidateInlineControlWithSignature:(unsigned long long)arg1;
- (void)logPeopleMeSuggestionConfirmed:(_Bool)arg1;
- (void)logPeopleDetailCount;
- (void)logPeopleHomeCount;
- (void)_logAggdRelatedJumpStatistics:(unsigned long long)arg1 totalJumpCount:(unsigned long long)arg2;
- (void)_logAggdDurationCounterForLogState:(unsigned long long)arg1 duration:(double)arg2;
- (void)_logAggdDurationCounterForLogSubState:(unsigned long long)arg1 duration:(double)arg2;
- (void)_logAggdAddValueForScalarKey:(struct __CFString *)arg1 value:(long long)arg2;
- (void)logCounterValuesForLogState:(unsigned long long)arg1 duration:(double)arg2;
- (void)logCounterValuesForLogSubState:(unsigned long long)arg1 duration:(double)arg2;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)logInterestingMemoryNotificationRespondedCount;
- (void)logInterestingMemoryNotificationSeenCount;
- (void)_resetDetailViewTraversalStatistics;
- (void)didCreateMemoryViaAddToMemories;
- (void)didFavoriteMemory;
- (void)didConfirmDeleteOfMemory;
- (void)didPlayMiroMovieForAssetCollection:(id)arg1;
- (void)didViewDetailsForAssetCollection:(id)arg1;
- (void)didFinishViewingMemoriesFeedView;
- (void)willViewMemoriesFeedView;
- (void)didFinishViewingDetailsWithCurrentContext:(id)arg1;
- (void)willViewDetailsWithCurrentContext:(id)arg1;
- (id)init;

@end

