//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIViewSpringAnimationBehaviorDescribing.h"

@interface UIViewSpringAnimationBehavior : NSObject <UIViewSpringAnimationBehaviorDescribing>
{
    double _trackingDampingRatio;
    double _trackingResponse;
    double _dampingRatio;
    double _response;
    double _dampingRatioSmoothing;
    double _responseSmoothing;
    double _inertialTargetSmoothing;
    double _inertialProjectionDeceleration;
}

@property(nonatomic) double inertialProjectionDeceleration; // @synthesize inertialProjectionDeceleration=_inertialProjectionDeceleration;
@property(nonatomic) double inertialTargetSmoothing; // @synthesize inertialTargetSmoothing=_inertialTargetSmoothing;
- (CDStruct_6c8af1d9)parametersForTransitionFromState:(int)arg1 toState:(int)arg2;
- (void)setTrackingDampingRatio:(double)arg1 response:(double)arg2 dampingRatioSmoothing:(double)arg3 responseSmoothing:(double)arg4;
- (void)setDampingRatio:(double)arg1 response:(double)arg2;
- (id)init;

@end

