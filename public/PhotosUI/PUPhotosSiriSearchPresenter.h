//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PHPhotoLibraryChangeObserver.h"
#import "PUSearchResultsDataSourceChangeObserver.h"

@class NSObject<OS_dispatch_semaphore>, NSString, PHFetchResult, PSIDatabase, PUNavigationController, PUPhotosGridViewControllerSpec, PUPingTimer, PUSearchGridDataSource, PUSearchGridViewController, PUSearchResultsDataSource, UIViewController;

@interface PUPhotosSiriSearchPresenter : NSObject <PUSearchResultsDataSourceChangeObserver, PHPhotoLibraryChangeObserver>
{
    double _searchStartTime;
    _Bool _presenting;
    _Bool _first;
    PUPhotosGridViewControllerSpec *_gridSpec;
    NSString *_utterance;
    UIViewController *_sCurrentVisibleController;
    PUSearchGridDataSource *_photoCollections;
    PUSearchGridViewController *_searchResultsViewController;
    PUNavigationController *_searchResultsNav;
    NSObject<OS_dispatch_semaphore> *_siriSearchSemaphore;
    NSObject<OS_dispatch_semaphore> *_siriIntentBackgroundProcessingCompleteSemaphore;
    PUSearchResultsDataSource *__searchResultsDataSource;
    PSIDatabase *__searchIndex;
    PUPingTimer *__searchResultsPingTimer;
    PHFetchResult *_albumFetchResult;
    PHFetchResult *_smartAlbumFetchResult;
}

+ (void)syncSiriIntentDataSoon;
+ (void)searchWithSiriSearch:(id)arg1;
+ (void)showSiriForForeground;
+ (void)registerForSiriIntentsForViewController:(id)arg1;
@property(retain, nonatomic) PHFetchResult *smartAlbumFetchResult; // @synthesize smartAlbumFetchResult=_smartAlbumFetchResult;
@property(retain, nonatomic) PHFetchResult *albumFetchResult; // @synthesize albumFetchResult=_albumFetchResult;
@property(nonatomic) _Bool first; // @synthesize first=_first;
@property(nonatomic) _Bool presenting; // @synthesize presenting=_presenting;
@property(retain, nonatomic) PUPingTimer *_searchResultsPingTimer; // @synthesize _searchResultsPingTimer=__searchResultsPingTimer;
@property(retain, nonatomic) PSIDatabase *_searchIndex; // @synthesize _searchIndex=__searchIndex;
@property(retain, nonatomic) PUSearchResultsDataSource *_searchResultsDataSource; // @synthesize _searchResultsDataSource=__searchResultsDataSource;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *siriIntentBackgroundProcessingCompleteSemaphore; // @synthesize siriIntentBackgroundProcessingCompleteSemaphore=_siriIntentBackgroundProcessingCompleteSemaphore;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *siriSearchSemaphore; // @synthesize siriSearchSemaphore=_siriSearchSemaphore;
@property(retain, nonatomic) PUNavigationController *searchResultsNav; // @synthesize searchResultsNav=_searchResultsNav;
@property(retain, nonatomic) PUSearchGridViewController *searchResultsViewController; // @synthesize searchResultsViewController=_searchResultsViewController;
@property(retain, nonatomic) PUSearchGridDataSource *photoCollections; // @synthesize photoCollections=_photoCollections;
@property(retain, nonatomic) UIViewController *sCurrentVisibleController; // @synthesize sCurrentVisibleController=_sCurrentVisibleController;
@property(retain, nonatomic) NSString *utterance; // @synthesize utterance=_utterance;
@property(retain, nonatomic) PUPhotosGridViewControllerSpec *gridSpec; // @synthesize gridSpec=_gridSpec;
- (void).cxx_destruct;
- (void)registerForIntents;
- (void)synchImportantThingsToSiri;
- (void)photoLibraryDidChange:(id)arg1;
- (void)synchAlbumNamesToSiriForIntentNaturalLanguageAndSpeechAssist;
- (void)searchWithSiriInternal:(id)arg1;
- (void)_mergeSearchResults;
- (void)_pingTimerFire:(id)arg1;
- (void)searchResultsDataSource:(id)arg1 didFetchAssetsForSearchResultsValue:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)searchResultsDataSourceHasPendingChanges:(id)arg1;
- (void)completeSearchQueryWithUUIDs:(id)arg1 additionalUUIDs:(id)arg2 albumUUIDs:(id)arg3 intent:(id)arg4 dataSource:(id)arg5;
- (id)predicateForNearByWithLatitude:(double)arg1 longitude:(double)arg2;
- (void)completeWithZeroSearchResults:(id)arg1 showUI:(_Bool)arg2;
- (void)searchWithSiriPlaceIMP:(id)arg1 dataSource:(id)arg2 searchTerm:(id)arg3 useFuzzyContains:(_Bool)arg4;
- (id)topViewControllerWithRootViewController:(id)arg1;
- (id)topViewControllerFromRoot;
- (void)presentLast;
- (void)presentRecentSiriSearch;
- (void)_pushGridForPhotosWithUUIDs:(id)arg1 additionalUUIDs:(id)arg2 intent:(id)arg3 title:(id)arg4 searchCategories:(unsigned long long)arg5 completion:(CDUnknownBlockType)arg6;
- (void)_searchResultsViewControllerDidFinish:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

