//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <WeatherFoundation/WFResponse.h>

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSArray;

@interface WFAggregateForecastResponse : WFResponse <NSCopying, NSSecureCoding>
{
    _Bool _responseWasFromCache;
    NSArray *_forecasts;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool responseWasFromCache; // @synthesize responseWasFromCache=_responseWasFromCache;
@property(copy, nonatomic) NSArray *forecasts; // @synthesize forecasts=_forecasts;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

