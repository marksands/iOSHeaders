//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIPinchGestureRecognizer.h"

@interface TSDCanvasZoomPinchGestureRecognizer : UIPinchGestureRecognizer
{
    _Bool mZoomTimedOut;
}

- (void)p_cancelAfterDelay;
- (void)p_stopCancellationTimer;
- (void)p_startCancellationTimer;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)reset;

@end

