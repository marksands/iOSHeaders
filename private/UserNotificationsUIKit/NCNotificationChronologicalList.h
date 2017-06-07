//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UserNotificationsUIKit/BSDescriptionProviding-Protocol.h>
#import <UserNotificationsUIKit/NCNotificationSectionList-Protocol.h>

@class NCNotificationHiddenRequestsList, NSMutableArray, NSString;
@protocol NCNotificationSectionListDelegate;

@interface NCNotificationChronologicalList : NSObject <BSDescriptionProviding, NCNotificationSectionList>
{
    id <NCNotificationSectionListDelegate> _delegate;
    NSMutableArray *_sections;
    NCNotificationHiddenRequestsList *_hiddenRequestsList;
}

@property(retain, nonatomic) NCNotificationHiddenRequestsList *hiddenRequestsList; // @synthesize hiddenRequestsList=_hiddenRequestsList;
@property(retain, nonatomic) NSMutableArray *sections; // @synthesize sections=_sections;
- (void).cxx_destruct;
- (id)_titleForDate:(id)arg1;
- (id)_identifierForDate:(id)arg1;
- (id)_simpleDateFromDate:(id)arg1;
- (unsigned long long)_insertionIndexForSection:(id)arg1;
- (id)_sectionContainingNotificationRequest:(id)arg1;
- (id)_existingSectionForNotificationRequest:(id)arg1;
- (id)_existingSectionForDate:(id)arg1;
- (id)_newSectionForNotificationRequest:(id)arg1;
- (id)_newSectionForDate:(id)arg1;
- (id)_targetIndexPathForNotificationRequest:(id)arg1;
- (id)_completeIndexSet;
- (id)_allNotificationRequestsFromSectionIndex:(unsigned long long)arg1;
- (id)allNotificationRequests;
- (void)_rebuildSectionsList;
- (void)_reloadSectionHeaders;
- (void)_handleLocaleChange;
- (void)_handleTimeZoneChange;
- (void)_updateListForDateChange;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (_Bool)containsNotificationRequest:(id)arg1;
- (id)notificationRequestsAtIndexPaths:(id)arg1;
- (id)notificationRequestAtIndexPath:(id)arg1;
- (id)dateForSectionIdentifier:(id)arg1;
- (id)notificationRequestsForSectionIdentifier:(id)arg1;
- (long long)sectionIndexForListSectionIdentifier:(id)arg1;
- (id)requestsIndexPathsPassingTest:(CDUnknownBlockType)arg1;
- (void)clearAllSections;
- (void)clearSectionWithIdentifier:(id)arg1;
- (void)showRequestsForNotificationSectionIdentifier:(id)arg1 subSectionIdentifier:(id)arg2;
- (void)hideRequestsForNotificationSectionIdentifier:(id)arg1 subSectionIdentifier:(id)arg2;
- (id)removeNotificationRequest:(id)arg1;
- (id)modifyNotificationRequest:(id)arg1;
- (id)insertNotificationRequest:(id)arg1;
- (id)identifierForSectionIndex:(unsigned long long)arg1;
- (id)titleForSectionIndex:(unsigned long long)arg1;
- (unsigned long long)rowCountForSectionIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long sectionCount;
@property(nonatomic) __weak id <NCNotificationSectionListDelegate> delegate;
@property(readonly, copy) NSString *debugDescription;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

