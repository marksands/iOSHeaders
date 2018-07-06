//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSSet;

@interface HDSQLiteStatementCache : NSObject
{
    struct sqlite3 *_db;
    struct __CFDictionary *_statementCache;
    struct __CFDictionary *_transactionStatementCache;
    struct __CFSet *_activeStatements;
    struct __CFSet *_uncachedActiveStatements;
    long long _cacheScope;
    _Bool _inTransaction;
}

- (void)_assertNoActiveStatements;
- (void)_clearCachedTransactionStatements;
- (void)_setStatement:(struct sqlite3_stmt *)arg1 forSQL:(id)arg2;
- (struct sqlite3_stmt *)_cachedStatementForSQL:(id)arg1;
- (void)clearCachedStatements;
- (void)checkInStatement:(struct sqlite3_stmt *)arg1;
- (struct sqlite3_stmt *)checkOutStatementForSQL:(id)arg1 shouldCache:(_Bool)arg2 error:(id *)arg3;
- (void)endTransaction;
- (void)beginTransactionWithCacheScope:(long long)arg1;
@property(readonly, copy, nonatomic) NSSet *allStatmentSQLStrings;
@property(readonly, nonatomic) unsigned long long count;
- (void)dealloc;
- (id)initWithDatabase:(struct sqlite3 *)arg1;
- (id)init;

@end

