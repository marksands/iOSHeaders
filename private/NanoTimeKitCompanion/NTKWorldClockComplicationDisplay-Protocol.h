//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NTKComplicationDisplay.h"

@class NSDate, NSString, NSTimeZone;

@protocol NTKWorldClockComplicationDisplay <NTKComplicationDisplay>
- (void)setOverrideDate:(NSDate *)arg1;
- (void)setTimeZone:(NSTimeZone *)arg1;

@optional
- (void)endTimeTravelAnimated:(_Bool)arg1;
- (void)startTimeTravelAnimated:(_Bool)arg1;
- (void)setLongCity:(NSString *)arg1;
- (void)setShortCity:(NSString *)arg1;
@end

