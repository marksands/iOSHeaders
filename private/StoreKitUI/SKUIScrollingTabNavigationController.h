//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <StoreKitUI/SKUINavigationController.h>

#import "SKUIObservableNavigationStack.h"
#import "SKUIScrollingTabBarBottomInsetAwareContent.h"

@class NSString;

@interface SKUIScrollingTabNavigationController : SKUINavigationController <SKUIScrollingTabBarBottomInsetAwareContent, SKUIObservableNavigationStack>
{
    id <SKUINavigationStackObserver> _navigationStackObserver;
}

@property(nonatomic) __weak id <SKUINavigationStackObserver> navigationStackObserver; // @synthesize navigationStackObserver=_navigationStackObserver;
- (void).cxx_destruct;
- (void)_observedNavigationStackDidChange;
- (void)scrollingTabBarBottomInsetAdjustmentDidChange;
- (void)popToNavigationStackRootContentAnimated:(_Bool)arg1 withBehavior:(long long)arg2;
@property(nonatomic, getter=isShowingNavigationStackRootContent) _Bool showingNavigationStackRootContent; // @dynamic showingNavigationStackRootContent;
- (double)_scrollViewBottomContentInsetForViewController:(id)arg1;
- (void)didShowViewController:(id)arg1 animated:(_Bool)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

