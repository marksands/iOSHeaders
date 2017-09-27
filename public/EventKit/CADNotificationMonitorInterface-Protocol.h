//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class CADObjectID;

@protocol CADNotificationMonitorInterface
- (void)CADEventSetInvitationStatus:(int)arg1 forEvent:(CADObjectID *)arg2 error:(void (^)(int))arg3;
- (void)CADInviteReplyNotification:(CADObjectID *)arg1 setAlertedWithError:(void (^)(int))arg2;
- (void)CADResourceChange:(CADObjectID *)arg1 setAlertedWithError:(void (^)(int))arg2;
- (void)CADCalendar:(CADObjectID *)arg1 setAlertedWithError:(void (^)(int))arg2;
- (void)CADEvent:(CADObjectID *)arg1 setAlertedWithError:(void (^)(int))arg2;
- (void)CADDatabaseGetInboxRepliedSectionItems:(void (^)(int, NSArray *, NSArray *))arg1;
- (void)CADDatabaseGetReminderNotificationItems:(void (^)(int, NSArray *, NSArray *, NSArray *))arg1;
- (void)CADDatabaseGetEventNotificationItems:(void (^)(int, NSArray *, NSArray *, NSArray *))arg1;
- (void)CADDatabaseGetInviteReplyNotifications:(void (^)(int, NSArray *))arg1;
- (void)CADDatabaseGetResourceChanges:(void (^)(int, NSArray *))arg1;
- (void)CADCalendarSetClearedFromNotificationCenter:(CADObjectID *)arg1 error:(void (^)(int))arg2;
- (void)CADDatabaseGetSharedCalendarInvitationsWithReply:(void (^)(int, NSArray *))arg1;
@end

