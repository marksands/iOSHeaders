//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CAMediaTimingFunction;

@interface NTKFloatCurveElement : NSObject
{
    double _floatValue;
    double _fraction;
    long long _curve;
    CAMediaTimingFunction *_timingFunction;
}

@property(retain, nonatomic) CAMediaTimingFunction *timingFunction; // @synthesize timingFunction=_timingFunction;
@property(nonatomic) long long curve; // @synthesize curve=_curve;
@property(nonatomic) double fraction; // @synthesize fraction=_fraction;
@property(nonatomic) double floatValue; // @synthesize floatValue=_floatValue;
- (void).cxx_destruct;
- (id)initWithFloatValue:(double)arg1 fraction:(double)arg2;

@end

