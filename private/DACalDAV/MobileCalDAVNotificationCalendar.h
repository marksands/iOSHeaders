//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DACalDAV/MobileCalDAVCalendar.h>

@class CalDiagNotificationCollectionSync;

@interface MobileCalDAVNotificationCalendar : MobileCalDAVCalendar
{
    int _mostRecentNotificationChangeIndex;
    CalDiagNotificationCollectionSync *_notificationCollectionSyncDiagnostics;
}

@property(nonatomic) int mostRecentNotificationChangeIndex; // @synthesize mostRecentNotificationChangeIndex=_mostRecentNotificationChangeIndex;
@property(retain, nonatomic) CalDiagNotificationCollectionSync *notificationCollectionSyncDiagnostics; // @synthesize notificationCollectionSyncDiagnostics=_notificationCollectionSyncDiagnostics;
- (void).cxx_destruct;
- (_Bool)_handleResourceChanged:(id)arg1 withResource:(id)arg2 uid:(id)arg3;
- (id)_changedAttributesFromCalendarChanges:(id)arg1;
- (void *)_createResourceChange:(id)arg1 withType:(unsigned int)arg2 forNotification:(void *)arg3;
- (void *)_createResourceChange:(id)arg1 withType:(unsigned int)arg2 forNotification:(void *)arg3 withRecurrenceID:(id)arg4;
- (void *)_copyCalItemFromAnyCalendarWithExternalID:(id)arg1;
- (_Bool)_handleInviteReply:(id)arg1 withResource:(id)arg2 owningNotification:(id)arg3 uid:(id)arg4;
- (void)_setInviteReplyCalendarForReplyItem:(id)arg1 onNotification:(void *)arg2;
- (_Bool)_handleInviteNotification:(id)arg1 withResource:(id)arg2 uid:(id)arg3;
- (void)recordDiagnosticsForAccountSync:(id)arg1;
- (void)prepareMergeSyncActionsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)prepareSyncActionsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)clearEventChanges;
- (Class)appSpecificCalendarItemClass;
- (_Bool)_removeCalendarItemWithURL:(id)arg1;
- (_Bool)updateResourcesFromServer:(id)arg1;
- (_Bool)setScheduleTag:(id)arg1 forItemAtURL:(id)arg2;
- (_Bool)setURL:(id)arg1 forResourceWithUUID:(id)arg2;
- (_Bool)setEtag:(id)arg1 forItemAtURL:(id)arg2;
- (void *)_copyNotificationWithExternalID:(id)arg1;
- (void *)_copyNotificationWithUniqueIdentifier:(id)arg1 inCalendar:(void *)arg2 orStore:(void *)arg3;
- (id)etagsForItemURLs:(id)arg1;
- (id)allItemURLs;
- (_Bool)isNotification;
- (id)initWithCalendarURL:(id)arg1 calendar:(void *)arg2 principal:(id)arg3 title:(id)arg4;

@end

