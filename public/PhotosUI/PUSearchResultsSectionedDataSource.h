//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PUSearchResultsValueDelegate.h"
#import "PUSearchTopAssetsResultChangeDelegate.h"

@class NSArray, NSCalendar, NSDateComponents, NSDateIntervalFormatter, NSDictionary, NSObject<OS_dispatch_queue>, NSString, PHFetchResult, PLPhotoLibrary, PLSearchIndexDateFormatter, PLSearchProcessor, PSIDatabase, PSIQuery;

__attribute__((visibility("hidden")))
@interface PUSearchResultsSectionedDataSource : NSObject <PUSearchResultsValueDelegate, PUSearchTopAssetsResultChangeDelegate>
{
    _Bool _resultsReady;
    _Bool _ignorePastResults;
    // Error parsing type: AB, name: _didMerge
    _Bool _wordEmbeddingsRequested;
    id <PUSearchResultsSectionedDataSourceChangeObserver> _changeObserver;
    NSArray *_results;
    NSArray *_uncommittedResults;
    unsigned long long _sectionFetchIndex;
    unsigned long long _maxGroupedResultsCount;
    unsigned long long _queryTag;
    unsigned long long _uncommittedMaxGroupedResultsCount;
    unsigned long long _unprocessedSearchResultsCount;
    PLPhotoLibrary *_photoLibrary;
    PLSearchIndexDateFormatter *_dateFormatter;
    NSDateIntervalFormatter *_dateIntervalFormatter;
    PLSearchProcessor *_searchProcessor;
    PSIDatabase *_searchIndex;
    PSIQuery *_query;
    NSObject<OS_dispatch_queue> *_queue;
    PHFetchResult *_homePersons;
    NSArray *_suggestions;
    NSDictionary *_sceneAncestryInformation;
    NSCalendar *_calendar;
    NSDateComponents *_dateRangeFormattingComponents;
}

+ (id)postQuerySearchResultsLog;
@property(nonatomic) _Bool wordEmbeddingsRequested; // @synthesize wordEmbeddingsRequested=_wordEmbeddingsRequested;
@property(retain, nonatomic) NSDateComponents *dateRangeFormattingComponents; // @synthesize dateRangeFormattingComponents=_dateRangeFormattingComponents;
@property(retain, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
@property(retain) NSDictionary *sceneAncestryInformation; // @synthesize sceneAncestryInformation=_sceneAncestryInformation;
@property(retain, nonatomic) NSArray *suggestions; // @synthesize suggestions=_suggestions;
@property(retain, nonatomic) PHFetchResult *homePersons; // @synthesize homePersons=_homePersons;
// Error parsing type for property didMerge:
// Property attributes: TAB,N,V_didMerge

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) PSIQuery *query; // @synthesize query=_query;
@property(retain, nonatomic) PSIDatabase *searchIndex; // @synthesize searchIndex=_searchIndex;
@property(retain, nonatomic) PLSearchProcessor *searchProcessor; // @synthesize searchProcessor=_searchProcessor;
@property(retain, nonatomic) NSDateIntervalFormatter *dateIntervalFormatter; // @synthesize dateIntervalFormatter=_dateIntervalFormatter;
@property(retain, nonatomic) PLSearchIndexDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(retain, nonatomic) PLPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
@property(nonatomic) unsigned long long unprocessedSearchResultsCount; // @synthesize unprocessedSearchResultsCount=_unprocessedSearchResultsCount;
@property(nonatomic) unsigned long long uncommittedMaxGroupedResultsCount; // @synthesize uncommittedMaxGroupedResultsCount=_uncommittedMaxGroupedResultsCount;
@property(nonatomic) unsigned long long queryTag; // @synthesize queryTag=_queryTag;
@property(nonatomic) unsigned long long maxGroupedResultsCount; // @synthesize maxGroupedResultsCount=_maxGroupedResultsCount;
@property(nonatomic) unsigned long long sectionFetchIndex; // @synthesize sectionFetchIndex=_sectionFetchIndex;
@property(retain, nonatomic) NSArray *uncommittedResults; // @synthesize uncommittedResults=_uncommittedResults;
@property(retain, nonatomic) NSArray *results; // @synthesize results=_results;
@property(nonatomic) _Bool ignorePastResults; // @synthesize ignorePastResults=_ignorePastResults;
@property(nonatomic) _Bool resultsReady; // @synthesize resultsReady=_resultsReady;
@property(nonatomic) __weak id <PUSearchResultsSectionedDataSourceChangeObserver> changeObserver; // @synthesize changeObserver=_changeObserver;
- (void).cxx_destruct;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSDictionary *debugDictionary;
- (id)tapToRadarAttachments;
- (id)_parentWordWithWord:(id)arg1;
- (id)_bestParentWordEmbeddingsWithWordEmbeddings:(id)arg1;
- (id)_sortedWordEmbeddingsForCurrentQuery;
- (id)_wordEmbeddingSubstitutionsWantsSubstitutedString:(_Bool)arg1;
- (id)selectedWordEmbeddingTextAtIndex:(unsigned long long)arg1;
- (id)wordEmbeddingSubstitutions;
- (void)didChangeThumbnailAssetsForSearchResult:(id)arg1;
- (id)stringWithStartDate:(id)arg1 endDate:(id)arg2;
- (_Bool)searchIsFinished:(id)arg1;
- (void)cancel;
- (void)_inqCancel;
- (void)mergePendingChanges;
- (_Bool)hasPendingChanges;
- (void)_asyncFetchAssetsWithQueryTag:(unsigned long long)arg1;
- (id)_fetchObjectsWithEntityName:(id)arg1 uuids:(id)arg2;
- (void)_inqBackgroundProcessAssetResults:(id)arg1 collectionResults:(id)arg2 tripResults:(id)arg3 topAssetsResult:(id)arg4 topCollectionResults:(id)arg5 withTag:(unsigned long long)arg6 searchString:(id)arg7 representedObjects:(id)arg8 maxSuggestionCount:(unsigned long long)arg9;
- (_Bool)_shouldCancel:(unsigned long long)arg1;
- (void)setSearchString:(id)arg1 representedObjects:(id)arg2 maxSuggestionCount:(unsigned long long)arg3;
- (id)titleForHeaderInSection:(long long)arg1;
- (_Bool)isTopAssetsSection:(long long)arg1;
- (id)searchResultAtIndexPath:(id)arg1;
- (long long)numberOfSearchResultsInSection:(long long)arg1;
- (void)collapseSection:(long long)arg1;
- (void)expandSection:(long long)arg1;
- (_Bool)isSectionExpanded:(long long)arg1;
- (_Bool)isSectionExpandable:(long long)arg1;
- (long long)numberOfSections;
- (id)initForUnitTests;
- (id)initWithSearchIndex:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

