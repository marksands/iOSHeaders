//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "STSiriModelObject.h"

@class NSNumber;

@interface STWeatherCurrentConditions : STSiriModelObject
{
    long long _conditionCode;
    NSNumber *_temperature;
    NSNumber *_highTemperature;
    NSNumber *_lowTemperature;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)lowTemperature;
- (id)highTemperature;
- (id)temperature;
- (long long)conditionCode;
- (id)_initWithConditionCode:(long long)arg1 temperature:(id)arg2 highTemperature:(id)arg3 lowTemperature:(id)arg4;

@end

