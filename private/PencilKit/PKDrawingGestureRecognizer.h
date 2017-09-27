//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIGestureRecognizer.h"

@class UITouch;

@interface PKDrawingGestureRecognizer : UIGestureRecognizer
{
    double _thresholdDistance;
    double _squaredThreshold;
    struct CGPoint _drawTouchStartPoint;
    _Bool _drawingTargetIsDrawing;
    _Bool _gestureDetected;
    _Bool _ignoreFingerTouchesUntilReset;
    double thresholdDistance;
    UITouch *_drawingTouch;
    id <PKDrawingGestureTarget> _drawingTarget;
}

@property(nonatomic) __weak id <PKDrawingGestureTarget> drawingTarget; // @synthesize drawingTarget=_drawingTarget;
@property(readonly, nonatomic) UITouch *drawingTouch; // @synthesize drawingTouch=_drawingTouch;
@property(nonatomic) double thresholdDistance; // @synthesize thresholdDistance;
- (void).cxx_destruct;
- (void)_drawingCancelled;
- (void)_drawingEnded;
- (void)_drawingMoved:(id)arg1;
- (void)_drawingBegan;
- (void)reset;
- (void)_endDrawing;
- (void)_cancelDrawing;
- (void)_updateDrawingWithEvent:(id)arg1;
- (void)_beginDrawingWithTouch:(id)arg1;
- (void)touchesEstimatedPropertiesUpdated:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)end;
- (void)cancel;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end

