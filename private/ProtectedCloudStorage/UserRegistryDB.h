//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;
@protocol OS_os_log;

@interface UserRegistryDB : NSObject
{
    struct sqlite3 *_sqliteHandle;
    struct sqlite3_stmt *_recordIDStatment;
    struct sqlite3_stmt *_replaceStatment;
    struct sqlite3_stmt *_deleteStatment;
    struct sqlite3_stmt *_insertWatch;
    struct sqlite3_stmt *_updateWatch;
    struct sqlite3_stmt *_insertMirrorKey;
    struct sqlite3_stmt *_updateMirrorKey;
    struct sqlite3_stmt *_resetCurrentMirrorKey;
    struct sqlite3_stmt *_insertWatchKey;
    struct sqlite3_stmt *_queryMissingKeys;
    struct sqlite3_stmt *_queryWatches;
    NSObject<OS_os_log> *_oslog;
    NSString *_dsid;
}

@property struct sqlite3_stmt *queryWatches; // @synthesize queryWatches=_queryWatches;
@property struct sqlite3_stmt *queryMissingKeys; // @synthesize queryMissingKeys=_queryMissingKeys;
@property struct sqlite3_stmt *insertWatchKey; // @synthesize insertWatchKey=_insertWatchKey;
@property struct sqlite3_stmt *resetCurrentMirrorKey; // @synthesize resetCurrentMirrorKey=_resetCurrentMirrorKey;
@property struct sqlite3_stmt *updateMirrorKey; // @synthesize updateMirrorKey=_updateMirrorKey;
@property struct sqlite3_stmt *insertMirrorKey; // @synthesize insertMirrorKey=_insertMirrorKey;
@property struct sqlite3_stmt *updateWatch; // @synthesize updateWatch=_updateWatch;
@property struct sqlite3_stmt *insertWatch; // @synthesize insertWatch=_insertWatch;
@property(retain) NSString *dsid; // @synthesize dsid=_dsid;
@property(retain) NSObject<OS_os_log> *oslog; // @synthesize oslog=_oslog;
@property struct sqlite3 *sqliteHandle; // @synthesize sqliteHandle=_sqliteHandle;
@property struct sqlite3_stmt *deleteStatment; // @synthesize deleteStatment=_deleteStatment;
@property struct sqlite3_stmt *replaceStatment; // @synthesize replaceStatment=_replaceStatment;
@property struct sqlite3_stmt *recordIDStatment; // @synthesize recordIDStatment=_recordIDStatment;
- (void).cxx_destruct;
- (id)missingKeysFromDevice:(id)arg1 type:(int)arg2;
- (id)syncDevices;
- (_Bool)syncedKeyToDevice:(id)arg1 type:(int)arg2 device:(id)arg3;
- (_Bool)updateMirrorKey:(id)arg1 service:(int)arg2 type:(int)arg3 current:(_Bool)arg4;
- (_Bool)setMirrorKey:(id)arg1 service:(int)arg2 type:(int)arg3 publicIdentity:(id)arg4;
- (_Bool)endTransaction:(_Bool)arg1;
- (_Bool)beginExclusiveTransaction;
- (_Bool)updateSyncDevice:(id)arg1 seen:(id)arg2 version:(id)arg3;
- (_Bool)deleteRecordAll;
- (_Bool)deleteRecordID:(id)arg1;
- (_Bool)replaceRecordID:(id)arg1 data:(id)arg2 publicKey:(id)arg3;
- (id)getRecordIDData:(id)arg1;
- (_Bool)replaceConfigRecord:(id)arg1 data:(id)arg2;
- (id)getConfigData:(id)arg1;
- (_Bool)replaceRecord:(id)arg1 type:(int)arg2 data:(id)arg3 publicKey:(id)arg4;
- (id)getData:(id)arg1 type:(int)arg2;
- (_Bool)setUserVersion:(int)arg1;
- (int)userVersion;
- (_Bool)setupDatabase;
- (_Bool)prepare:(const char *)arg1 statement:(struct sqlite3_stmt **)arg2;
- (void)dealloc;
- (id)initWithDSID:(id)arg1;

@end

