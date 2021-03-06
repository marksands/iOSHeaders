//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UserNotificationsUIKit/NCNotificationSectionList.h>

@class NSMutableArray;

@interface NCNotificationChronologicalList : NCNotificationSectionList
{
    NSMutableArray *_sections;
}

@property(retain, nonatomic) NSMutableArray *sections; // @synthesize sections=_sections;
- (void).cxx_destruct;
- (id)_titleForDate:(id)arg1;
- (id)_identifierForDate:(id)arg1;
- (id)_simpleDateFromDate:(id)arg1;
- (id)_existingSectionContainingNotificationRequestWithSameThreadAsNotificationRequest:(id)arg1;
- (id)_existingSectionForDate:(id)arg1;
- (id)_newSectionForDate:(id)arg1;
- (id)_allNotificationRequestsFromSectionIndex:(unsigned long long)arg1;
- (void)_rebuildSectionsList;
- (void)_reloadSectionHeaders;
- (void)_handleLocaleChange;
- (void)_handleTimeZoneChange;
- (void)_updateListForDateChange;
- (void)_removeSection:(id)arg1;
- (void)_insertSection:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)_targetIndexPathForNotificationRequest:(id)arg1;
- (unsigned long long)_insertionIndexForSection:(id)arg1;
- (unsigned long long)_currentIndexForSection:(id)arg1;
- (id)_newSectionForNotificationRequest:(id)arg1;
- (id)_existingSectionForNotificationRequest:(id)arg1;
- (id)_sectionContainingNotificationRequest:(id)arg1;
- (id)_allNotificationRequests;
- (id)_allSections;
- (id)notificationRequestAtIndexPath:(id)arg1;
- (id)notificationRequestsForSectionIdentifier:(id)arg1;
- (long long)sectionIndexForListSectionIdentifier:(id)arg1;
- (void)clearAllSections;
- (void)clearSectionWithIdentifier:(id)arg1;
- (id)identifierForSectionIndex:(unsigned long long)arg1;
- (id)titleForSectionIndex:(unsigned long long)arg1;
- (unsigned long long)rowCountForSectionIndex:(unsigned long long)arg1;
- (unsigned long long)sectionCount;
- (id)init;

@end

