//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <Widgets/WGWidgetDebugging-Protocol.h>
#import <Widgets/WGWidgetDiscoveryObserving-Protocol.h>
#import <Widgets/WGWidgetExtensionVisibilityProviding-Protocol.h>
#import <Widgets/WGWidgetListViewControllerDelegatePrivate-Protocol.h>

@class NSString, UIScrollView, WGMajorListViewController, WGWidgetDiscoveryController;
@protocol WGWidgetGroupViewControllerDelegate;

@interface WGWidgetGroupViewController : UIViewController <WGWidgetDebugging, WGWidgetDiscoveryObserving, WGWidgetListViewControllerDelegatePrivate, WGWidgetExtensionVisibilityProviding>
{
    WGWidgetDiscoveryController *_discoveryController;
    WGMajorListViewController *_majorColumnListViewController;
    unsigned long long _lastWidgetCount;
    _Bool _shouldBlurContent;
    id <WGWidgetGroupViewControllerDelegate> _delegate;
    unsigned long long _location;
    struct UIEdgeInsets _contentOccludingInset;
}

@property(nonatomic) struct UIEdgeInsets contentOccludingInset; // @synthesize contentOccludingInset=_contentOccludingInset;
@property(nonatomic) _Bool shouldBlurContent; // @synthesize shouldBlurContent=_shouldBlurContent;
@property(nonatomic) unsigned long long location; // @synthesize location=_location;
@property(nonatomic) __weak id <WGWidgetGroupViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)isWidgetExtensionVisible:(id)arg1;
- (struct UIEdgeInsets)contentOccludingInsetForWidgetListViewController:(id)arg1;
- (id)widgetListViewController:(id)arg1 newCustomBackgroundViewForItemInList:(id)arg2;
- (void)widgetDiscoveryController:(id)arg1 widgetWithIdentifier:(id)arg2 shouldBecomeHiddenInGroup:(id)arg3;
- (void)widgetDiscoveryController:(id)arg1 widgetWithIdentifier:(id)arg2 shouldBecomeVisibleInGroup:(id)arg3;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)editViewDidDisappear:(id)arg1;
- (void)editViewWillDisappear:(id)arg1;
- (void)editViewDidAppear:(id)arg1;
- (void)editViewWillAppear:(id)arg1;
- (void)_loadWidgetListViewController;
- (long long)_activeLayoutMode;
- (long long)_layoutModeForSize:(struct CGSize)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (void)viewDidLoad;
- (void)invalidateVisibleWidgets;
- (void)setLegibilitySettings:(id)arg1;
@property(readonly, nonatomic) unsigned long long widgetCount;
@property(readonly, nonatomic) UIScrollView *majorScrollView;
- (id)_scrollViewForListViewController:(id)arg1;
- (id)initWithWidgetDiscoveryController:(id)arg1;
- (void)makeVisibleWidgetWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentEditViewWithCompletion:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

