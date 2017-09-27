//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSAttributedString;

@interface MKMultiPartAttributedString : NSObject <NSCopying>
{
    NSAttributedString *_attributedString;
    NSArray *_components;
    NSArray *_separators;
}

+ (id)multiPartAttributedStringWithString:(id)arg1;
+ (id)multiPartAttributedStringWithComponents:(id)arg1 repeatedSeparator:(id)arg2;
+ (id)_mapkit_multiPartAttributedStringForServerFormattedString:(id)arg1 defaultAttributes:(id)arg2;
@property(readonly, copy, nonatomic) NSArray *separators; // @synthesize separators=_separators;
@property(readonly, copy, nonatomic) NSArray *components; // @synthesize components=_components;
- (void).cxx_destruct;
- (id)debugDescription;
@property(readonly, nonatomic) NSAttributedString *attributedString; // @synthesize attributedString=_attributedString;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithComponents:(id)arg1 separators:(id)arg2;

@end

