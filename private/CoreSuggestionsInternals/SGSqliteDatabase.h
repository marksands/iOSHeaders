//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCache, NSMutableDictionary, NSOperationQueue, NSString;
@protocol OS_dispatch_queue;

@interface SGSqliteDatabase : NSObject
{
    struct sqlite3 *_db;
    int _transactionDepth;
    _Bool _transactionRolledback;
    // Error parsing type: {atomic_flag="_Value"AB}, name: _isClosed
    NSString *_filename;
    NSCache *_queryCache;
    NSMutableDictionary *_sqlarrays;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSOperationQueue *_operationQueue;
    struct _opaque_pthread_t {
        long long _field1;
        struct __darwin_pthread_handler_rec *_field2;
        char _field3[8176];
    } *_threadInQueue;
    struct _opaque_pthread_mutex_t _threadInQueueLock;
    _Bool _currentExclusivity;
    _Bool _isInMemory;
}

+ (int)bindParam:(struct sqlite3_stmt *)arg1 name:(const char *)arg2 nscoding:(id)arg3;
+ (int)bindParam:(struct sqlite3_stmt *)arg1 name:(const char *)arg2 nsdata:(id)arg3;
+ (int)bindParam:(struct sqlite3_stmt *)arg1 name:(const char *)arg2 nsstring:(id)arg3;
+ (int)bindParam:(struct sqlite3_stmt *)arg1 name:(const char *)arg2 double:(double)arg3;
+ (int)bindParam:(struct sqlite3_stmt *)arg1 name:(const char *)arg2 int64:(long long)arg3;
+ (int)bindParam:(struct sqlite3_stmt *)arg1 name:(const char *)arg2 int:(int)arg3;
+ (int)bindParamToNull:(struct sqlite3_stmt *)arg1 name:(const char *)arg2;
+ (_Bool)shouldCacheSql:(const char *)arg1;
+ (void)truncateDatabaseAtPath:(id)arg1;
+ (id)randomlyNamedInMemoryPathWithBaseName:(id)arg1;
+ (id)inMemoryPath;
+ (_Bool)isInMemoryPath:(id)arg1;
+ (id)protectedDatabaseWithFilename:(id)arg1 error:(id *)arg2;
+ (id)protectedDatabaseWithFilename:(id)arg1 flags:(int)arg2 error:(id *)arg3;
+ (id)sqliteDatabaseInMemoryWithError:(id *)arg1;
+ (id)sqliteDatabaseWithFilename:(id)arg1 error:(id *)arg2;
+ (id)sqliteDatabaseWithFilename:(id)arg1 flags:(int)arg2 error:(id *)arg3;
+ (id)corruptionMarkerPathForPath:(id)arg1;
+ (id)corruptionMarkerFilename;
@property(readonly, nonatomic) _Bool isInMemory; // @synthesize isInMemory=_isInMemory;
@property(readonly, nonatomic) NSString *filename; // @synthesize filename=_filename;
- (void).cxx_destruct;
- (id)languageForFTSTable:(id)arg1;
- (unsigned long long)numberOfRowsInTable:(id)arg1;
- (_Bool)hasIndexNamed:(id)arg1;
- (_Bool)hasColumnOnTable:(id)arg1 named:(id)arg2;
- (id)tablesWithColumnNamed:(id)arg1;
- (_Bool)hasTableNamed:(id)arg1;
- (long long)maxIdForTable:(id)arg1;
- (_Bool)setUserVersion:(unsigned long long)arg1;
- (unsigned long long)userVersion;
- (_Bool)createSnapshot:(id)arg1;
- (id)description;
- (_Bool)_transactionWithExclusivity:(_Bool)arg1 transaction:(CDUnknownBlockType)arg2;
- (void)_txnEnd;
- (void)_txnRollback;
- (void)_txnBeginExclusive;
- (void)_txnBegin;
- (_Bool)frailReadTransaction:(CDUnknownBlockType)arg1;
- (void)readTransaction:(CDUnknownBlockType)arg1;
- (_Bool)frailWriteTransaction:(CDUnknownBlockType)arg1;
- (void)writeTransaction:(CDUnknownBlockType)arg1;
- (void)clearCaches;
- (id)selectColumns:(id)arg1 fromTable:(id)arg2 whereClause:(id)arg3 onPrep:(CDUnknownBlockType)arg4 onError:(CDUnknownBlockType)arg5;
- (void)insertOrReplaceIntoTable:(id)arg1 dictionary:(id)arg2 onError:(CDUnknownBlockType)arg3;
- (void)updateTable:(id)arg1 dictionary:(id)arg2 whereClause:(id)arg3 onError:(CDUnknownBlockType)arg4;
- (_Bool)prepAndRunQuery:(id)arg1 arrays:(id)arg2 onPrep:(CDUnknownBlockType)arg3 onRow:(CDUnknownBlockType)arg4 onError:(CDUnknownBlockType)arg5;
- (_Bool)prepAndRunNonDataQueries:(id)arg1 onError:(CDUnknownBlockType)arg2;
- (void)_prepAndRunQuery:(id)arg1 columns:(id)arg2 dictionary:(id)arg3 onError:(CDUnknownBlockType)arg4;
- (_Bool)prepAndRunQuery:(id)arg1 onPrep:(CDUnknownBlockType)arg2 onRow:(CDUnknownBlockType)arg3 onError:(CDUnknownBlockType)arg4;
- (void)prepQuery:(id)arg1 onPrep:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
- (_Bool)runQuery:(struct sqlite3_stmt *)arg1 onRow:(CDUnknownBlockType)arg2;
- (_Bool)runQuery:(struct sqlite3_stmt *)arg1 onRow:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) struct sqlite3 *handle;
- (long long)lastInsertRowId;
- (void)simulateOnDiskDatabase;
- (void)closePermanently;
- (void)dealloc;
- (void)withDbLockNonblocking:(CDUnknownBlockType)arg1;
- (id)initWithFilename:(id)arg1 flags:(int)arg2 error:(id *)arg3;
- (_Bool)_handle_sqlite_error_code:(int)arg1 error:(id)arg2 onError:(CDUnknownBlockType)arg3;
- (_Bool)_handle_SQLITE_AUTH_USER:(id)arg1 onError:(CDUnknownBlockType)arg2;
- (_Bool)_handle_SQLITE_WARNING_AUTOINDEX:(id)arg1 onError:(CDUnknownBlockType)arg2;
- (_Bool)_handle_SQLITE_NOTICE_RECOVER_ROLLBACK:(id)arg1 onError:(CDUnknownBlockType)arg2;
- (_Bool)_handle_SQLITE_NOTICE_RECOVER_WAL:(id)arg1 onError:(CDUnknownBlockType)arg2;
- (_Bool)_handle_SQLITE_CONSTRAINT_ROWID:(id)arg1 onError:(CDUnknownBlockType)arg2;
- (_Bool)_handle_SQLITE_CONSTRAINT_VTAB:(id)arg1 onError:(CDUnknownBlockType)arg2;
- (_Bool)_handle_SQLITE_CONSTRAINT_UNIQUE:(id)arg1 onError:(CDUnknownBlockType)arg2;
- (_Bool)_handle_SQLITE_CONSTRAINT_TRIGGER:(id)arg1 onError:(CDUnknownBlockType)arg2;
- (_Bool)_handle_SQLITE_CONSTRAINT_PRIMARYKEY:(id)arg1 onError:(CDUnknownBlockType)arg2;
- (_Bool)_handle_SQLITE_CONSTRAINT_NOTNULL:(id)arg1 onError:(CDUnknownBlockType)arg2;
- (_Bool)_handle_SQLITE_CONSTRAINT_FUNCTION:(id)arg1 onError:(CDUnknownBlockType)arg2;
- (_Bool)_handle_SQLITE_CONSTRAINT_FOREIGNKEY:(id)arg1 onError:(CDUnknownBlockType)arg2;
- (_Bool)_handle_SQLITE_CONSTRAINT_COMMITHOOK:(id)arg1 onError:(CDUnknownBlockType)arg2;
- (_Bool)_handle_SQLITE_CONSTRAINT_CHECK:(id)arg1 onError:(CDUnknownBlockType)arg2;
- (_Bool)_handle_SQLITE_ABORT_ROLLBACK:(id)arg1 onError:(CDUnknownBlockType)arg2;
- (_Bool)_handle_SQLITE_READONLY_DBMOVED:(id)arg1 onError:(CDUnknownBlockType)arg2;
- (_Bool)_handle_SQLITE_READONLY_ROLLBACK:(id)arg1 onError:(CDUnknownBlockType)arg2;
- (_Bool)_handle_SQLITE_READONLY_CANTLOCK:(id)arg1 onError:(CDUnknownBlockType)arg2;
- (_Bool)_handle_SQLITE_READONLY_RECOVERY:(id)arg1 onError:(CDUnknownBlockType)arg2;
- (_Bool)_handle_SQLITE_BUSY_SNAPSHOT:(id)arg1 onError:(CDUnknownBlockType)arg2;
- (_Bool)_handle_SQLITE_BUSY_RECOVERY:(id)arg1 onError:(CDUnknownBlockType)arg2;
- (_Bool)_handle_SQLITE_LOCKED_SHAREDCACHE:(id)arg1 onError:(CDUnknownBlockType)arg2;
- (_Bool)_handle_SQLITE_WARNING:(id)arg1 onError:(CDUnknownBlockType)arg2;
- (_Bool)_handle_SQLITE_NOTICE:(id)arg1 onError:(CDUnknownBlockType)arg2;
- (_Bool)_handle_SQLITE_RANGE:(id)arg1 onError:(CDUnknownBlockType)arg2;
- (_Bool)_handle_SQLITE_FORMAT:(id)arg1 onError:(CDUnknownBlockType)arg2;
- (_Bool)_handle_SQLITE_AUTH:(id)arg1 onError:(CDUnknownBlockType)arg2;
- (_Bool)_handle_SQLITE_NOLFS:(id)arg1 onError:(CDUnknownBlockType)arg2;
- (_Bool)_handle_SQLITE_MISUSE:(id)arg1 onError:(CDUnknownBlockType)arg2;
- (_Bool)_handle_SQLITE_MISMATCH:(id)arg1 onError:(CDUnknownBlockType)arg2;
- (_Bool)_handle_SQLITE_CONSTRAINT:(id)arg1 onError:(CDUnknownBlockType)arg2;
- (_Bool)_handle_SQLITE_TOOBIG:(id)arg1 onError:(CDUnknownBlockType)arg2;
- (_Bool)_handle_SQLITE_SCHEMA:(id)arg1 onError:(CDUnknownBlockType)arg2;
- (_Bool)_handle_SQLITE_EMPTY:(id)arg1 onError:(CDUnknownBlockType)arg2;
- (_Bool)_handle_SQLITE_PROTOCOL:(id)arg1 onError:(CDUnknownBlockType)arg2;
- (_Bool)_handle_SQLITE_NOTFOUND:(id)arg1 onError:(CDUnknownBlockType)arg2;
- (_Bool)_handle_SQLITE_INTERRUPT:(id)arg1 onError:(CDUnknownBlockType)arg2;
- (_Bool)_handle_SQLITE_READONLY:(id)arg1 onError:(CDUnknownBlockType)arg2;
- (_Bool)_handle_SQLITE_NOMEM:(id)arg1 onError:(CDUnknownBlockType)arg2;
- (_Bool)_handle_SQLITE_LOCKED:(id)arg1 onError:(CDUnknownBlockType)arg2;
- (_Bool)_handle_SQLITE_BUSY:(id)arg1 onError:(CDUnknownBlockType)arg2;
- (_Bool)_handle_SQLITE_ABORT:(id)arg1 onError:(CDUnknownBlockType)arg2;
- (_Bool)_handle_SQLITE_PERM:(id)arg1 onError:(CDUnknownBlockType)arg2;
- (_Bool)_handle_SQLITE_INTERNAL:(id)arg1 onError:(CDUnknownBlockType)arg2;
- (_Bool)_handle_SQLITE_ERROR:(id)arg1 onError:(CDUnknownBlockType)arg2;
- (_Bool)_handle_SQLITE_IOERR_AUTH:(id)arg1 onError:(CDUnknownBlockType)arg2;
- (_Bool)_handle_SQLITE_IOERR_VNODE:(id)arg1 onError:(CDUnknownBlockType)arg2;
- (_Bool)_handle_SQLITE_IOERR_CONVPATH:(id)arg1 onError:(CDUnknownBlockType)arg2;
- (_Bool)_handle_SQLITE_IOERR_GETTEMPPATH:(id)arg1 onError:(CDUnknownBlockType)arg2;
- (_Bool)_handle_SQLITE_IOERR_MMAP:(id)arg1 onError:(CDUnknownBlockType)arg2;
- (_Bool)_handle_SQLITE_IOERR_DELETE_NOENT:(id)arg1 onError:(CDUnknownBlockType)arg2;
- (_Bool)_handle_SQLITE_IOERR_SEEK:(id)arg1 onError:(CDUnknownBlockType)arg2;
- (_Bool)_handle_SQLITE_IOERR_SHMMAP:(id)arg1 onError:(CDUnknownBlockType)arg2;
- (_Bool)_handle_SQLITE_IOERR_SHMLOCK:(id)arg1 onError:(CDUnknownBlockType)arg2;
- (_Bool)_handle_SQLITE_IOERR_SHMOPEN:(id)arg1 onError:(CDUnknownBlockType)arg2;
- (_Bool)_handle_SQLITE_IOERR_DIR_CLOSE:(id)arg1 onError:(CDUnknownBlockType)arg2;
- (_Bool)_handle_SQLITE_IOERR_CLOSE:(id)arg1 onError:(CDUnknownBlockType)arg2;
- (_Bool)_handle_SQLITE_IOERR_LOCK:(id)arg1 onError:(CDUnknownBlockType)arg2;
- (_Bool)_handle_SQLITE_IOERR_CHECKRESERVEDLOCK:(id)arg1 onError:(CDUnknownBlockType)arg2;
- (_Bool)_handle_SQLITE_IOERR_ACCESS:(id)arg1 onError:(CDUnknownBlockType)arg2;
- (_Bool)_handle_SQLITE_IOERR_NOMEM:(id)arg1 onError:(CDUnknownBlockType)arg2;
- (_Bool)_handle_SQLITE_IOERR_BLOCKED:(id)arg1 onError:(CDUnknownBlockType)arg2;
- (_Bool)_handle_SQLITE_IOERR_DELETE:(id)arg1 onError:(CDUnknownBlockType)arg2;
- (_Bool)_handle_SQLITE_IOERR_RDLOCK:(id)arg1 onError:(CDUnknownBlockType)arg2;
- (_Bool)_handle_SQLITE_IOERR_UNLOCK:(id)arg1 onError:(CDUnknownBlockType)arg2;
- (_Bool)_handle_SQLITE_IOERR_FSTAT:(id)arg1 onError:(CDUnknownBlockType)arg2;
- (_Bool)_handle_SQLITE_IOERR_TRUNCATE:(id)arg1 onError:(CDUnknownBlockType)arg2;
- (_Bool)_handle_SQLITE_IOERR_DIR_FSYNC:(id)arg1 onError:(CDUnknownBlockType)arg2;
- (_Bool)_handle_SQLITE_IOERR_FSYNC:(id)arg1 onError:(CDUnknownBlockType)arg2;
- (_Bool)_handle_SQLITE_IOERR_WRITE:(id)arg1 onError:(CDUnknownBlockType)arg2;
- (_Bool)_handle_SQLITE_IOERR_READ:(id)arg1 onError:(CDUnknownBlockType)arg2;
- (_Bool)_handle_SQLITE_IOERR_SHMSIZE:(id)arg1 onError:(CDUnknownBlockType)arg2;
- (_Bool)_handle_SQLITE_IOERR:(id)arg1 onError:(CDUnknownBlockType)arg2;
- (_Bool)_handle_SQLITE_CANTOPEN_CONVPATH:(id)arg1 onError:(CDUnknownBlockType)arg2;
- (_Bool)_handle_SQLITE_CANTOPEN_FULLPATH:(id)arg1 onError:(CDUnknownBlockType)arg2;
- (_Bool)_handle_SQLITE_CANTOPEN_ISDIR:(id)arg1 onError:(CDUnknownBlockType)arg2;
- (_Bool)_handle_SQLITE_CANTOPEN_NOTEMPDIR:(id)arg1 onError:(CDUnknownBlockType)arg2;
- (_Bool)_handle_SQLITE_CANTOPEN:(id)arg1 onError:(CDUnknownBlockType)arg2;
- (_Bool)_handle_SQLITE_IOERR_SHORT_READ:(id)arg1 onError:(CDUnknownBlockType)arg2;
- (_Bool)_handle_SQLITE_NOTADB:(id)arg1 onError:(CDUnknownBlockType)arg2;
- (_Bool)_handle_SQLITE_CORRUPT_VTAB:(id)arg1 onError:(CDUnknownBlockType)arg2;
- (_Bool)_handle_SQLITE_CORRUPT:(id)arg1 onError:(CDUnknownBlockType)arg2;
- (_Bool)_handle_SQLITE_FULL:(id)arg1 onError:(CDUnknownBlockType)arg2;
- (_Bool)_handle_UNKNOWN_ERROR:(id)arg1 onError:(CDUnknownBlockType)arg2;
- (_Bool)_abortDueToSqliteError:(id)arg1 onError:(CDUnknownBlockType)arg2;
- (void)placeCorruptionMarker;
- (id)corruptionMarkerPath;
- (_Bool)handleError:(long long)arg1 sqliteError:(int)arg2 forQuery:(id)arg3 onError:(CDUnknownBlockType)arg4;
- (id)dbErrorWithCode:(unsigned long long)arg1 sqliteReturnValue:(int)arg2 lastErrno:(int)arg3 query:(id)arg4;
- (id)freeSpace;

@end

