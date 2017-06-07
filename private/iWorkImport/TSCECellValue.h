//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>

@class TSULocale;

__attribute__((visibility("hidden")))
@interface TSCECellValue : NSObject <NSCopying>
{
    int _valueType;
    TSULocale *_locale;
}

+ (id)cellValueWithArchive:(const struct CellValueArchive *)arg1 locale:(id)arg2;
+ (id)newCellValueFromTSCEValue:(const struct TSCEValue *)arg1 withLocale:(id)arg2;
@property(retain, nonatomic) TSULocale *locale; // @synthesize locale=_locale;
@property(nonatomic) int valueType; // @synthesize valueType=_valueType;
- (void).cxx_destruct;
- (void)encodeCellValueToArchive:(struct CellValueArchive *)arg1;
- (long long)compare:(id)arg1;
- (long long)compareToCellValue:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqualToCellValue:(id)arg1;
- (id)format;
- (id)displayString;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct TSCEValue)tsceValue;
- (id)initWithLocale:(id)arg1;

@end

