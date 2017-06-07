//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXDataTableDataSource-Protocol.h>
#import <Silex/SXTextSourceDataSource-Protocol.h>

@class NSArray, NSString, SXDataRecordValueTransformerFactory, SXDataTableDictionary, SXDataTableStyle;
@protocol SXDataTableComponentControllerDataSource;

@interface SXDataTableComponentController : NSObject <SXTextSourceDataSource, SXDataTableDataSource>
{
    SXDataTableDictionary *_cellObjects;
    SXDataTableDictionary *_textLayouters;
    id <SXDataTableComponentControllerDataSource> _dataSource;
    NSArray *_records;
    SXDataTableStyle *_tableStyle;
    SXDataRecordValueTransformerFactory *_recordValueTransformerFactory;
}

@property(retain, nonatomic) SXDataRecordValueTransformerFactory *recordValueTransformerFactory; // @synthesize recordValueTransformerFactory=_recordValueTransformerFactory;
@property(retain, nonatomic) SXDataTableStyle *tableStyle; // @synthesize tableStyle=_tableStyle;
@property(retain, nonatomic) NSArray *records; // @synthesize records=_records;
@property(readonly, nonatomic) id <SXDataTableComponentControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) SXDataTableDictionary *textLayouters; // @synthesize textLayouters=_textLayouters;
@property(readonly, nonatomic) SXDataTableDictionary *cellObjects; // @synthesize cellObjects=_cellObjects;
- (void).cxx_destruct;
- (double)convertConvertibleValue:(struct _SXConvertibleValue)arg1;
- (id)component;
- (id)documentController;
- (double)minimumWidthForStorage:(id)arg1 usingStringEnumeration:(unsigned long long)arg2;
- (id)dataDescriptorForIdentifier:(id)arg1;
- (id)dataDescriptorForIndexPath:(CDStruct_2fea82da)arg1;
- (id)recordForIndexPath:(CDStruct_2fea82da)arg1;
- (id)cellStyleForIndexPath:(CDStruct_2fea82da)arg1;
- (id)columnStyleForColumnIndex:(unsigned long long)arg1;
- (id)rowStyleForRowIndex:(unsigned long long)arg1;
- (id)contentSizeCategoryForTextSource:(id)arg1;
- (id)textStyleForTextSource:(id)arg1;
- (id)inlineTextStylesForTextSource:(id)arg1;
- (id)additionsForTextSource:(id)arg1;
- (id)textRulesForTextSource:(id)arg1;
- (id)textResizerForTextSource:(id)arg1;
- (id)documentControllerForTextSource:(id)arg1;
- (id)columnDividerAtIndex:(unsigned long long)arg1;
- (id)rowDividerAtIndex:(unsigned long long)arg1;
- (id)backgroundColorForCellAtIndexPath:(CDStruct_2fea82da)arg1;
- (unsigned long long)horizontalAlignmentForCellAtIndexPath:(CDStruct_2fea82da)arg1;
- (unsigned long long)verticalAlignmentForCellAtIndexPath:(CDStruct_2fea82da)arg1;
- (id)cellBorderForCellAtIndexPath:(CDStruct_2fea82da)arg1;
- (CDStruct_d2b197d1)paddingForCellAtIndexPath:(CDStruct_2fea82da)arg1;
- (double)heightForCellAtIndexPath:(CDStruct_2fea82da)arg1;
- (double)widthForCellAtIndexPath:(CDStruct_2fea82da)arg1;
- (double)heightForCellndexPath:(CDStruct_2fea82da)arg1 forWidth:(double)arg2;
- (double)minimumWidthForCellAtIndexPath:(CDStruct_2fea82da)arg1;
- (id)textLayouterForIndexPath:(CDStruct_2fea82da)arg1;
- (id)cellObjectForIndexPath:(CDStruct_2fea82da)arg1;
- (id)backgroundColorForColumnAtIndex:(unsigned long long)arg1;
- (id)backgroundColorForRowAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfColumns;
- (unsigned long long)numberOfRows;
- (id)tableBorder;
- (unsigned long long)dataOrientation;
- (_Bool)hasRowHeader;
- (_Bool)hasColumnHeader;
- (CDStruct_2fea82da)indexPathSubstractingHeaders:(CDStruct_2fea82da)arg1;
- (_Bool)shouldTreatIndexPathAsHeader:(CDStruct_2fea82da)arg1;
- (_Bool)indexPathIsHeader:(CDStruct_2fea82da)arg1;
- (void)loadRecords;
- (id)initWithDataSource:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

