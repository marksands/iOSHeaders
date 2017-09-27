//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DAAccount.h"

@class CalDAVPrincipalSearchPropertySet, CalDAVRefreshContext, CalDAVServerVersion, CoreDAVDiscoveryTaskGroup, DACoreDAVLogger, DACoreDAVTaskManager, MobileCalDAVAccountRefreshActor, MobileCalDAVPrincipal, NSArray, NSDate, NSDictionary, NSMutableDictionary, NSMutableSet, NSSet, NSString, NSTimeZone, NSURL;

@interface MobileCalDAVAccount : DAAccount
{
    int _wasMigrated;
    NSMutableDictionary *_principals;
    NSMutableDictionary *_itemIDsToMoveActions;
    NSMutableSet *_mMovedItemURLStrings;
    NSMutableSet *_calendars;
    CalDAVServerVersion *_serverVersion;
    _Bool _needsAccountPropertyRefresh;
    _Bool _isRefreshing;
    _Bool _searchQueriesShouldCancel;
    _Bool _isSpinning;
    _Bool _subscribedCalendarsChanged;
    int _preferredEventDaysToSync;
    int _preferredToDoDaysToSync;
    NSMutableSet *_movedItemURLStrings;
    MobileCalDAVPrincipal *_mainPrincipal;
    CalDAVPrincipalSearchPropertySet *_searchPropertySet;
    CalDAVRefreshContext *_refreshContext;
    CoreDAVDiscoveryTaskGroup *_checkValidityTaskGroup;
    MobileCalDAVAccountRefreshActor *_actor;
    NSMutableSet *_searchTaskSet;
    DACoreDAVLogger *_coreDAVLogger;
}

@property(nonatomic) _Bool subscribedCalendarsChanged; // @synthesize subscribedCalendarsChanged=_subscribedCalendarsChanged;
@property(retain, nonatomic) DACoreDAVLogger *coreDAVLogger; // @synthesize coreDAVLogger=_coreDAVLogger;
@property(retain, nonatomic) NSMutableSet *searchTaskSet; // @synthesize searchTaskSet=_searchTaskSet;
@property(nonatomic) _Bool isSpinning; // @synthesize isSpinning=_isSpinning;
@property(retain, nonatomic) MobileCalDAVAccountRefreshActor *actor; // @synthesize actor=_actor;
@property(retain, nonatomic) CoreDAVDiscoveryTaskGroup *checkValidityTaskGroup; // @synthesize checkValidityTaskGroup=_checkValidityTaskGroup;
@property(nonatomic) _Bool searchQueriesShouldCancel; // @synthesize searchQueriesShouldCancel=_searchQueriesShouldCancel;
@property(retain, nonatomic) CalDAVRefreshContext *refreshContext; // @synthesize refreshContext=_refreshContext;
@property(nonatomic) _Bool isRefreshing; // @synthesize isRefreshing=_isRefreshing;
@property(nonatomic) _Bool needsAccountPropertyRefresh; // @synthesize needsAccountPropertyRefresh=_needsAccountPropertyRefresh;
@property(retain, nonatomic) CalDAVPrincipalSearchPropertySet *searchPropertySet; // @synthesize searchPropertySet=_searchPropertySet;
@property(retain, nonatomic) MobileCalDAVPrincipal *mainPrincipal; // @synthesize mainPrincipal=_mainPrincipal;
@property(nonatomic) int preferredToDoDaysToSync; // @synthesize preferredToDoDaysToSync=_preferredToDoDaysToSync;
@property(nonatomic) int preferredEventDaysToSync; // @synthesize preferredEventDaysToSync=_preferredEventDaysToSync;
@property(retain, nonatomic) NSMutableSet *mCalendars; // @synthesize mCalendars=_calendars;
@property(retain, nonatomic) NSMutableSet *mMovedItemURLStrings; // @synthesize mMovedItemURLStrings=_movedItemURLStrings;
@property(retain, nonatomic) NSMutableDictionary *mItemIDsToMoveActions; // @synthesize mItemIDsToMoveActions=_itemIDsToMoveActions;
@property(retain, nonatomic) NSMutableDictionary *mPrincipals; // @synthesize mPrincipals=_principals;
- (void).cxx_destruct;
- (void)coreDAVTransmittedDataFinished;
- (void)coreDAVLogTransmittedDataPartial:(id)arg1;
- (_Bool)shouldLogTransmittedData;
- (void)coreDAVLogDiagnosticMessage:(id)arg1 atLevel:(long long)arg2;
- (long long)coreDAVOutputLevel;
- (long long)coreDAVLogLevel;
- (void)removeFromCoreDAVLoggingDelegates;
- (void)addToCoreDAVLoggingDelegates;
- (id)onBehalfOfBundleIdentifier;
- (id)localizedInvalidPasswordMessage;
- (id)localizedIdenticalAccountFailureMessage;
- (_Bool)accountHasSignificantPropertyChangesFromOldAccountInfo:(id)arg1;
- (_Bool)isEqualToAccount:(id)arg1;
- (_Bool)isCalDAVAccount;
- (void)reattainPowerAssertions;
- (void)dropPowerAssertions;
- (void)releasePowerAssertion;
- (void)retainPowerAssertion;
- (id)_powerAssertionGroupIdentifier;
- (id)_powerAssertionContext;
- (void)discoverInitialPropertiesWithConsumer:(id)arg1;
@property(readonly, nonatomic) NSArray *wellKnownPaths;
- (void)discoveryTask:(id)arg1 gotAccountInfo:(id)arg2 error:(id)arg3;
- (_Bool)_reallySearchQueriesRunning;
- (void)_reallyCancelAllSearchQueries;
- (void)_reallyCancelSearchQuery:(id)arg1;
- (void)_reallyPerformSearchQuery:(id)arg1;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;
- (void)refreshWithContext:(id)arg1;
- (void)_collectMoveActions;
- (id)_collectActionsFromMoveDictionary:(struct __CFDictionary *)arg1 forDataclass:(id)arg2 outShouldSave:(_Bool *)arg3;
- (void)refreshActor:(id)arg1 didCompleteWithError:(id)arg2;
- (_Bool)saveModifiedPropertiesOnBackingAccount;
- (_Bool)_saveModifiedPrincipalsOnBackingAccount;
- (_Bool)_saveModifiedSubscribedCalendarsOnBackingAccount;
- (void)_clearOrphanedChangesWithContext:(id)arg1;
- (void)_clearOrphanedChangesWithChangesCall:(CDUnknownFunctionPointerType)arg1 entityType:(int)arg2 withContext:(id)arg3;
- (void)_clearOrphanedCalendarItemChangesOfType:(int)arg1 withContext:(id)arg2 goodCalendarIds:(id)arg3;
- (void)cancelRefreshWithCompletion:(CDUnknownBlockType)arg1;
- (void)_syncEndedWithError:(id)arg1;
- (void)_syncStarted;
- (void)_setSpinning:(_Bool)arg1;
- (id)spinnerIdentifiers;
- (void)_updateCalendarStore:(_Bool)arg1;
- (_Bool)_updateCalendarStoreNoDBOpen:(_Bool)arg1;
- (_Bool)_updateCalendarStoreProperties:(void *)arg1;
@property(copy, nonatomic) NSString *calendarHomeSyncToken;
- (void *)copyCalStore;
- (id)_calendarConstraintsPath;
- (id)_calendarConstraintsResource;
@property(readonly, nonatomic) _Bool shouldUseCalendarHomeSyncReport;
@property(readonly, nonatomic) DACoreDAVTaskManager *taskManager;
@property(readonly, nonatomic) _Bool supportsEvents;
@property(readonly, nonatomic) _Bool supportsReminders;
@property(readonly, nonatomic) _Bool shouldFilterSyncTimeRangeForInbox;
@property(readonly, nonatomic) _Bool shouldFilterTodoSyncTimeRange;
@property(readonly, nonatomic) _Bool shouldFilterEventSyncTimeRange;
@property(readonly, nonatomic) NSDate *ocurrenceCacheEndDate;
@property(readonly, nonatomic) NSDate *ocurrenceCacheStartDate;
@property(readonly, nonatomic) NSTimeZone *viewedTimeZone;
@property(retain, nonatomic) CalDAVServerVersion *serverVersion; // @synthesize serverVersion=_serverVersion;
- (void)removePrincipal:(id)arg1;
- (void)addPrincipal:(id)arg1;
- (void)reloadCalendars;
@property(readonly, nonatomic) NSSet *calendars;
- (void)removeCalendarWithURL:(id)arg1;
- (void)removeCalendar:(id)arg1;
- (void)addCalendar:(id)arg1;
@property(nonatomic) _Bool wasMigrated;
@property(nonatomic) _Bool isWritable;
@property(retain, nonatomic) NSURL *collectionSetURL;
- (void)setAccountDescription:(id)arg1;
- (void)noteHomeSetOnDifferentHost:(id)arg1;
@property(readonly, nonatomic) NSURL *serverBaseURL;
- (void)setPrincipalURL:(id)arg1;
- (void)setPrincipalPath:(id)arg1;
- (id)principalPath;
@property(retain, nonatomic) NSString *overriddenScheme;
@property(nonatomic) int overriddenPort;
@property(retain, nonatomic) NSString *overriddenServer;
- (id)emailAddresses;
@property(readonly, nonatomic) NSDictionary *itemIDsToMoveActions;
@property(readonly, nonatomic) NSSet *movedItemURLStrings;
@property(readonly, nonatomic) NSDictionary *principals;
@property(retain, nonatomic) NSDictionary *subscribedCalendars;
- (_Bool)upgradeAccount;
- (void)dealloc;
- (id)init;
- (id)initWithBackingAccountInfo:(id)arg1;
- (void)ingestBackingAccountInfoProperties;

@end

