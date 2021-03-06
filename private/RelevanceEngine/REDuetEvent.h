//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDateInterval, REFeatureValue;

@interface REDuetEvent : NSObject
{
    NSDateInterval *_interval;
    REFeatureValue *_value;
    double _confidence;
}

+ (id)eventWithInterval:(id)arg1 value:(id)arg2 confidence:(double)arg3;
@property(readonly, nonatomic) double confidence; // @synthesize confidence=_confidence;
@property(readonly, nonatomic) REFeatureValue *value; // @synthesize value=_value;
@property(readonly, nonatomic) NSDateInterval *interval; // @synthesize interval=_interval;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end

