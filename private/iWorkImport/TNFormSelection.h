//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSKSelection.h>

__attribute__((visibility("hidden")))
@interface TNFormSelection : TSKSelection
{
    unsigned char _fieldIndex;
    unsigned short _recordIndex;
}

+ (id)selectionForRecordIndex:(unsigned short)arg1 fieldIndex:(unsigned char)arg2;
+ (id)selection;
+ (Class)archivedSelectionClass;
@property(readonly, nonatomic) unsigned char fieldIndex; // @synthesize fieldIndex=_fieldIndex;
@property(readonly, nonatomic) unsigned short recordIndex; // @synthesize recordIndex=_recordIndex;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRecordIndex:(unsigned short)arg1 fieldIndex:(unsigned char)arg2;

@end

