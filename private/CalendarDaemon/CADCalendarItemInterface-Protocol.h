//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class CADObjectID, NSPredicate, NSString;

@protocol CADCalendarItemInterface
- (void)CADDatabaseFetchEntitiesOfType:(int)arg1 withContactIdentifier:(NSString *)arg2 withReply:(void (^)(NSArray *, int))arg3;
- (void)CADDatabaseCountEntitiesOfType:(int)arg1 withContactIdentifier:(NSString *)arg2 withReply:(void (^)(int, int))arg3;
- (void)CADDatabaseRemoveContactIdentifier:(NSString *)arg1 forCalendarItem:(CADObjectID *)arg2 withReply:(void (^)(int))arg3;
- (void)CADDatabaseAddContactWithIdentifier:(NSString *)arg1 forCalendarItem:(CADObjectID *)arg2 withReply:(void (^)(int))arg3;
- (void)CADDatabaseGetContactIdentifierForCalendarItem:(CADObjectID *)arg1 reply:(void (^)(int, NSArray *))arg2;
- (void)CADDatabaseExportCalendarItemAsICS:(CADObjectID *)arg1 reply:(void (^)(int, NSData *))arg2;
- (void)CADDatabaseCancelFetchRequestWithIdentifier:(unsigned int)arg1;
- (void)CADDatabaseFetchCalendarItemsWithPredicate:(NSPredicate *)arg1 entityType:(int)arg2 fetchIdentifier:(int)arg3 reply:(void (^)(int, NSArray *))arg4;
- (void)CADDatabaseGetCalendarItemsWithUniqueIdentifier:(NSString *)arg1 inCalendar:(CADObjectID *)arg2 reply:(void (^)(int, NSArray *))arg3;
- (void)CADDatabaseGetCalendarItemWithUUID:(NSString *)arg1 reply:(void (^)(int, CADObjectID *))arg2;
@end

