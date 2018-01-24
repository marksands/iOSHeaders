//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WebBookmarksXPCConnection;

@interface WebBookmarksSettingsGateway : NSObject
{
    WebBookmarksXPCConnection *_connection;
}

- (void).cxx_destruct;
- (void)scheduleHSTSSuperCookieCleanup;
- (void)scheduleBookmarksDatabaseMigrationTask;
- (void)scheduleBookmarksDatabaseMaintenance;
- (void)clearAllSafariHistoryWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getSafariDataUsageByteCountWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)deleteSafariPersistentURLCacheStorageWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)deleteSafariWebsiteDataRecord:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)deleteAllSafariSecurityOriginsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getSafariWebDataUsageWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;

@end

