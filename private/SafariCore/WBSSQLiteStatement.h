//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, WBSSQLiteDatabase;

@interface WBSSQLiteStatement : NSObject
{
    WBSSQLiteDatabase *_database;
    struct sqlite3_stmt *_handle;
    NSDictionary *_columnNamesToIndexes;
    NSArray *_columnNames;
}

@property(readonly, nonatomic) WBSSQLiteDatabase *database; // @synthesize database=_database;
@property(readonly, nonatomic) struct sqlite3_stmt *handle; // @synthesize handle=_handle;
- (void).cxx_destruct;
- (_Bool)_isValid;
@property(readonly, nonatomic) NSArray *columnNames;
@property(readonly, nonatomic) NSDictionary *columnNamesToIndexes;
- (void)bindNullAtParameterIndex:(unsigned long long)arg1;
- (void)bindData:(id)arg1 atParameterIndex:(unsigned long long)arg2;
- (void)bindDouble:(double)arg1 atParameterIndex:(unsigned long long)arg2;
- (void)bindInt64:(long long)arg1 atParameterIndex:(unsigned long long)arg2;
- (void)bindInt:(int)arg1 atParameterIndex:(unsigned long long)arg2;
- (void)bindString:(id)arg1 atParameterIndex:(unsigned long long)arg2;
- (void)invalidate;
- (void)reset;
- (_Bool)fetchWithEnumerationBlock:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (id)fetch;
- (_Bool)execute:(id *)arg1;
- (int)execute;
- (void)dealloc;
- (id)initWithDatabase:(id)arg1 query:(id)arg2;
- (id)initWithDatabase:(id)arg1 query:(id)arg2 error:(id *)arg3;
- (id)init;

@end

