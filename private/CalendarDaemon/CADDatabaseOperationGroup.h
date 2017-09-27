//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalendarDaemon/CADOperationGroup.h>

#import "CADDatabaseInterface.h"

__attribute__((visibility("hidden")))
@interface CADDatabaseOperationGroup : CADOperationGroup <CADDatabaseInterface>
{
}

+ (_Bool)requiresEventOrReminderAccess;
+ (_Bool)requiresReminderAccess;
+ (_Bool)requiresEventAccess;
- (void)CADDatabaseResetWithReply:(CDUnknownBlockType)arg1;
- (void)CADDatabaseRollbackWithReply:(CDUnknownBlockType)arg1;
- (void)CADDatabaseCommitWithReply:(CDUnknownBlockType)arg1;
- (void)CADDatabaseSaveWithReply:(CDUnknownBlockType)arg1;
- (void)CADDatabaseRebuildOccurrenceCacheWithReply:(CDUnknownBlockType)arg1;
- (void)CADDatabaseSetShowsDeclinedEvents:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;
- (void)CADDatabaseExportICSDataForCalendarItems:(id)arg1 preventLineFolding:(_Bool)arg2 reply:(CDUnknownBlockType)arg3;
- (void)CADDatabaseImportICSData:(id)arg1 intoCalendarWithID:(int)arg2 optionsMask:(unsigned long long)arg3 reply:(CDUnknownBlockType)arg4;
- (void)CADDatabaseLastConfirmedSplashScreenVersion:(CDUnknownBlockType)arg1;
- (_Bool)_CADDatabaseCanModifyCalendarDatabase;
- (void)CADDatabaseCanModifyCalendarDatabase:(CDUnknownBlockType)arg1;
- (void)CADDatabaseGetNextAssignableColorWithReply:(CDUnknownBlockType)arg1;
- (void)CADDatabaseGetChangedEntityIDsSinceTimestamp:(double)arg1 reply:(CDUnknownBlockType)arg2;
- (void)CADDatabaseGetChangesSinceSequenceNumber:(int)arg1 reply:(CDUnknownBlockType)arg2;
- (void)CADDatabaseGetSequenceNumber:(CDUnknownBlockType)arg1;
- (void)CADDatabaseClearSuperfluousChanges:(CDUnknownBlockType)arg1;
- (void)CADDatabaseMarkChangedObjectIDsConsumedUpToSequenceNumber:(long long)arg1 reply:(CDUnknownBlockType)arg2;
- (void)CADDatabaseFetchObjectChangesForEntityType:(int)arg1 insideObject:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)CADDatabaseFetchChangedObjectIDsSinceSequenceNumber:(long long)arg1 reply:(CDUnknownBlockType)arg2;
- (void)CADDatabaseRegisterForDetailedChangeTracking:(CDUnknownBlockType)arg1;
- (void)CADDatabaseGetUUID:(CDUnknownBlockType)arg1;
- (void)CADDatabaseSetInitializationOptions:(id)arg1 reply:(CDUnknownBlockType)arg2;

@end

