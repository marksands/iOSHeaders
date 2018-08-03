//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <RelevanceEngine/RERelevanceProviderManager.h>

@class NSDate, NSMutableDictionary;

@interface RERecentActionRelevanceProviderManager : RERelevanceProviderManager
{
    NSMutableDictionary *_relevanceProviderMap;
    NSDate *_lastDateUpdate;
}

+ (_Bool)_supportsHistoricProviders;
+ (id)_features;
+ (Class)_relevanceProviderClass;
- (void).cxx_destruct;
- (void)collectLoggableState:(CDUnknownBlockType)arg1;
- (void)_prepareForUpdate;
- (void)_handleSignificantTimeChange;
- (void)_closeDataStoresAndObserveChanges;
- (void)_openDataStoresAndObserveChanges;
- (void)_scheduleUpdatesForActionProvider:(id)arg1;
- (void)_removeProvider:(id)arg1;
- (void)_addedProvider:(id)arg1;
- (void)_handleActionPerformedNotifiction:(id)arg1;
- (float)_relevanceForHistoricProvider:(id)arg1;
- (_Bool)_isHistoricProvider:(id)arg1;
- (id)_valueForProvider:(id)arg1 feature:(id)arg2;
- (void)dealloc;
- (id)initWithQueue:(id)arg1;

@end

