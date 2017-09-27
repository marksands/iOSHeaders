//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSCECellValue.h>

__attribute__((visibility("hidden")))
@interface TSCENumberCellValue : TSCECellValue
{
    struct TSCENumberValue *_numberValue;
}

- (void)encodeToArchive:(struct NumberCellValueArchive *)arg1;
- (id)initWithArchive:(const struct NumberCellValueArchive *)arg1 locale:(id)arg2;
- (long long)compareToCellValue:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqualToCellValue:(id)arg1;
- (id)displayString;
- (id)format;
- (struct TSCENumberValue *)numberValue;
- (struct TSCEValue)tsceValue;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithNumberValue:(struct TSCENumberValue *)arg1 locale:(id)arg2;
- (id)initWithDouble:(double)arg1 locale:(id)arg2;

@end

