//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSMutableCopying.h"

@class NSArray, NSIndexSet, NSString;

__attribute__((visibility("hidden")))
@interface TSUCustomFormatData : NSObject <NSCopying, NSMutableCopying>
{
    unsigned char _minimumIntegerWidth;
    unsigned char _decimalWidth;
    unsigned char _numberOfNonSpaceIntegerPlaceholderDigits;
    unsigned char _numberOfNonSpaceDecimalPlaceholderDigits;
    unsigned char _indexFromRightOfLastDigitPlaceholder;
    unsigned char _numberOfHashDecimalPlaceholders;
    unsigned char _totalNumberOfDecimalPlaceholdersInFormat;
    _Bool _showThousandsSeparator;
    _Bool _useAccountingStyle;
    _Bool _requiresFractionReplacement;
    _Bool _isConditional;
    _Bool _formatContainsIntegerToken;
    _Bool _isComplexFormat;
    unsigned short _currencyCodeIndex;
    int _fractionAccuracy;
    NSString *_formatString;
    NSArray *_interstitialStrings;
    NSIndexSet *_interstitialStringInsertionIndexes;
    double _scaleFactor;
}

+ (id)customFormatData;
@property(nonatomic) _Bool isComplexFormat; // @synthesize isComplexFormat=_isComplexFormat;
@property(nonatomic) _Bool formatContainsIntegerToken; // @synthesize formatContainsIntegerToken=_formatContainsIntegerToken;
@property(nonatomic) _Bool isConditional; // @synthesize isConditional=_isConditional;
@property(nonatomic) _Bool requiresFractionReplacement; // @synthesize requiresFractionReplacement=_requiresFractionReplacement;
@property(nonatomic) _Bool useAccountingStyle; // @synthesize useAccountingStyle=_useAccountingStyle;
@property(nonatomic) _Bool showThousandsSeparator; // @synthesize showThousandsSeparator=_showThousandsSeparator;
@property(nonatomic) unsigned short currencyCodeIndex; // @synthesize currencyCodeIndex=_currencyCodeIndex;
@property(nonatomic) unsigned char totalNumberOfDecimalPlaceholdersInFormat; // @synthesize totalNumberOfDecimalPlaceholdersInFormat=_totalNumberOfDecimalPlaceholdersInFormat;
@property(nonatomic) unsigned char numberOfHashDecimalPlaceholders; // @synthesize numberOfHashDecimalPlaceholders=_numberOfHashDecimalPlaceholders;
@property(nonatomic) unsigned char indexFromRightOfLastDigitPlaceholder; // @synthesize indexFromRightOfLastDigitPlaceholder=_indexFromRightOfLastDigitPlaceholder;
@property(nonatomic) unsigned char numberOfNonSpaceDecimalPlaceholderDigits; // @synthesize numberOfNonSpaceDecimalPlaceholderDigits=_numberOfNonSpaceDecimalPlaceholderDigits;
@property(nonatomic) unsigned char numberOfNonSpaceIntegerPlaceholderDigits; // @synthesize numberOfNonSpaceIntegerPlaceholderDigits=_numberOfNonSpaceIntegerPlaceholderDigits;
@property(nonatomic) unsigned char decimalWidth; // @synthesize decimalWidth=_decimalWidth;
@property(nonatomic) unsigned char minimumIntegerWidth; // @synthesize minimumIntegerWidth=_minimumIntegerWidth;
@property(nonatomic) int fractionAccuracy; // @synthesize fractionAccuracy=_fractionAccuracy;
@property(nonatomic) double scaleFactor; // @synthesize scaleFactor=_scaleFactor;
@property(copy, nonatomic) NSIndexSet *interstitialStringInsertionIndexes; // @synthesize interstitialStringInsertionIndexes=_interstitialStringInsertionIndexes;
@property(copy, nonatomic) NSArray *interstitialStrings; // @synthesize interstitialStrings=_interstitialStrings;
@property(copy, nonatomic) NSString *formatString; // @synthesize formatString=_formatString;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)p_copySelfTo:(id)arg1;
- (id)init;
- (id)initWithCustomFormatData:(id)arg1;

@end

