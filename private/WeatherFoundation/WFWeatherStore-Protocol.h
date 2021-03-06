//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDateComponents, NSDictionary, NSLocale, NSUUID, WFLocation, WFTaskIdentifier;

@protocol WFWeatherStore <NSObject>
- (void)cancelTaskWithIdentifier:(WFTaskIdentifier *)arg1;
- (void)airQualityForLocation:(WFLocation *)arg1 locale:(NSLocale *)arg2 requestIdentifier:(NSUUID *)arg3 options:(NSDictionary *)arg4 completionHandler:(void (^)(WFResponse *))arg5;
- (void)dailyForecastForLocation:(WFLocation *)arg1 requestIdentifier:(NSUUID *)arg2 completionHandler:(void (^)(WFResponse *))arg3;
- (void)hourlyForecastForLocation:(WFLocation *)arg1 requestIdentifier:(NSUUID *)arg2 completionHandler:(void (^)(WFResponse *))arg3;
- (void)forecastForLocation:(WFLocation *)arg1 atDate:(NSDateComponents *)arg2 requestIdentifier:(NSUUID *)arg3 options:(NSDictionary *)arg4 completionHandler:(void (^)(WFResponse *))arg5;
@end

