//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIIntervalAnimating.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface UIViewInstaneouslyStableAnimation : NSObject <UIIntervalAnimating>
{
    id <UIVectorOperatable> _velocity;
    CDUnknownBlockType _targetValueGetter;
}

@property(copy, nonatomic) CDUnknownBlockType targetValueGetter; // @synthesize targetValueGetter=_targetValueGetter;
- (void).cxx_destruct;
- (_Bool)isStable;
- (id)value;
- (id)targetValue;
- (void)setVelocity:(id)arg1;
- (id)velocity;
- (id)stepWithDelta:(double)arg1;
- (id)initWithTargetValueGetter:(CDUnknownBlockType)arg1 velocity:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

