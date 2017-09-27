//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class WFTemperature;

@interface WACurrentForecast : NSObject <NSCopying>
{
    float _windSpeed;
    float _windDirection;
    float _humidity;
    float _dewPoint;
    float _visibility;
    float _pressure;
    float _precipitationPast24Hours;
    WFTemperature *_temperature;
    WFTemperature *_feelsLike;
    unsigned long long _pressureRising;
    unsigned long long _UVIndex;
    long long _conditionCode;
    unsigned long long _observationTime;
}

+ (id)currentForecastForLocation:(id)arg1 conditions:(id)arg2;
@property(nonatomic) unsigned long long observationTime; // @synthesize observationTime=_observationTime;
@property(nonatomic) long long conditionCode; // @synthesize conditionCode=_conditionCode;
@property(nonatomic) float precipitationPast24Hours; // @synthesize precipitationPast24Hours=_precipitationPast24Hours;
@property(nonatomic) unsigned long long UVIndex; // @synthesize UVIndex=_UVIndex;
@property(nonatomic) unsigned long long pressureRising; // @synthesize pressureRising=_pressureRising;
@property(nonatomic) float pressure; // @synthesize pressure=_pressure;
@property(nonatomic) float visibility; // @synthesize visibility=_visibility;
@property(nonatomic) float dewPoint; // @synthesize dewPoint=_dewPoint;
@property(nonatomic) float humidity; // @synthesize humidity=_humidity;
@property(nonatomic) float windDirection; // @synthesize windDirection=_windDirection;
@property(nonatomic) float windSpeed; // @synthesize windSpeed=_windSpeed;
@property(retain, nonatomic) WFTemperature *feelsLike; // @synthesize feelsLike=_feelsLike;
@property(retain, nonatomic) WFTemperature *temperature; // @synthesize temperature=_temperature;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

