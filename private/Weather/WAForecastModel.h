//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class City, NSArray, NSDate, NSURL, WACurrentForecast, WFAirQualityConditions, WFLocation, WFWeatherConditions;

@interface WAForecastModel : NSObject <NSCopying>
{
    City *_city;
    WFLocation *_location;
    WACurrentForecast *_currentConditions;
    WFAirQualityConditions *_airQualityConditions;
    NSArray *_hourlyForecasts;
    NSArray *_dailyForecasts;
    NSDate *_sunrise;
    NSDate *_sunset;
    NSURL *_deepLink;
    NSURL *_link;
    WFWeatherConditions *_underlyingCurrentConditions;
    NSArray *_underlyingHourlyConditions;
    NSArray *_underlyingDailyConditions;
}

@property(retain, nonatomic) NSArray *underlyingDailyConditions; // @synthesize underlyingDailyConditions=_underlyingDailyConditions;
@property(retain, nonatomic) NSArray *underlyingHourlyConditions; // @synthesize underlyingHourlyConditions=_underlyingHourlyConditions;
@property(retain, nonatomic) WFWeatherConditions *underlyingCurrentConditions; // @synthesize underlyingCurrentConditions=_underlyingCurrentConditions;
@property(retain, nonatomic) NSURL *link; // @synthesize link=_link;
@property(retain, nonatomic) NSURL *deepLink; // @synthesize deepLink=_deepLink;
@property(retain, nonatomic) NSDate *sunset; // @synthesize sunset=_sunset;
@property(retain, nonatomic) NSDate *sunrise; // @synthesize sunrise=_sunrise;
@property(copy, nonatomic) NSArray *dailyForecasts; // @synthesize dailyForecasts=_dailyForecasts;
@property(copy, nonatomic) NSArray *hourlyForecasts; // @synthesize hourlyForecasts=_hourlyForecasts;
@property(retain, nonatomic) WFAirQualityConditions *airQualityConditions; // @synthesize airQualityConditions=_airQualityConditions;
@property(retain, nonatomic) WACurrentForecast *currentConditions; // @synthesize currentConditions=_currentConditions;
@property(retain, nonatomic) WFLocation *location; // @synthesize location=_location;
@property(retain, nonatomic) City *city; // @synthesize city=_city;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isPopulated;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

