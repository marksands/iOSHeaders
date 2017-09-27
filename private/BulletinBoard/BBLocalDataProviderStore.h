//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BBDataProviderStore.h"
#import "BBLocalDataProviderFactoryStore.h"

@class NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface BBLocalDataProviderStore : NSObject <BBLocalDataProviderFactoryStore, BBDataProviderStore>
{
    id <BBDataProviderStoreDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_serverQueue;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_dataProvidersBySectionID;
    NSMutableDictionary *_dataProvidersByUniversalSectionID;
    NSMutableArray *_localFactories;
}

+ (id)localDataProviderStoreWithDelegate:(id)arg1 dataProviderQueue:(id)arg2;
@property(retain, nonatomic) NSMutableArray *localFactories; // @synthesize localFactories=_localFactories;
@property(retain, nonatomic) NSMutableDictionary *dataProvidersByUniversalSectionID; // @synthesize dataProvidersByUniversalSectionID=_dataProvidersByUniversalSectionID;
@property(retain, nonatomic) NSMutableDictionary *dataProvidersBySectionID; // @synthesize dataProvidersBySectionID=_dataProvidersBySectionID;
- (void).cxx_destruct;
- (void)addParentSectionInfo:(id)arg1 displayName:(id)arg2 icon:(id)arg3 universalSectionID:(id)arg4;
- (void)addParentSectionInfo:(id)arg1 displayName:(id)arg2 icon:(id)arg3;
- (void)removeDataProviderWithSectionID:(id)arg1;
- (void)addDataProvider:(id)arg1 performMigration:(_Bool)arg2;
- (void)_addLocalDataProviderFactoryOfClass:(Class)arg1;
- (void)performBlockOnDataProviders:(CDUnknownBlockType)arg1;
- (void)removeDataProvider:(id)arg1;
- (void)_queue_removeDataProvider:(id)arg1;
- (id)dataProviderForUniversalSectionID:(id)arg1;
- (id)dataProviderForSectionID:(id)arg1;
- (void)_addDataProviderClass:(Class)arg1 performMigration:(_Bool)arg2;
- (void)_queue_addDataProvider:(id)arg1 performMigration:(_Bool)arg2;
- (void)_loadDataProviderPluginBundle:(id)arg1 performMigration:(_Bool)arg2;
- (void)loadAllDataProvidersAndPerformMigration:(_Bool)arg1;
@property(readonly, copy) NSString *debugDescription;
- (id)debugDescriptionWithChildren:(unsigned long long)arg1;
- (id)initWithDelegate:(id)arg1 dataProviderQueue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

