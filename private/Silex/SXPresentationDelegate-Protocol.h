//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Silex/NSObject-Protocol.h>

@class SXComponentAnimationController, SXComponentBehaviorController, SXComponentController, SXComponentView, SXFullScreenCanvasController, SXFullScreenCanvasViewController, SXMediaPlaybackController, SXPresentationAttributes, SXTangierController, SXVideoController, SXViewport, UIView, UIViewController;

@protocol SXPresentationDelegate <NSObject>
@property(readonly, nonatomic) SXPresentationAttributes *presentationAttributes;
@property(readonly, nonatomic) SXMediaPlaybackController *mediaPlaybackController;
@property(readonly, nonatomic) SXVideoController *videoController;
@property(readonly, nonatomic) SXComponentBehaviorController *behaviorController;
@property(readonly, nonatomic) SXComponentAnimationController *animationController;
@property(readonly, nonatomic) SXTangierController *tangierController;
@property(readonly, nonatomic) SXComponentController *componentController;
@property(readonly, nonatomic) SXViewport *viewport;
- (void)updateBehaviorForComponentView:(SXComponentView *)arg1;
- (void)releasePositionOfView:(UIView *)arg1;
- (void)maintainPositionOfViewWhileScrolling:(UIView *)arg1;
- (void)scrollToRect:(struct CGRect)arg1 animated:(_Bool)arg2;
- (_Bool)isScrolling;
- (UIViewController *)presentingContentViewController;
- (void)dismissFullscreenCanvasForComponent:(SXComponentView *)arg1;
- (SXFullScreenCanvasViewController *)requestFullScreenCanvasViewControllerForComponent:(SXComponentView *)arg1 withCompletionBlock:(void (^)(void))arg2;
- (SXFullScreenCanvasViewController *)requestFullScreenCanvasViewControllerForComponent:(SXComponentView *)arg1;
- (UIView *)requestFullScreenCanvasForComponent:(SXComponentView *)arg1 canvasController:(SXFullScreenCanvasController *)arg2;
- (void)removeInteractivityFocusForComponent:(SXComponentView *)arg1;
- (_Bool)addInteractivityFocusForComponent:(SXComponentView *)arg1;
- (_Bool)allowInteractivityFocusForComponent:(SXComponentView *)arg1;
@end

