//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ControlCenterUI/_UIPreviewInteractionViewControllerTransition-Protocol.h>

@class CCUIContentModuleContainerViewController, NSString;

@interface CCUIContentModuleContainerTransition : NSObject <_UIPreviewInteractionViewControllerTransition>
{
    _Bool _appearanceTransition;
    CCUIContentModuleContainerViewController *_viewController;
}

@property(nonatomic, getter=isAppearanceTransition) _Bool appearanceTransition; // @synthesize appearanceTransition=_appearanceTransition;
@property(nonatomic) __weak CCUIContentModuleContainerViewController *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
- (void)transitionDidEnd:(_Bool)arg1;
- (void)performTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3;
- (void)prepareTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

