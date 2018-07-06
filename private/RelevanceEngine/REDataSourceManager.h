//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <RelevanceEngine/RERelevanceEngineSubsystem.h>

#import "RELoggable.h"

@class NSArray, NSDictionary, NSMutableArray, NSSet, NSString, REConcurrentDictionary, REDataSourceLoader;

@interface REDataSourceManager : RERelevanceEngineSubsystem <RELoggable>
{
    NSMutableArray *_dataSourceControllers;
    unsigned long long _dataSourceState;
    _Bool _locationAllowed;
    NSSet *_disabledDataSources;
    NSDictionary *_identifierDataSourceMap;
    NSDictionary *_identifierApplicationIdentifierMap;
    NSDictionary *_identifierOperatingSystemVersionMap;
    NSSet *_elementGroupSupportingConfigurations;
    REConcurrentDictionary *_elementGroupMap;
    REDataSourceLoader *_loader;
    NSSet *_availableDataSourceIdentifiers;
    NSSet *_currentDataSourceIdentifiers;
    NSArray *_currentDataSources;
    id <REDataSourceManagerObserver> _delegate;
}

@property(readonly, nonatomic) __weak id <REDataSourceManagerObserver> delegate; // @synthesize delegate=_delegate;
@property(retain) NSArray *currentDataSources; // @synthesize currentDataSources=_currentDataSources;
@property(retain) NSSet *currentDataSourceIdentifiers; // @synthesize currentDataSourceIdentifiers=_currentDataSourceIdentifiers;
@property(retain) NSSet *availableDataSourceIdentifiers; // @synthesize availableDataSourceIdentifiers=_availableDataSourceIdentifiers;
@property(readonly, nonatomic) REDataSourceLoader *loader; // @synthesize loader=_loader;
- (void).cxx_destruct;
- (void)collectLoggableState:(CDUnknownBlockType)arg1;
- (void)_queue_availableDataSourcesDidChange;
- (void)_handleApplicationStateChange;
- (void)_queue_updateAvailableDataSourceIdentifiers;
- (_Bool)_isApplicationRemovedOrRestrictedForIdentifier:(id)arg1;
- (void)_queue_unloadDataSourceWithIdentifier:(id)arg1;
- (void)_queue_loadDataSourceWithIdentifier:(id)arg1;
- (CDStruct_2ec95fd7)minimumSupportedSystemVersionForDataSourceWithIdentifier:(id)arg1;
- (void)enumerateElementDataSourceControllers:(CDUnknownBlockType)arg1;
- (void)resume;
- (void)pause;
- (void)_updatePreferences;
- (void)dealloc;
- (id)initWithRelevanceEngine:(id)arg1 dataSourceLoader:(id)arg2 withDelegate:(id)arg3;
- (id)elementGroupForIdentifier:(id)arg1;
- (Class)classForDataSourceIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

