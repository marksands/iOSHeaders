//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDateIntervalFormatter, NSLocale;

@interface CLSDateIntervalFormatter : NSObject
{
    NSDateIntervalFormatter *_dateIntervalFormatter;
    NSLocale *_locale;
}

+ (_Bool)_yearIsNeededForDisplayingDate:(id)arg1;
+ (id)stringFromStartDate:(id)arg1 endDate:(id)arg2 type:(unsigned long long)arg3 showLongMonthFormatIfNeeded:(_Bool)arg4;
+ (id)stringFromStartDate:(id)arg1 endDate:(id)arg2 type:(unsigned long long)arg3;
+ (id)_dateFormatForDateFormatterType:(unsigned long long)arg1 displayYear:(_Bool)arg2 displayLongMonth:(_Bool)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
@property(readonly, nonatomic) NSDateIntervalFormatter *dateIntervalFormatter; // @synthesize dateIntervalFormatter=_dateIntervalFormatter;
- (id)stringFromStartDate:(id)arg1 endDate:(id)arg2 type:(unsigned long long)arg3 showLongMonthFormatIfNeeded:(_Bool)arg4;
- (id)stringFromStartDate:(id)arg1 endDate:(id)arg2 type:(unsigned long long)arg3;

@end

