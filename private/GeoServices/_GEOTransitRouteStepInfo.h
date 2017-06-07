//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOStep, GEOTransitStep;

__attribute__((visibility("hidden")))
@interface _GEOTransitRouteStepInfo : NSObject
{
    long long _routeLegType;
    struct _NSRange _pointRange;
    GEOTransitStep *_transitStep;
    unsigned int _duration;
    GEOStep *_walkingStep;
    struct _NSRange _maneuverPointRange;
}

@property(nonatomic) struct _NSRange maneuverPointRange; // @synthesize maneuverPointRange=_maneuverPointRange;
@property(retain, nonatomic) GEOStep *walkingStep; // @synthesize walkingStep=_walkingStep;
@property(nonatomic) unsigned int duration; // @synthesize duration=_duration;
@property(retain, nonatomic) GEOTransitStep *transitStep; // @synthesize transitStep=_transitStep;
@property(nonatomic) struct _NSRange pointRange; // @synthesize pointRange=_pointRange;
@property(nonatomic) long long routeLegType; // @synthesize routeLegType=_routeLegType;
- (void).cxx_destruct;

@end

