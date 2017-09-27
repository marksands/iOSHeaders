//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GameCenterPrivateUI/GKCollectionViewDataSource.h>

#import "GKSegmentInfoDelegagte.h"

@class GKCollectionViewPlaceholderView, GKSegmentInfo, GKSegmentedSectionHeaderView, NSArray, NSMutableArray, NSString;

@interface GKSegmentedSectionDataSource : GKCollectionViewDataSource <GKSegmentInfoDelegagte>
{
    _Bool _usePlaceholder;
    _Bool _shouldHideSegment;
    _Bool _waitingForAnimation;
    NSString *_noContentTitle;
    NSString *_noContentMessage;
    NSString *_noContentButtonTitle;
    id _noContentButtonTarget;
    SEL _noContentButtonAction;
    Class _segmentedHeaderClass;
    NSMutableArray *_segmentInfos;
    GKSegmentedSectionHeaderView *_headerView;
    GKCollectionViewPlaceholderView *_placeholderView;
    GKSegmentInfo *_selectedSegmentInfo;
    GKCollectionViewDataSource *_rootDataSource;
}

@property(retain, nonatomic) GKCollectionViewDataSource *rootDataSource; // @synthesize rootDataSource=_rootDataSource;
@property(nonatomic) _Bool waitingForAnimation; // @synthesize waitingForAnimation=_waitingForAnimation;
@property(retain, nonatomic) GKSegmentInfo *selectedSegmentInfo; // @synthesize selectedSegmentInfo=_selectedSegmentInfo;
@property(retain, nonatomic) GKCollectionViewPlaceholderView *placeholderView; // @synthesize placeholderView=_placeholderView;
@property(retain, nonatomic) GKSegmentedSectionHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) NSMutableArray *segmentInfos; // @synthesize segmentInfos=_segmentInfos;
@property(nonatomic) Class segmentedHeaderClass; // @synthesize segmentedHeaderClass=_segmentedHeaderClass;
@property(nonatomic) SEL noContentButtonAction; // @synthesize noContentButtonAction=_noContentButtonAction;
@property(nonatomic) id noContentButtonTarget; // @synthesize noContentButtonTarget=_noContentButtonTarget;
@property(retain, nonatomic) NSString *noContentButtonTitle; // @synthesize noContentButtonTitle=_noContentButtonTitle;
@property(retain, nonatomic) NSString *noContentMessage; // @synthesize noContentMessage=_noContentMessage;
@property(retain, nonatomic) NSString *noContentTitle; // @synthesize noContentTitle=_noContentTitle;
@property(nonatomic) _Bool shouldHideSegment; // @synthesize shouldHideSegment=_shouldHideSegment;
@property(nonatomic) _Bool usePlaceholder; // @synthesize usePlaceholder=_usePlaceholder;
- (void)dataSource:(id)arg1 performBatchUpdate:(CDUnknownBlockType)arg2 complete:(CDUnknownBlockType)arg3;
- (void)dataSourceDidReloadData:(id)arg1;
- (void)dataSource:(id)arg1 didMoveSection:(long long)arg2 toSection:(long long)arg3;
- (void)dataSource:(id)arg1 didRefreshSections:(id)arg2;
- (void)dataSource:(id)arg1 didRemoveSections:(id)arg2;
- (void)dataSource:(id)arg1 didInsertSections:(id)arg2;
- (void)dataSource:(id)arg1 didMoveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (void)dataSource:(id)arg1 didRefreshItemsAtIndexPaths:(id)arg2;
- (void)dataSource:(id)arg1 didRemoveItemsAtIndexPaths:(id)arg2;
- (void)dataSource:(id)arg1 didInsertItemsAtIndexPaths:(id)arg2;
- (unsigned long long)sectionForDataSource:(id)arg1;
- (_Bool)containsDataSource:(id)arg1;
- (void)collectionViewDidBecomeInactive:(id)arg1;
- (void)collectionViewWillBecomeActive:(id)arg1;
- (id)createMetricsTreeWithGridLayout:(id)arg1;
- (id)collectionView:(id)arg1 evaluateFactoryForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 isRecursive:(_Bool)arg4;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)configureSegmentedHeader:(id)arg1;
- (void)hoistSegmentedFactoryToRoot;
- (void)configureCollectionView:(id)arg1;
- (void)removeItemAtIndexPath:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)item:(id)arg1 matchesSearchTerms:(id)arg2 inSection:(long long)arg3;
- (id)indexPathsForItem:(id)arg1;
- (id)itemAtIndexPath:(id)arg1;
- (void)refreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2 updateNotifier:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
@property(nonatomic) unsigned long long selectedDataSourceIndex;
@property(nonatomic) GKCollectionViewDataSource *selectedDataSource;
- (void)setSelectedDataSourceIndex:(unsigned long long)arg1 reload:(_Bool)arg2;
- (void)selectedSegmentChanged:(id)arg1;
- (void)groupDidLoad:(id)arg1;
- (void)dataSourceDidLoad;
- (void)segmentDidChangeLoadingState:(id)arg1;
- (void)dataSourceWillLoad;
- (void)updatePlaceholderNotify:(_Bool)arg1;
- (id)dataSourceForSection:(unsigned long long)arg1;
- (void)removeDataSource:(id)arg1;
- (void)addDataSource:(id)arg1;
- (void)setTitle:(id)arg1 forDataSource:(id)arg2;
- (void)infosChanged;
- (id)allTitles;
@property(readonly, nonatomic) NSArray *dataSources;
- (id)infoForDataSource:(id)arg1;
- (id)infoForSegment:(long long)arg1;
- (id)_gkDescriptionWithChildren:(int)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithDataSources:(id)arg1 rootDataSource:(id)arg2;
- (id)initWithDataSources:(id)arg1;

@end

