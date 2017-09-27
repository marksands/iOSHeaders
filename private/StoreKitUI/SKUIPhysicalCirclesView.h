//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "PKPhysicsContactDelegate.h"

@class CADisplayLink, NSMutableArray, NSObject<OS_dispatch_source>, NSString, PKPhysicsBody, PKPhysicsWorld, UILongPressGestureRecognizer, UIPanGestureRecognizer, UITapGestureRecognizer;

@interface SKUIPhysicalCirclesView : UIView <PKPhysicsContactDelegate>
{
    NSObject<OS_dispatch_source> *_circleLoadStepTimer;
    NSMutableArray *_circleBodies;
    struct SKUIPhysicalCircleConstants _constants;
    id <SKUIPhysicalCirclesDataSource> _dataSource;
    id <SKUIPhysicalCirclesDelegate> _delegate;
    CADisplayLink *_displayLink;
    PKPhysicsBody *_groundBody;
    long long _longPressCircleIndex;
    UILongPressGestureRecognizer *_longPressRecognizer;
    double _maximumFrequencyDistance;
    double _minimumFrequencyDistance;
    UIPanGestureRecognizer *_panRecognizer;
    void *_physicsKitFramework;
    PKPhysicsWorld *_physicsWorld;
    NSMutableArray *_repellors;
    UITapGestureRecognizer *_tapRecognizer;
}

@property(nonatomic) __weak id <SKUIPhysicalCirclesDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <SKUIPhysicalCirclesDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) struct SKUIPhysicalCircleConstants constants; // @synthesize constants=_constants;
- (void).cxx_destruct;
- (void)_stopFluctuationForCircleView:(id)arg1;
- (void)_startFluctuationForCircleView:(id)arg1;
- (void)_removeCircleBodies:(id)arg1;
- (void)_reloadDidFinish;
- (void)_loadCirclesWithStartIndex:(long long)arg1 totalCount:(long long)arg2;
- (struct CGPoint)_initialPositionForCircleIndex:(long long)arg1 view:(id)arg2;
- (long long)_circleIndexForPoint:(struct CGPoint)arg1;
- (id)_circleBodyWithView:(id)arg1;
- (void)_calculateFrequencyScaling;
- (void)_cancelStepTimers;
- (void)_addSpringForCircleBody:(id)arg1;
- (_Bool)_addNextMissingSpringJoint;
- (void)_displayLinkTick:(id)arg1;
- (void)_tapGestureAction:(id)arg1;
- (void)_panGestureAction:(id)arg1;
- (void)_longPressAction:(id)arg1;
- (void)stopPhysics;
- (void)startPhysics;
- (void)setSize:(struct CGSize)arg1 forCircleAtIndex:(long long)arg2;
- (void)removeRepellor:(id)arg1;
- (void)removeCirclesInIndexSet:(id)arg1 byAnimatingToPoint:(struct CGPoint)arg2 delay:(double)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)removeCirclesInIndexSet:(id)arg1 animated:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)removeCircleAtIndex:(long long)arg1 animated:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)removeAllRepellors;
- (void)removeAllCirclesAnimated:(_Bool)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)reloadData;
- (id)circleViewAtIndex:(long long)arg1;
- (id)addRepellorWithCenter:(struct CGPoint)arg1 radius:(double)arg2 bufferSize:(double)arg3;
- (void)addCirclesWithCount:(long long)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

