//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Silex/NSObject-Protocol.h>

@class SXDataTableBorder, SXDataTableBorderSides, UIColor;

@protocol SXDataTableDataSource <NSObject>
- (SXDataTableBorder *)columnDividerAtIndex:(unsigned long long)arg1;
- (SXDataTableBorder *)rowDividerAtIndex:(unsigned long long)arg1;
- (unsigned long long)horizontalAlignmentForCellAtIndexPath:(CDStruct_2fea82da)arg1;
- (unsigned long long)verticalAlignmentForCellAtIndexPath:(CDStruct_2fea82da)arg1;
- (CDStruct_d2b197d1)paddingForCellAtIndexPath:(CDStruct_2fea82da)arg1;
- (SXDataTableBorderSides *)cellBorderForCellAtIndexPath:(CDStruct_2fea82da)arg1;
- (double)heightForCellndexPath:(CDStruct_2fea82da)arg1 forWidth:(double)arg2;
- (double)minimumWidthForCellAtIndexPath:(CDStruct_2fea82da)arg1;
- (double)heightForCellAtIndexPath:(CDStruct_2fea82da)arg1;
- (double)widthForCellAtIndexPath:(CDStruct_2fea82da)arg1;
- (UIColor *)backgroundColorForCellAtIndexPath:(CDStruct_2fea82da)arg1;
- (UIColor *)backgroundColorForColumnAtIndex:(unsigned long long)arg1;
- (UIColor *)backgroundColorForRowAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfColumns;
- (unsigned long long)numberOfRows;
- (SXDataTableBorderSides *)tableBorder;
- (unsigned long long)dataOrientation;
@end

