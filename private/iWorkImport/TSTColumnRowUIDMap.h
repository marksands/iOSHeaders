//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

__attribute__((visibility("hidden")))
@interface TSTColumnRowUIDMap : TSPObject
{
    vector_4dc5f307 mSortedColumnUIDs;
    vector_4dc5f307 mSortedRowUIDs;
    vector_aab22ae2 mColumnUIDIndexForIndex;
    vector_8d85e9cb mRowUIDIndexForIndex;
    vector_aab22ae2 mColumnIndexForUIDIndex;
    vector_8d85e9cb mRowIndexForUIDIndex;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)assertCollaborationConvergence;
- (void)swapRowAtIndex:(unsigned short)arg1 withRowAtIndex:(unsigned short)arg2;
- (void)insertRowsAtIndexes:(id)arg1 withUIDs:(const vector_4dc5f307 *)arg2;
- (void)insertColumnsAtIndexes:(id)arg1 withUIDs:(const vector_4dc5f307 *)arg2;
- (void)_insertRowAtIndex:(unsigned short)arg1 withUID:(const UUIDData_5fbc143e *)arg2;
- (void)_insertColumnAtIndex:(unsigned char)arg1 withUID:(const UUIDData_5fbc143e *)arg2;
- (void)insertNewColumnsInIndexRange:(struct _NSRange)arg1;
- (void)insertNewRowsInIndexRange:(struct _NSRange)arg1;
- (void)removeColumnsInIndexSet:(id)arg1;
- (void)removeRowsInIndexSet:(id)arg1;
- (void)_removeColumnByIndex:(unsigned char)arg1;
- (void)_removeRowByIndex:(unsigned short)arg1;
- (void)moveColumnIndexRange:(struct _NSRange)arg1 toIndex:(unsigned char)arg2;
- (void)moveRowIndexRange:(struct _NSRange)arg1 toIndex:(unsigned short)arg2;
- (struct _NSRange)rowRangeForUIDs:(const vector_4dc5f307 *)arg1;
- (struct _NSRange)columnRangeForUIDs:(const vector_4dc5f307 *)arg1;
- (id)rowIndexesForUIDs:(const vector_4dc5f307 *)arg1;
- (id)mutableRowIndexesForUIDs:(const vector_4dc5f307 *)arg1;
- (id)columnIndexesForUIDs:(const vector_4dc5f307 *)arg1;
- (id)mutableColumnIndexesForUIDs:(const vector_4dc5f307 *)arg1;
- (id)mutableIndexesForUIDSet:(id)arg1 isRows:(_Bool)arg2;
- (id)mutableIndexesForUIDSet:(id)arg1 isRows:(_Bool)arg2 notFoundUIDs:(id)arg3;
- (id)UIDSetForIndexes:(id)arg1 isRows:(_Bool)arg2;
- (unsigned long long)rowUIDsCount;
- (unsigned long long)columnUIDsCount;
- (vector_4dc5f307)rowUIDs;
- (vector_4dc5f307)columnUIDs;
- (vector_4dc5f307)rowUIDsForRowIndexes:(id)arg1;
- (vector_4dc5f307)columnUIDsForColumnIndexes:(id)arg1;
- (unsigned short)rowIndexForUID:(const UUIDData_5fbc143e *)arg1;
- (unsigned char)columnIndexForUID:(const UUIDData_5fbc143e *)arg1;
- (UUIDData_5fbc143e)rowUIDForIndex:(unsigned short)arg1;
- (UUIDData_5fbc143e)columnUIDForIndex:(unsigned char)arg1;
- (id)copyWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 columnUIDs:(const vector_4dc5f307 *)arg2 rowUIDs:(const vector_4dc5f307 *)arg3;
- (id)initWithTableModel:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;

@end

