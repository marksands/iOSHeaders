//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ControlCenterUI/NSObject-Protocol.h>

@class CCUIControlCenterPageContainerViewController, _UIBackdropView;
@protocol CCUIControlCenterSystemAgent;

@protocol CCUIControlCenterPageContainerViewControllerDelegate <NSObject>
- (void)visibilityPreferenceChangedForContainerViewController:(CCUIControlCenterPageContainerViewController *)arg1;
- (long long)layoutStyle;
- (id <CCUIControlCenterSystemAgent>)controlCenterSystemAgent;
- (void)containerViewController:(CCUIControlCenterPageContainerViewController *)arg1 backdropViewDidUpdate:(_UIBackdropView *)arg2;
- (void)containerViewControllerWantsDismissal:(CCUIControlCenterPageContainerViewController *)arg1;
@end
