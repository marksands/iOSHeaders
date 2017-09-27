//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface IMDDatabaseDowngradeHelper : NSObject
{
    _Bool _inTransaction;
    struct sqlite3 *_database;
    NSString *_path;
    long long _downgradesToVersion;
    NSArray *_tableNames;
    NSArray *_createIndexesSQL;
    NSArray *_createTablesSQL;
    NSArray *_createTriggersSQL;
}

@property(retain, nonatomic) NSArray *createTriggersSQL; // @synthesize createTriggersSQL=_createTriggersSQL;
@property(retain, nonatomic) NSArray *createTablesSQL; // @synthesize createTablesSQL=_createTablesSQL;
@property(retain, nonatomic) NSArray *createIndexesSQL; // @synthesize createIndexesSQL=_createIndexesSQL;
@property(retain, nonatomic) NSArray *tableNames; // @synthesize tableNames=_tableNames;
@property(readonly, nonatomic) long long downgradesToVersion; // @synthesize downgradesToVersion=_downgradesToVersion;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(readonly, nonatomic) struct sqlite3 *database; // @synthesize database=_database;
- (_Bool)close:(CDUnknownBlockType)arg1;
- (_Bool)open:(CDUnknownBlockType)arg1;
- (id)errorFromResult:(int)arg1 query:(id)arg2;
- (_Bool)importDataFromWhitetailDatabaseWithSqlOperation:(struct IMDSqlOperation *)arg1 resultBlock:(CDUnknownBlockType)arg2;
- (_Bool)cloneTableContents:(id)arg1 withOperation:(struct IMDSqlOperation *)arg2 resultBlock:(CDUnknownBlockType)arg3;
- (_Bool)writeDatabaseVersion:(long long)arg1 resultBlock:(CDUnknownBlockType)arg2;
- (_Bool)revertTransaction:(CDUnknownBlockType)arg1;
- (_Bool)commitTransaction:(CDUnknownBlockType)arg1;
- (_Bool)beginTransaction:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) _Bool isOpen;
- (_Bool)createTriggers:(CDUnknownBlockType)arg1;
- (_Bool)createIndexes:(CDUnknownBlockType)arg1;
- (_Bool)createTables:(CDUnknownBlockType)arg1;
- (_Bool)runArrayOfQueries:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
- (_Bool)runSimpleQuery:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithPath:(id)arg1 tableNames:(id)arg2 createTablesSQL:(id)arg3 createIndexesSQL:(id)arg4 createTriggersSQL:(id)arg5 downgradesToVersion:(long long)arg6;
- (_Bool)readRowCountForTable:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
- (_Bool)readDatabaseVersion:(CDUnknownBlockType)arg1;
- (_Bool)_readIntegerFromQuery:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;

@end

