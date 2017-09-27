//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "EKUIInviteesViewConflictResolutionSection.h"

@class EKInviteeAlternativeTimeSearcher, NSArray, NSMutableSet, NSString, NSTimeZone;

@interface EKUIInviteesViewAlternativeTimeSection : NSObject <EKUIInviteesViewConflictResolutionSection>
{
    _Bool _hasCheckedRow;
    _Bool _availabilityRequestInProgress;
    _Bool _initialSearchInProgress;
    _Bool _searchExhausted;
    CDUnknownBlockType _showMoreAlternativeTimesTapped;
    NSTimeZone *_timeZone;
    NSString *_cachedTimeCellReuseIdentifier;
    NSString *_cachedConflictSearchCellReuseIdentifier;
    unsigned long long _reuseIdentifierVersion;
    CDUnknownBlockType _tableViewCellHook;
    CDUnknownBlockType _newTimeChosen;
    CDUnknownBlockType _showPreviewOfEventAtTime;
    NSMutableSet *_rowsShowingAllParticipants;
    NSArray *_alternativeTimes;
    long long _lastCheckedRow;
    unsigned long long _maximumNumberOfTimeSlotsToShow;
    EKInviteeAlternativeTimeSearcher *_availabilitySearcher;
}

@property(nonatomic) _Bool searchExhausted; // @synthesize searchExhausted=_searchExhausted;
@property(nonatomic) _Bool initialSearchInProgress; // @synthesize initialSearchInProgress=_initialSearchInProgress;
@property(retain, nonatomic) EKInviteeAlternativeTimeSearcher *availabilitySearcher; // @synthesize availabilitySearcher=_availabilitySearcher;
@property(nonatomic) unsigned long long maximumNumberOfTimeSlotsToShow; // @synthesize maximumNumberOfTimeSlotsToShow=_maximumNumberOfTimeSlotsToShow;
@property(nonatomic) _Bool availabilityRequestInProgress; // @synthesize availabilityRequestInProgress=_availabilityRequestInProgress;
@property(nonatomic) _Bool hasCheckedRow; // @synthesize hasCheckedRow=_hasCheckedRow;
@property(nonatomic) long long lastCheckedRow; // @synthesize lastCheckedRow=_lastCheckedRow;
@property(retain, nonatomic) NSArray *alternativeTimes; // @synthesize alternativeTimes=_alternativeTimes;
@property(retain, nonatomic) NSMutableSet *rowsShowingAllParticipants; // @synthesize rowsShowingAllParticipants=_rowsShowingAllParticipants;
@property(copy, nonatomic) CDUnknownBlockType showPreviewOfEventAtTime; // @synthesize showPreviewOfEventAtTime=_showPreviewOfEventAtTime;
@property(copy, nonatomic) CDUnknownBlockType newTimeChosen; // @synthesize newTimeChosen=_newTimeChosen;
@property(copy, nonatomic) CDUnknownBlockType tableViewCellHook; // @synthesize tableViewCellHook=_tableViewCellHook;
@property(nonatomic) unsigned long long reuseIdentifierVersion; // @synthesize reuseIdentifierVersion=_reuseIdentifierVersion;
@property(retain, nonatomic) NSString *cachedConflictSearchCellReuseIdentifier; // @synthesize cachedConflictSearchCellReuseIdentifier=_cachedConflictSearchCellReuseIdentifier;
@property(retain, nonatomic) NSString *cachedTimeCellReuseIdentifier; // @synthesize cachedTimeCellReuseIdentifier=_cachedTimeCellReuseIdentifier;
@property(retain, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property(copy, nonatomic) CDUnknownBlockType showMoreAlternativeTimesTapped; // @synthesize showMoreAlternativeTimesTapped=_showMoreAlternativeTimesTapped;
- (void).cxx_destruct;
- (id)_alternativeTimeAtIndex:(long long)arg1;
- (unsigned long long)_numberOfTimeSlotsShown;
- (_Bool)_isConflictSearchRow:(long long)arg1;
- (_Bool)_isValidRow:(long long)arg1;
- (void)searchForMoreTimes;
@property(readonly, nonatomic) _Bool searchingForMoreTimes;
@property(readonly, nonatomic) Class customTimeCellClass;
@property(readonly, nonatomic) NSArray *searcherTimeSlots;
@property(readonly, nonatomic) unsigned long long initialNumberOfTimeSlotsToShow;
- (void)refreshCellsAfterStateChange;
- (void)availabilitySearcherChangedState:(long long)arg1;
- (_Bool)injectNewRowsBeforeLastExistingRow;
- (void)clearCheckmark;
- (void)cancelOutstandingOperations;
- (double)estimatedHeightForRow:(id)arg1;
- (void)commitEditingStyle:(long long)arg1 forRow:(id)arg2;
- (id)titleForDeleteConfirmationButtonForRow:(id)arg1;
- (long long)editingStyleForRow:(id)arg1;
- (_Bool)canEditRow:(id)arg1;
- (void)selectRow:(id)arg1;
- (_Bool)canSelectRow:(id)arg1;
- (void)reloadAndRegisterReusableCellsWithTableView:(id)arg1;
- (id)cellForIndexPath:(id)arg1 inTableView:(id)arg2;
- (unsigned long long)numberOfRows;
- (_Bool)sectionShouldBeShown;
- (id)headerTitle;
- (id)debugTitle;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

