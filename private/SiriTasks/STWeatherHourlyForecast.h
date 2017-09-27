//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "STSiriModelObject.h"

@class NSNumber;

@interface STWeatherHourlyForecast : STSiriModelObject
{
    long long _timeIndex;
    long long _conditionCode;
    NSNumber *_temperature;
    NSNumber *_chanceOfPrecipitation;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)chanceOfPrecipitation;
- (id)temperature;
- (long long)conditionCode;
- (long long)timeIndex;
- (id)_initWithConditionCodeIndex:(long long)arg1 timeIndex:(long long)arg2 temperature:(id)arg3 chanceOfPrecipitation:(id)arg4;

@end

