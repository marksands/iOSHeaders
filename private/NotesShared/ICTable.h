//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NotesShared/CRTable.h>

@class CRTTCompatibleDocument, ICTableCellChangeNotifier, NSMutableDictionary;

@interface ICTable : CRTable
{
    ICTableCellChangeNotifier *_cellChangeNotifier;
    NSMutableDictionary *_columnTextStorages;
}

+ (void)registerWithCRCoder;
@property(retain, nonatomic) NSMutableDictionary *columnTextStorages; // @synthesize columnTextStorages=_columnTextStorages;
- (void).cxx_destruct;
- (id)subtableWithDocument:(id)arg1 forSelectionContainingColumnIndices:(id)arg2 rowIndices:(id)arg3;
- (_Bool)isEmptyAtColumnIdentifiers:(id)arg1 rowIdentifiers:(id)arg2;
- (_Bool)isEmptyAtColumnIndexes:(id)arg1 rowIndexes:(id)arg2;
- (_Bool)rowIsEmptyAtIndex:(unsigned long long)arg1;
- (_Bool)columnIsEmptyAtIndex:(unsigned long long)arg1;
- (id)joinedAttributedStringForColumns:(id)arg1 rows:(id)arg2;
- (id)copyIntoNewDocumentWithReplicaID:(id)arg1;
@property(readonly, nonatomic) CRTTCompatibleDocument *ttDocument;
- (id)mergeableStringForColumnID:(id)arg1 rowID:(id)arg2;
- (id)stringForColumnID:(id)arg1 rowID:(id)arg2;
- (id)stringForColumnIndex:(unsigned long long)arg1 rowIndex:(unsigned long long)arg2;
- (void)setAttributedString:(id)arg1 columnIndex:(unsigned long long)arg2 rowIndex:(unsigned long long)arg3;
@property(readonly, nonatomic) ICTableCellChangeNotifier *cellChangeNotifier; // @synthesize cellChangeNotifier=_cellChangeNotifier;

@end

