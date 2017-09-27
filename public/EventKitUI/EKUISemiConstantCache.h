//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, UIFont;

@interface EKUISemiConstantCache : NSObject
{
    double _currentWindowWidth;
    double _currentWindowHeight;
    double _currentScaleFactor;
    _Bool _currentWidthSizeClassIsRegular;
    unsigned long long _currentWindowSizeParadigm;
    _Bool _calInterfaceIsLeftToRight;
    _Bool _usesLargeText;
    double _dayOccurrenceMinimumCachedLineHeight;
    double _dayOccurrenceMinimumCachedLineHeightSmall;
    UIFont *_dayOccurrenceUncompressedSecondaryTextFont;
    NSMutableDictionary *_commentIconStrings;
    NSMutableDictionary *_birthdayImages;
    double _weekAllDayBaselineForLargeFormatWeekView;
    double _weekAllDayBaselineForSmallFormatWeekView;
    UIFont *_weekAllDayLabelFont;
    UIFont *_weekAllDayTodayLabelFont;
    double _weekAllDayOccurrenceHeight;
    double _minYearMonthHeaderFontSizeUsed;
}

+ (id)sharedInstance;
@property double minYearMonthHeaderFontSizeUsed; // @synthesize minYearMonthHeaderFontSizeUsed=_minYearMonthHeaderFontSizeUsed;
@property double weekAllDayOccurrenceHeight; // @synthesize weekAllDayOccurrenceHeight=_weekAllDayOccurrenceHeight;
@property double weekAllDayBaselineForSmallFormatWeekView; // @synthesize weekAllDayBaselineForSmallFormatWeekView=_weekAllDayBaselineForSmallFormatWeekView;
@property double weekAllDayBaselineForLargeFormatWeekView; // @synthesize weekAllDayBaselineForLargeFormatWeekView=_weekAllDayBaselineForLargeFormatWeekView;
@property(readonly) _Bool calInterfaceIsLeftToRight; // @synthesize calInterfaceIsLeftToRight=_calInterfaceIsLeftToRight;
@property(readonly) unsigned long long currentWindowSizeParadigm; // @synthesize currentWindowSizeParadigm=_currentWindowSizeParadigm;
@property(readonly) double currentScaleFactor; // @synthesize currentScaleFactor=_currentScaleFactor;
@property(readonly) double currentWindowHeight; // @synthesize currentWindowHeight=_currentWindowHeight;
@property(readonly) double currentWindowWidth; // @synthesize currentWindowWidth=_currentWindowWidth;
@property(readonly) _Bool usesLargeText; // @synthesize usesLargeText=_usesLargeText;
- (void).cxx_destruct;
@property(readonly) UIFont *weekAllDayTodayLabelFont;
@property(readonly) UIFont *weekAllDayLabelFont;
- (id)birthdayImageForFont:(id)arg1;
- (id)commentIconStringForFont:(id)arg1;
@property(readonly) double dayOccurrenceMinimumCachedLineHeightSmall;
@property(readonly) UIFont *dayOccurrenceUncompressedSecondaryTextFont;
@property(readonly) double dayOccurrenceMinimumCachedLineHeight;
- (id)_dayOccurrenceFontWithStyle:(id)arg1 size:(double)arg2 regularSize:(double)arg3;
- (void)_localeChanged:(id)arg1;
- (void)_contentCategorySizeChanged:(id)arg1;
- (void)updateMetrics;
- (void)_orientationChanged:(id)arg1;
- (void)updateWindowSize;
- (id)init;

@end

