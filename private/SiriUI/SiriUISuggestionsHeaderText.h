//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SiriUI/NSCopying-Protocol.h>

@class NSAttributedString, NSString;

@interface SiriUISuggestionsHeaderText : NSObject <NSCopying>
{
    NSString *_regularString;
    NSString *_compactString;
    long long _textAlignment;
}

@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(copy, nonatomic) NSString *compactString; // @synthesize compactString=_compactString;
@property(copy, nonatomic) NSString *regularString; // @synthesize regularString=_regularString;
- (void).cxx_destruct;
- (id)_attributedStringWithString:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) NSAttributedString *attributedStringForMainScreenTraitCollection;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRegularString:(id)arg1 compactString:(id)arg2;

@end

