//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIKeyboardMotionSupport.h>

#import "UIScrollViewIntersectionDelegate.h"

@class UIInputViewSetNotificationInfo, UIScrollView;

__attribute__((visibility("hidden")))
@interface UIScrollToDismissSupport : UIKeyboardMotionSupport <UIScrollViewIntersectionDelegate>
{
    UIScrollView *_scrollViewForTransition;
    _Bool _scrollViewShowsHorizontalScrollIndicator;
    _Bool _scrollViewTransitionFinishing;
    _Bool _disableInterfaceAutorotation;
    struct CGPoint _scrollViewTransitionPreviousPoint;
    UIInputViewSetNotificationInfo *_scrollViewNotificationInfo;
}

- (void)scrollView:(id)arg1 didFinishPanGesture:(id)arg2;
- (void)scrollView:(id)arg1 didPanWithGesture:(id)arg2;
- (void)completeKeyboardDismiss:(unsigned long long)arg1 withDuration:(double)arg2;
- (id)cancelNotificationsForMode:(unsigned long long)arg1;
- (void)completedPlacementFrom:(id)arg1 to:(id)arg2 forController:(id)arg3;
- (void)finishScrollViewTransitionForController:(id)arg1;
- (void)setInterfaceAutorotationDisabled:(_Bool)arg1 forController:(id)arg2;
- (void)finishScrollViewTransition;
- (void)hideScrollViewHorizontalScrollIndicator:(_Bool)arg1;
- (void)updateScrollViewContentInsetBottom:(double)arg1;
- (void)dealloc;

@end

