//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UILongPressGestureRecognizer.h"

@interface DTSForceGestureRecognizer : UILongPressGestureRecognizer
{
    double _startTime;
    _Bool _hasSufficientForce;
}

- (void)setState:(long long)arg1;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)reset;

@end

