//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol TSTTableHiddenRowColumnProviding <NSObject>
- (_Bool)anyHiddenColumnsInCellRange:(struct TSUCellRect)arg1;
- (_Bool)anyHiddenRowsInCellRange:(struct TSUCellRect)arg1;
- (unsigned char)indexOfVisibleColumnAfterAndIncludingColumnAtIndex:(unsigned char)arg1;
- (unsigned char)indexOfVisibleColumnAfterColumnAtIndex:(unsigned char)arg1;
- (unsigned char)indexOfVisibleColumnBeforeAndIncludingColumnAtIndex:(unsigned char)arg1;
- (unsigned char)indexOfVisibleColumnBeforeColumnAtIndex:(unsigned char)arg1;
- (unsigned short)indexOfVisibleRowAfterAndIncludingRowAtIndex:(unsigned short)arg1;
- (unsigned short)indexOfVisibleRowAfterRowAtIndex:(unsigned short)arg1;
- (unsigned short)indexOfVisibleRowBeforeAndIncludingRowAtIndex:(unsigned short)arg1;
- (unsigned short)indexOfVisibleRowBeforeRowAtIndex:(unsigned short)arg1;
- (_Bool)hasHiddenColumnAtIndex:(unsigned char)arg1;
- (_Bool)hasHiddenRowAtIndex:(unsigned short)arg1;
@end

