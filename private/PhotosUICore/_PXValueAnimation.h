//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface _PXValueAnimation : NSObject
{
    double _startTime;
    double _duration;
    struct _PXValueAnimationSpec _spec;
}

@property(readonly, nonatomic) struct _PXValueAnimationSpec spec; // @synthesize spec=_spec;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) _Bool completed;
@property(readonly, nonatomic) double currentValue;
- (double)elapsedTime;
- (id)initWithDuration:(double)arg1 spec:(struct _PXValueAnimationSpec)arg2;
- (id)init;

@end

