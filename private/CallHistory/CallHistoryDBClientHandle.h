//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CallHistory/CHSynchronizedLoggable.h>

@class CallHistoryDBHandle, NSObject<OS_dispatch_queue>;

@interface CallHistoryDBClientHandle : CHSynchronizedLoggable
{
    CallHistoryDBHandle *dbStoreHandle;
    id _observerCallRecordRef;
    id _observerCallTimersRef;
    NSObject<OS_dispatch_queue> *_recentCallQueue;
}

+ (id)createForServer;
+ (id)createForClient;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *recentCallQueue; // @synthesize recentCallQueue=_recentCallQueue;
@property(readonly, nonatomic) CallHistoryDBHandle *dbStoreHandle; // @synthesize dbStoreHandle;
- (void).cxx_destruct;
- (_Bool)moveCallRecordsFromDatabaseAtURL:(id)arg1;
- (_Bool)saveDatabase:(id *)arg1;
- (void)dealloc;
- (_Bool)updateCallRecord_sync:(id)arg1 withChangeDict:(id)arg2;
- (id)updateAllCallRecords_sync:(id)arg1 error:(id *)arg2;
- (id)updateCallRecords_sync:(id)arg1 error:(id *)arg2 save:(_Bool)arg3;
- (_Bool)willHandleNotification_sync:(id)arg1;
- (void)handleCallTimersSave_sync:(id)arg1;
- (void)handleCallRecordSave_sync:(id)arg1;
- (id)manager;
- (_Bool)resetAllTimers;
- (void)resetTimers;
- (id)timerLifetime;
- (id)timerLastReset;
- (id)timerOutgoing;
- (id)timerIncoming;
- (id)updateAllCallRecords:(id)arg1 error:(id *)arg2;
- (id)updateAllCallRecords:(id)arg1;
- (id)updateCallRecords:(id)arg1 error:(id *)arg2 save:(_Bool)arg3;
- (id)updateCallRecords:(id)arg1 error:(id *)arg2;
- (id)updateCallRecords:(id)arg1;
- (_Bool)createCallRecords:(id)arg1 error:(id *)arg2;
- (_Bool)createCallRecords:(id)arg1;
- (_Bool)createCallRecord:(id)arg1 error:(id *)arg2 save:(_Bool)arg3;
- (_Bool)createCallRecord:(id)arg1 error:(id *)arg2;
- (_Bool)createCallRecord:(id)arg1;
- (id)deleteWithPredicate:(id)arg1;
- (_Bool)deleteObjectsWithUniqueIds:(id)arg1 error:(id *)arg2;
- (_Bool)deleteObjectsWithUniqueIds:(id)arg1;
- (_Bool)deleteObjectWithUniqueId:(id)arg1 error:(id *)arg2 save:(_Bool)arg3;
- (_Bool)deleteObjectWithUniqueId:(id)arg1 error:(id *)arg2;
- (_Bool)deleteObjectWithUniqueId:(id)arg1;
- (_Bool)deleteAll:(id *)arg1;
- (_Bool)deleteAll;
- (id)fetchObjectsWithUniqueIds:(id)arg1;
- (id)fetchObjectWithUniqueId:(id)arg1;
- (id)fetchAllObjectsWithUniqueId:(id)arg1;
- (id)fetchObjectsWithPredicate:(id)arg1;
- (id)fetchWithCallTypes:(unsigned int)arg1;
- (id)fetchAllNoLimit;
- (id)fetchAll;
- (void)unRegisterForNotifications;
- (void)registerForNotifications;
- (id)init:(_Bool)arg1;
- (id)convertToCHRecentCalls_sync:(id)arg1;
- (void)setClientObject_sync:(id)arg1 withStoreObject:(id)arg2;
- (void)setStoreObject_sync:(id)arg1 withClientObject:(id)arg2;
- (unsigned int)getCallStatus_sync:(id)arg1 isOriginated:(id)arg2 isAnswered:(id)arg3;
- (void)parseCallStatus_sync:(unsigned int)arg1 isAnswered:(_Bool *)arg2 isOriginated:(_Bool *)arg3;
- (id)init;

@end

