//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableArray, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface GEOLogMessageCacheManager : NSObject
{
    NSString *_logMessageCacheFilePath;
    struct sqlite3 *_logMessageCacheDatabase;
    NSString *_adaptorId;
    _Bool _fromLogFrameworkAdaptor;
    long long _logMessageCacheIterator;
    long long _logMessageCacheEndIterator;
    NSMutableArray *_retrivedLogMessageCacheIds;
    NSObject<OS_dispatch_queue> *_databaseQueue;
    void *_databaseQueueIdentityKey;
    void *_databaseQueueIdentityValue;
    long long _maxNumberOfLogMessagesAllowedInCache;
    long long _logMessagesOverflowPurgeSize;
    unsigned long long _encryptionType;
    NSObject<OS_dispatch_source> *_logMessageCacheTransactionTimer;
    _Bool _logMessageCacheTransactionPending;
    long long _pendingLogMessageCount;
    _Bool _realtimeAdaptor;
    long long _cacheCountFlushThreshold;
    NSDate *_oldestLogMessageInCache;
}

@property(nonatomic) unsigned long long encryptionType; // @synthesize encryptionType=_encryptionType;
- (void).cxx_destruct;
- (void)_stopLogMessageCacheTransactionTimer;
- (void)_startLogMessageCacheTransactionTimer;
- (void)_commitLogMessageCacheTransaction;
- (void)_beginLogMessageCacheTransaction;
- (void)_setLogMessageCacheDBJournalMode;
- (void)_updateLogMessageCacheDBUserVersion;
- (long long)_queryLogMessageCacheDBUserVersion;
- (void)_cleanupLogMessageCacheDatabase;
- (long long)_getNumberOfLogMessagesInCache;
- (long long)_retrieveEndLogMessageCacheIterator;
- (id)_groupIDOfNextPendingLogMessage;
- (id)_retrieveBatchOfLogMessagesLimitCount:(long long)arg1 limitSize:(long long)arg2;
- (int)_deleteFixedNumberOfOlderLogMessages:(long long)arg1;
- (int)_deleteAllExpiredLogMessages:(double)arg1;
- (void)_deleteExpiredLogMessageCacheDBFile:(double)arg1;
- (void)_addRetryCountColumnToTable;
- (void)_migrateDatabaseIfNeeded;
- (void)_createTables;
- (_Bool)_executeSQL:(id)arg1;
- (void)_openCreateLogMessageCacheDBFile;
- (void)_openLogMessageCacheDBFile;
- (void)_cleanupPartiallyCreatedLogMessageCacheDBFile;
- (_Bool)_logMessageCacheFileExists;
- (int)_sqlite3_open_protection_flag;
- (_Bool)_encryptionEnabled;
- (_Bool)_usingInMemoryLogMessageCacheFile;
- (void)commitLogMessageCacheTransaction;
- (void)beginLogMessageCacheTransaction;
- (_Bool)shouldFlushLogMessageCache;
- (_Bool)isLogMessageCacheEmpty;
- (void)updateCurrentlyRetrievedLogMessagesRetryCount;
- (void)purgeCurrentlyRetrievedLogMessagesFromCache;
- (void)purgeExpiredLogMessagesFromCache:(double)arg1;
- (void)closeLogMessageCache;
- (id)retrieveNextBatchOfLogMessagesWithLimitCount:(long long)arg1 limitSize:(long long)arg2;
- (id)retrieveFirstBatchOfLogMessagesWithLimitCount:(long long)arg1 limitSize:(long long)arg2;
- (void)resetLogMessageCacheIterator;
- (void)insertLogMessageIntoCache:(id)arg1;
- (void)openLogMessageCache;
- (void)dealloc;
- (id)initWithLogMessageCacheFilePath:(id)arg1 maxNumberOfLogMessagesAllowedInCache:(long long)arg2 logMessagesOverflowPurgeSize:(long long)arg3 encryptionType:(unsigned long long)arg4 realtimeAdaptor:(_Bool)arg5 cacheCountFlushThreshold:(long long)arg6 adaptorId:(id)arg7 fromLogFrameworkAdaptor:(_Bool)arg8;
@property(nonatomic) NSDate *oldestLogMessageInCache;

@end

