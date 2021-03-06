//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"
#import "PLContentSizeCategoryAdjusting.h"

@class NSArray, NSDate, NSString, NSTimeZone, UIButton;

@protocol PLTitled <NSObject, PLContentSizeCategoryAdjusting>
@property(readonly, nonatomic) UIButton *utilityButton;
@property(readonly, nonatomic) NSArray *iconButtons;
@property(nonatomic) long long dateFormatStyle;
@property(copy, nonatomic) NSTimeZone *timeZone;
@property(nonatomic, getter=isDateAllDay) _Bool dateAllDay;
@property(copy, nonatomic) NSDate *date;
@property(copy, nonatomic) NSString *title;
@property(copy, nonatomic) NSArray *icons;
@end

