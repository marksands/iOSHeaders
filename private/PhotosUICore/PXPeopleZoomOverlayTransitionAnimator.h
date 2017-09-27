//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIViewControllerAnimatedTransitioning.h"

@class NSString, PXPeopleZoomOverlayVisualEffectView, UIViewController<PXPeopleZoomOverlayTransitionEndPoint>;

@interface PXPeopleZoomOverlayTransitionAnimator : NSObject <UIViewControllerAnimatedTransitioning>
{
    _Bool _isTransitionZooming;
    UIViewController<PXPeopleZoomOverlayTransitionEndPoint> *_masterViewController;
    UIViewController<PXPeopleZoomOverlayTransitionEndPoint> *_detailViewController;
    id _contextObject;
    unsigned long long _transitionDirection;
    PXPeopleZoomOverlayVisualEffectView *_blurView;
}

@property(retain, nonatomic) PXPeopleZoomOverlayVisualEffectView *blurView; // @synthesize blurView=_blurView;
@property(nonatomic) _Bool isTransitionZooming; // @synthesize isTransitionZooming=_isTransitionZooming;
@property(nonatomic) unsigned long long transitionDirection; // @synthesize transitionDirection=_transitionDirection;
@property(readonly, nonatomic) id contextObject; // @synthesize contextObject=_contextObject;
@property(readonly, nonatomic) __weak UIViewController<PXPeopleZoomOverlayTransitionEndPoint> *detailViewController; // @synthesize detailViewController=_detailViewController;
@property(readonly, nonatomic) __weak UIViewController<PXPeopleZoomOverlayTransitionEndPoint> *masterViewController; // @synthesize masterViewController=_masterViewController;
- (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)initWithMasterViewController:(id)arg1 detailViewController:(id)arg2 contextObject:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

