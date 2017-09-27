//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUICore/PXViewSpec.h>

@class NSDictionary, UIColor, UIFont;

@interface PXLabelSpec : PXViewSpec
{
    _Bool _adjustsFontSizeToFitWidth;
    _Bool _allowTruncation;
    struct UIColor *_textColor;
    struct UIFont *_font;
    NSDictionary *_textAttributes;
    NSDictionary *_fallbackTextAttributes;
    long long _textAlignment;
    unsigned long long _numberOfLines;
    long long _verticalAlignment;
    long long _capitalization;
    long long _fallbackCapitalization;
    double _minimumScaleFactor;
    double _minimumTruncatedScaleFactor;
    struct UIEdgeInsets _contentInsets;
}

@property(nonatomic) double minimumTruncatedScaleFactor; // @synthesize minimumTruncatedScaleFactor=_minimumTruncatedScaleFactor;
@property(nonatomic) _Bool allowTruncation; // @synthesize allowTruncation=_allowTruncation;
@property(nonatomic) double minimumScaleFactor; // @synthesize minimumScaleFactor=_minimumScaleFactor;
@property(nonatomic) _Bool adjustsFontSizeToFitWidth; // @synthesize adjustsFontSizeToFitWidth=_adjustsFontSizeToFitWidth;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(nonatomic) long long fallbackCapitalization; // @synthesize fallbackCapitalization=_fallbackCapitalization;
@property(nonatomic) long long capitalization; // @synthesize capitalization=_capitalization;
@property(nonatomic) long long verticalAlignment; // @synthesize verticalAlignment=_verticalAlignment;
@property(nonatomic) unsigned long long numberOfLines; // @synthesize numberOfLines=_numberOfLines;
@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(copy, nonatomic) NSDictionary *fallbackTextAttributes; // @synthesize fallbackTextAttributes=_fallbackTextAttributes;
@property(copy, nonatomic) NSDictionary *textAttributes; // @synthesize textAttributes=_textAttributes;
@property(copy, nonatomic) UIFont *font; // @synthesize font=_font;
@property(copy, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end

