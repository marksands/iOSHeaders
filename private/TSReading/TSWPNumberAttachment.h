//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TSReading/TSWPTextualAttachment.h>

@class NSString;

@interface TSWPNumberAttachment : TSWPTextualAttachment
{
    int _numberFormat;
    NSString *_stringValue;
}

@property(copy, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
@property(nonatomic) int numberFormat; // @synthesize numberFormat=_numberFormat;
- (id)stringWithNumber:(unsigned long long)arg1;
- (id)stringEquivalentWithLayoutParent:(id)arg1;
- (id)stringEquivalent;
- (id)copyWithContext:(id)arg1;
- (void)dealloc;

@end

