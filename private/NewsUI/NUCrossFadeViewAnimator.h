//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NUCrossFadeViewAnimator : NSObject
{
    double _duration;
}

@property(nonatomic) double duration; // @synthesize duration=_duration;
- (void)animateView:(id)arg1 toEmptyStateWithCompletion:(CDUnknownBlockType)arg2;
- (void)animateView:(id)arg1 toValue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)resetView:(id)arg1;
- (void)crossFadeFromView:(id)arg1 toView:(id)arg2 value:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)init;

@end

