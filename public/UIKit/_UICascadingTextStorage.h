//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSConcreteTextStorage.h"

@class NSDictionary, NSMutableDictionary, UIColor, UIFont;

__attribute__((visibility("hidden")))
@interface _UICascadingTextStorage : NSConcreteTextStorage
{
    NSMutableDictionary *_defaultAttributes;
}

+ (id)defaultFont;
- (void).cxx_destruct;
- (void)_restoreOriginalFontAttribute;
- (_Bool)_shouldSetOriginalFontAttribute;
- (id)_defaultAttributes;
@property(copy, nonatomic) NSDictionary *defaultAttributes;
- (id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 longestEffectiveRange:(struct _NSRange *)arg3 inRange:(struct _NSRange)arg4;
- (id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 effectiveRange:(struct _NSRange *)arg3;
- (id)attributesAtIndex:(unsigned long long)arg1 longestEffectiveRange:(struct _NSRange *)arg2 inRange:(struct _NSRange)arg3;
- (id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;
- (long long)_ui_resolvedTextAlignment;
@property(nonatomic) long long lineBreakMode;
@property(nonatomic) long long textAlignment;
@property(retain, nonatomic) UIColor *textColor;
@property(nonatomic) double shadowBlur;
@property(nonatomic) struct CGSize shadowOffset;
@property(retain, nonatomic) UIColor *shadowColor;
- (id)_shadow;
- (void)_setShadow:(id)arg1;
@property(retain, nonatomic) UIFont *font;

@end

