//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet;

@interface PLMomentTemporalSnapshot : NSObject
{
    NSMutableSet *__nodes;
    double __range;
    double __distance;
}

@property(readonly, nonatomic) double distance; // @synthesize distance=__distance;
@property(readonly, nonatomic) double range; // @synthesize range=__range;
@property(readonly, nonatomic) NSMutableSet *nodes; // @synthesize nodes=__nodes;
- (void)dealloc;
- (id)initWithNodes:(id)arg1 inRange:(double)arg2;

@end

