//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaPlayer/MPSectionedIdentifierList.h>

@class MPRandomDistribution, NSMutableArray;

@interface _MPSSILImplementation : MPSectionedIdentifierList
{
    MPRandomDistribution *_randomDistribution;
    NSMutableArray *_candidateItems;
}

@property(retain, nonatomic) NSMutableArray *candidateItems; // @synthesize candidateItems=_candidateItems;
@property(readonly, nonatomic) MPRandomDistribution *randomDistribution; // @synthesize randomDistribution=_randomDistribution;
- (void).cxx_destruct;
- (void)_dequeueCandidatesWithQuota:(long long)arg1;
- (id)_createShuffleCloneForItem:(id)arg1 inSection:(id)arg2 verifyInclusion:(_Bool)arg3;
- (id)_createShuffleCloneForItem:(id)arg1 inSection:(id)arg2;
- (void)_appendShuffledItems:(id)arg1;
- (void)_addShuffleSection:(id)arg1 dataSource:(id)arg2;
- (void)_reverseEnumeratorWillStartAtEnd:(id)arg1;
- (void)_enumerator:(id)arg1 didEncounterEntry:(id)arg2;
- (long long)itemCount;
- (void)dataSourceReloadItem:(id)arg1 inSection:(id)arg2;
- (void)dataSourceRemoveItem:(id)arg1 fromSection:(id)arg2;
- (void)dataSourceInsertItemsAtTail:(id)arg1 inSection:(id)arg2;
- (void)dataSourceInsertItems:(id)arg1 afterItem:(id)arg2 inSection:(id)arg3;
- (void)dataSourceInsertItemsAtHead:(id)arg1 inSection:(id)arg2;
- (void)addDataSourceAtEnd:(id)arg1 section:(id)arg2;
- (void)addDataSource:(id)arg1 section:(id)arg2 afterItem:(id)arg3 inSection:(id)arg4;
- (void)addDataSourceAtStart:(id)arg1 section:(id)arg2;
- (id)enumeratorWithOptions:(unsigned long long)arg1 startingAtItem:(id)arg2 inSection:(id)arg3;
- (void)safelyReshuffleAfterItem:(id)arg1 inSection:(id)arg2;
- (id)initWithSectionedIdentifierList:(id)arg1 operationQueue:(id)arg2 randomSource:(id)arg3 startingItemEntry:(id)arg4;

@end
