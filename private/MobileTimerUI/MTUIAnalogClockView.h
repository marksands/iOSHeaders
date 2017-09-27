//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "MTClock.h"

@class NSCalendar, NSDate, NSTimeZone, UIImage, UIImageView;

@interface MTUIAnalogClockView : UIView <MTClock>
{
    long long _runMode;
    UIImage *_faceDayImage;
    UIImage *_faceNightImage;
    UIImageView *_faceView;
    UIView *_dayHands[3];
    UIView *_nightHands[3];
    UIImageView *_middleDotDay;
    UIImageView *_middleDotNight;
    UIImageView *_middleRedDot;
    NSDate *_time;
    _Bool _nighttime;
    double _seconds;
    int _flutterIndex;
    _Bool _isRenderStateStale;
    NSCalendar *_calendar;
    _Bool _minuteHourAnimationTriggered;
}

+ (id)imageInBundleForName:(id)arg1;
+ (id)overSecondHandDotImage;
+ (id)makeOverSecondHandDotImage;
+ (id)overHourHandDotForDayTime:(_Bool)arg1;
+ (id)overHourHandDotImageForDaytime:(_Bool)arg1;
+ (id)makeDotImageSize:(double)arg1 color:(id)arg2;
+ (id)clockHand:(long long)arg1 daytime:(_Bool)arg2;
+ (id)makeClockHand:(long long)arg1 daytime:(_Bool)arg2;
+ (id)clockFaceForDaytime:(_Bool)arg1 ignoreCache:(_Bool)arg2;
+ (id)clockFaceForDaytime:(_Bool)arg1;
+ (void)adjustNumberalCenter:(struct CGPoint *)arg1 forNumeralIndex:(long long)arg2;
+ (id)makeClockFaceForDaytime:(_Bool)arg1;
+ (id)imageForType:(int)arg1 dayTime:(_Bool)arg2 generation:(CDUnknownBlockType)arg3 ignoreCache:(_Bool)arg4;
+ (id)imageForType:(int)arg1 dayTime:(_Bool)arg2 generation:(CDUnknownBlockType)arg3;
+ (_Bool)shouldCacheImageOnDiskForType:(int)arg1 dayTime:(_Bool)arg2;
+ (id)imageCacheNameForType:(int)arg1 daytime:(_Bool)arg2;
+ (struct CGPoint)shadowRotationalCenterForHand:(long long)arg1;
+ (struct CGPoint)handRotationalCenterForHand:(long long)arg1;
+ (id)shadowInfoAtIndex:(unsigned long long)arg1;
+ (struct CGSize)clockSize;
+ (double)overSecondHandDotSize;
+ (double)overHourHandDotSize;
+ (_Bool)hasOverSecondHandDot;
+ (_Bool)hasOverHourHandDot;
+ (double)antialiasPaddingRatio;
+ (struct UIEdgeInsets)shadowInsets;
+ (_Bool)doesFaceHaveShadow;
+ (id)numeralFont;
+ (double)numeralInset;
+ (id)nightTimeSecondHandColor;
+ (id)dayTimeSecondHandColor;
+ (id)nightTimeMinuteHandColor;
+ (id)dayTimeMinuteHandColor;
+ (id)nightTimeHourHandColor;
+ (id)dayTimeHourHandColor;
+ (id)overSecondHandDotColor;
+ (id)nightTimeOverHourHandDotColor;
+ (id)dayTimeOverHourHandDotColor;
+ (id)nightTimeFaceColor;
+ (id)nightTimeTextColor;
+ (id)dayTimeFaceColor;
+ (id)dayTimeTextColor;
+ (id)resourcePath;
+ (long long)style;
+ (double)hourHandWidth;
+ (double)minuteHandWidth;
+ (double)secondHandWidth;
+ (double)hourHandLength;
+ (double)minuteHandLength;
+ (double)secondHandOverhangLength;
+ (double)secondHandMainLength;
+ (double)secondHandLength;
+ (double)faceRadius;
+ (id)analogClockWithStyle:(long long)arg1;
+ (struct UIEdgeInsets)insetsForStyle:(long long)arg1;
+ (struct CGSize)sizeForStyle:(long long)arg1;
+ (void)unregisterSweepingClock:(id)arg1;
+ (void)unregisterTickingClock:(id)arg1;
+ (void)unregisterClock:(id)arg1;
+ (void)registerSweepingClock:(id)arg1;
+ (void)registerTickingClock:(id)arg1;
+ (void)registerClock:(id)arg1;
+ (_Bool)isClockRegistered:(id)arg1;
+ (void)updateTimeForAllSweeping;
+ (void)updateFlutterForAllTicking;
+ (void)updateTimeForAllTicking;
+ (id)cacheVersionHash;
+ (id)cacheVersionedPath;
+ (id)cacheTopLevelPath;
+ (void)initialize;
+ (Class)classForStyle:(long long)arg1;
@property(readonly, nonatomic, getter=isNighttime) _Bool nighttime; // @synthesize nighttime=_nighttime;
@property(retain, nonatomic) NSDate *time; // @synthesize time=_time;
@property(readonly, nonatomic) UIImageView *faceView; // @synthesize faceView=_faceView;
@property(nonatomic) long long runMode; // @synthesize runMode=_runMode;
- (void).cxx_destruct;
- (void)handleLocaleChange;
- (void)stop;
- (void)start;
@property(readonly, nonatomic, getter=isStarted) _Bool started;
@property(retain, nonatomic) NSTimeZone *timeZone;
- (void)setTime:(id)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) long long minute;
@property(readonly, nonatomic) long long hour;
- (void)updateTimeAnimated:(_Bool)arg1;
- (void)updateTime;
- (void)setNighttime:(_Bool)arg1;
- (void)updateFlutter;
- (void)setHandAngle:(double)arg1 forHandIndex:(long long)arg2;
- (void)updateTimeContinuously:(long long)arg1;
- (void)setHandTransformForHandIndex:(long long)arg1;
- (struct CGSize)intrinsicContentSize;
@property(readonly, nonatomic) long long style;
- (id)init;
- (void)setFrame:(struct CGRect)arg1;
- (double)coarseUpdateInterval;
- (double)updateInterval;

@end

