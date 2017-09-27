//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PKSpringAnimationFactory.h"

#import "_UIBasicAnimationFactory.h"

@class NSString;

@interface PKUISpringAnimationFactory : PKSpringAnimationFactory <_UIBasicAnimationFactory>
{
    CDUnknownBlockType _animationDelayHandler;
    double _maximumVendedDelay;
}

@property(readonly, nonatomic) double maximumVendedDelay; // @synthesize maximumVendedDelay=_maximumVendedDelay;
@property(copy, nonatomic) CDUnknownBlockType animationDelayHandler; // @synthesize animationDelayHandler=_animationDelayHandler;
- (void).cxx_destruct;
- (id)_basicAnimationForView:(struct UIView *)arg1 withKeyPath:(id)arg2;
- (id)_springAnimationForView:(struct UIView *)arg1 withKeyPath:(id)arg2;
- (id)springAnimationForView:(struct UIView *)arg1 withKeyPath:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

