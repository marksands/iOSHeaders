//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ClockKit/CLKTextProvider.h>

@class NSString;

@interface CLKSimpleTextProvider : CLKTextProvider
{
    _Bool _useNoContentDashFormatting;
    NSString *_text;
    NSString *_shortText;
    NSString *_accessibilityLabel;
}

+ (_Bool)supportsSecureCoding;
+ (id)finalizedTextProviderWithText:(id)arg1 monospaceNumbers:(_Bool)arg2;
+ (id)finalizedTextProviderWithText:(id)arg1;
+ (id)textProviderWithText:(id)arg1 shortText:(id)arg2 accessibilityLabel:(id)arg3;
+ (id)textProviderWithText:(id)arg1 shortText:(id)arg2;
+ (id)textProviderWithText:(id)arg1;
@property(nonatomic) _Bool useNoContentDashFormatting; // @synthesize useNoContentDashFormatting=_useNoContentDashFormatting;
@property(copy, nonatomic) NSString *accessibilityLabel; // @synthesize accessibilityLabel=_accessibilityLabel;
@property(copy, nonatomic) NSString *shortText; // @synthesize shortText=_shortText;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (id)JSONObjectRepresentation;
- (id)_initWithJSONObjectRepresentation:(id)arg1;
- (id)attributedString;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)_validate;
- (id)_sessionAttributedTextForIndex:(unsigned long long)arg1 withStyle:(id)arg2;

@end

