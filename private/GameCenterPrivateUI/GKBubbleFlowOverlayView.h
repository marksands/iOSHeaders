//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GameCenterPrivateUI/GKBubbleFlowContainerView.h>

@class GKBubbleSet;

@interface GKBubbleFlowOverlayView : GKBubbleFlowContainerView
{
}

+ (id)sharedBubbleOverlayViewForWindow:(id)arg1;
+ (id)sharedBubbleOverlayView;
- (void)didMoveToWindow;
- (id)hitTest:(struct CGPoint)arg1 forEvent:(struct __GSEvent *)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (void)willBeginTransition;
@property(readonly, nonatomic) GKBubbleSet *secondaryBubbleControls;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGRect)defaultRectForBubbleOfType:(long long)arg1;

@end

