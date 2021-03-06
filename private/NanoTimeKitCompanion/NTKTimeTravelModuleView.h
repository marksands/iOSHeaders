//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKModuleView.h>

@class CALayer, NSCalendar, NSDate, NSDateComponentsFormatter, UILabel, UIView;

@interface NTKTimeTravelModuleView : NTKModuleView
{
    UIView *_backgroundView;
    UILabel *_timeScrubDifferenceLabel;
    UILabel *_timeScrubNowLabel;
    NSDate *_date;
    NSDateComponentsFormatter *_offsetDateFormatter;
    _Bool _is24HourMode;
    _Bool _shouldUseNowText;
    NSCalendar *_cal;
    CALayer *_borderLayer;
    double _nowLabelCenterY;
    id <NTKTimeTravelModuleViewTapClient> _tapDelegate;
}

+ (double)_defaultHeightForDevice:(id)arg1;
+ (double)_actualCornerRadiusForDevice:(id)arg1;
+ (double)cornerRadius;
+ (id)timeTravelColor;
@property(nonatomic) __weak id <NTKTimeTravelModuleViewTapClient> tapDelegate; // @synthesize tapDelegate=_tapDelegate;
- (void).cxx_destruct;
- (id)_formatDateStringForIntervalBetweenReferenceDate:(id)arg1 andOverrideDate:(id)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)scrubToDate:(id)arg1;
- (void)_layoutContentView;
- (void)layoutSubviews;
- (void)_setupBorder;
- (void)prepareToAppear;
- (id)initWithMaximumWidth:(double)arg1;

@end

