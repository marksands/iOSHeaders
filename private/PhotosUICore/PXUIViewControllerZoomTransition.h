//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUICore/PXUIViewControllerTransition.h>

@interface PXUIViewControllerZoomTransition : PXUIViewControllerTransition
{
}

+ (_Bool)isTransitionSupportedWithMasterViewController:(id)arg1 detailViewController:(id)arg2;
- (void)animateZoomTransition:(id)arg1 withInitialVelocity:(struct PXDisplayVelocity)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (_Bool)supportsEdgeSwipeBackGesture;

@end

