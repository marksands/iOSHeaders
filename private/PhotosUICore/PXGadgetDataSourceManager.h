//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUICore/PXSectionedDataSourceManager.h>

#import "PXGadgetDelegate.h"
#import "PXGadgetProviderDelegate.h"

@class NSArray, NSMutableArray, NSObject<OS_dispatch_queue>, NSObject<OS_os_log>, NSString, PXGadgetDataSource;

@interface PXGadgetDataSourceManager : PXSectionedDataSourceManager <PXGadgetProviderDelegate, PXGadgetDelegate>
{
    _Bool _hasLoadedPriorities;
    _Bool _shouldSortProviders;
    _Bool _loadingInitialGadgets;
    _Bool _needsToLoadAllProviders;
    id <PXGadgetDelegate> _nextGadgetResponder;
    NSArray *_cachedProviders;
    NSObject<OS_dispatch_queue> *_lookupQueue;
    NSMutableArray *_lookupQueue_loadedProviders;
}

@property(nonatomic) _Bool needsToLoadAllProviders; // @synthesize needsToLoadAllProviders=_needsToLoadAllProviders;
@property(nonatomic) _Bool loadingInitialGadgets; // @synthesize loadingInitialGadgets=_loadingInitialGadgets;
@property(nonatomic) _Bool shouldSortProviders; // @synthesize shouldSortProviders=_shouldSortProviders;
@property(nonatomic) _Bool hasLoadedPriorities; // @synthesize hasLoadedPriorities=_hasLoadedPriorities;
@property(retain, nonatomic) NSMutableArray *lookupQueue_loadedProviders; // @synthesize lookupQueue_loadedProviders=_lookupQueue_loadedProviders;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *lookupQueue; // @synthesize lookupQueue=_lookupQueue;
@property(copy, nonatomic) NSArray *cachedProviders; // @synthesize cachedProviders=_cachedProviders;
@property(nonatomic) __weak id <PXGadgetDelegate> nextGadgetResponder; // @synthesize nextGadgetResponder=_nextGadgetResponder;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_os_log> *gadgetDataSourceManagerLog;
- (struct NSObject *)gadgetViewControllerHostingGadget:(id)arg1;
- (void)gadget:(id)arg1 animateChanges:(CDUnknownBlockType)arg2;
- (void)gadget:(id)arg1 didChange:(unsigned long long)arg2;
- (_Bool)scrollGadgetToVisible:(id)arg1 animated:(_Bool)arg2;
- (id)gridPresentation;
- (id)oneUpPresentation;
- (_Bool)gadget:(id)arg1 transitionToViewController:(struct NSObject *)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)invalidateGadgets;
- (id)_sortedGadgets;
- (id)_dataSourceSnapshot;
- (void)_updateDataSource;
- (void)_loadDataFromProviders:(id)arg1 withGadgetMinimum:(unsigned long long)arg2;
- (void)_loadPriorityForProviders:(id)arg1;
- (id)allGadgets;
- (id)_sortProvidersByLoadingPriority:(id)arg1;
- (void)loadRemainingGadgetsIfNeededWithGenerateGadgetFinishedBlock:(CDUnknownBlockType)arg1;
- (void)loadRemainingGadgetsIfNeeded;
- (void)beginLoadingInitialGadgets:(unsigned long long)arg1;
- (id)noContentGadget;
- (id)filteredUndisplayedGadgets:(id)arg1;
@property(readonly, nonatomic) CDUnknownBlockType gadgetSortComparator;
@property(readonly, nonatomic) NSArray *gadgetProviders;
- (void)removeCachedProviders;
- (id)createInitialDataSource;
- (id)initWithQueueName:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) PXGadgetDataSource *dataSource; // @dynamic dataSource;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

