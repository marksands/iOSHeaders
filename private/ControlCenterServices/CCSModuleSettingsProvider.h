//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSHashTable;
@protocol OS_dispatch_source;

@interface CCSModuleSettingsProvider : NSObject
{
    NSObject<OS_dispatch_source> *_configurationChangedSource;
    NSHashTable *_observers;
    NSArray *_orderedFixedModuleIdentifiers;
    NSArray *_orderedUserEnabledModuleIdentifiers;
}

+ (id)_defaultUserEnabledModuleIdentifiers;
+ (id)_defaultFixedModuleIdentifiers;
+ (id)_configurationFileURL;
+ (id)_configurationDirectoryURL;
+ (id)_defaultEnabledModuleOrder;
+ (void)_writeOrderedIdentifiers:(id)arg1;
+ (id)_readOrderedIdentifiers;
+ (id)sharedProvider;
+ (void)initialize;
@property(readonly, copy, nonatomic) NSArray *orderedUserEnabledModuleIdentifiers; // @synthesize orderedUserEnabledModuleIdentifiers=_orderedUserEnabledModuleIdentifiers;
@property(readonly, copy, nonatomic) NSArray *orderedFixedModuleIdentifiers; // @synthesize orderedFixedModuleIdentifiers=_orderedFixedModuleIdentifiers;
- (void).cxx_destruct;
- (void)_runBlockOnListeners:(CDUnknownBlockType)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)_handleConfigurationFileUpdate;
- (void)_stopMonitoringConfigurationUpdates;
- (void)_startMonitoringConfigurationUpdates;
- (void)_saveSettings;
- (void)_loadSettings;
- (void)setAndSaveOrderedUserEnabledModuleIdentifiers:(id)arg1;
- (void)dealloc;
- (id)init;

@end

