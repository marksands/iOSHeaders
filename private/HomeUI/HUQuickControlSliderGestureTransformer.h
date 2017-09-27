//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HUQuickControlPanningContext, UIGestureRecognizer;

@interface HUQuickControlSliderGestureTransformer : NSObject
{
    _Bool _ignoreTouches;
    _Bool _hasRecognizedSignificantSliderValueChange;
    id <HUQuickControlSliderGestureTransformerDelegate> _delegate;
    UIGestureRecognizer *_gestureRecognizer;
    HUQuickControlPanningContext *_context;
    double _referenceSliderValue;
    double _currentSliderValue;
    double _accumulatedDragDistance;
    struct CGPoint _referenceTouchLocation;
    struct CGPoint _lastTouchLocation;
}

@property(nonatomic) double accumulatedDragDistance; // @synthesize accumulatedDragDistance=_accumulatedDragDistance;
@property(nonatomic) struct CGPoint lastTouchLocation; // @synthesize lastTouchLocation=_lastTouchLocation;
@property(nonatomic) struct CGPoint referenceTouchLocation; // @synthesize referenceTouchLocation=_referenceTouchLocation;
@property(nonatomic) double currentSliderValue; // @synthesize currentSliderValue=_currentSliderValue;
@property(nonatomic) double referenceSliderValue; // @synthesize referenceSliderValue=_referenceSliderValue;
@property(nonatomic) _Bool hasRecognizedSignificantSliderValueChange; // @synthesize hasRecognizedSignificantSliderValueChange=_hasRecognizedSignificantSliderValueChange;
@property(nonatomic) _Bool ignoreTouches; // @synthesize ignoreTouches=_ignoreTouches;
@property(readonly, nonatomic) HUQuickControlPanningContext *context; // @synthesize context=_context;
@property(retain, nonatomic) UIGestureRecognizer *gestureRecognizer; // @synthesize gestureRecognizer=_gestureRecognizer;
@property(nonatomic) __weak id <HUQuickControlSliderGestureTransformerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (double)_rawSliderValueForLocation:(struct CGPoint)arg1;
- (void)_handleSliderValuePan:(struct CGPoint)arg1;
- (void)_handleGesturePan:(id)arg1;
- (_Bool)_shouldIgnoreAllGestures;
- (void)dealloc;
- (id)initWithGestureRecognizer:(id)arg1 context:(id)arg2;

@end

