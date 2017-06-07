//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/EDReference.h>

__attribute__((visibility("hidden")))
@interface EDSheetReference : EDReference
{
    unsigned long long mSheetIndex;
}

+ (id)referenceWithSheetIndex:(unsigned long long)arg1 firstRow:(int)arg2 lastRow:(int)arg3 firstColumn:(int)arg4 lastColumn:(int)arg5;
- (id)description;
- (void)unionWithReference:(id)arg1;
- (_Bool)fullyAdjacentToReference:(id)arg1;
- (unsigned long long)sheetIndex;
- (_Bool)isSheedIndexValid;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToTableReference:(id)arg1;
- (id)initWithSheetIndex:(unsigned long long)arg1 firstRow:(int)arg2 lastRow:(int)arg3 firstColumn:(int)arg4 lastColumn:(int)arg5;
- (id)init;

@end
