//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TSUBezierPath;

__attribute__((visibility("hidden")))
@interface TSDBezierHitTesterHitInfo : NSObject
{
    TSUBezierPath *_hitPath;
    double _distanceBetweenPoints;
    struct CGPoint _testPoint;
    struct CGPoint _hitPoint;
}

@property(readonly, nonatomic) double distanceBetweenPoints; // @synthesize distanceBetweenPoints=_distanceBetweenPoints;
@property(readonly, nonatomic) TSUBezierPath *hitPath; // @synthesize hitPath=_hitPath;
@property(readonly, nonatomic) struct CGPoint hitPoint; // @synthesize hitPoint=_hitPoint;
@property(readonly, nonatomic) struct CGPoint testPoint; // @synthesize testPoint=_testPoint;
- (void).cxx_destruct;
- (id)description;
- (id)initWithTestPoint:(struct CGPoint)arg1 hitPoint:(struct CGPoint)arg2 hitPath:(id)arg3;

@end

