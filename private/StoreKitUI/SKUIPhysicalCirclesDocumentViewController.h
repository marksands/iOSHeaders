//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <StoreKitUI/SKUIViewController.h>

#import "SKUIArtworkRequestDelegate.h"
#import "SKUIDocumentViewController.h"
#import "SKUIOnboardingAffiliationCirclesDelegate.h"
#import "SKUIPhysicalCirclesTemplateDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class NSMapTable, NSString, SKUIOnboardingAffiliationCirclesViewController, SKUIOnboardingFooterView, SKUIOnboardingProgressView, SKUIPhysicalCirclesTemplateViewElement, SKUIResourceLoader, UIGestureRecognizer;

@interface SKUIPhysicalCirclesDocumentViewController : SKUIViewController <SKUIArtworkRequestDelegate, SKUIOnboardingAffiliationCirclesDelegate, SKUIPhysicalCirclesTemplateDelegate, UIGestureRecognizerDelegate, SKUIDocumentViewController>
{
    SKUIOnboardingAffiliationCirclesViewController *_circlesViewController;
    SKUIOnboardingFooterView *_footerView;
    NSMapTable *_imageRequests;
    UIGestureRecognizer *_interactivePopGestureRecognizer;
    SKUIOnboardingProgressView *_progressView;
    SKUIResourceLoader *_resourceLoader;
    SKUIPhysicalCirclesTemplateViewElement *_templateElement;
}

- (void).cxx_destruct;
- (void)_styleAttributedString:(id)arg1 withStyle:(id)arg2;
- (id)_rightFooterButtonElement;
- (void)_reloadInstructionsView;
- (void)_reloadFooterViewAnimated:(_Bool)arg1;
- (id)_profileImageElement;
- (void)_loadImagesWithReason:(long long)arg1;
- (id)_leftFooterButtonElement;
- (id)_affiliationItemsWithCircleItemElements:(id)arg1;
- (void)_footerRightButtonAction:(id)arg1;
- (void)_footerLeftButtonAction:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)physicalCirclesDOMFeature:(id)arg1 didRequestAnimation:(id)arg2;
- (void)onboardingCircles:(id)arg1 didSelectAffiliationItem:(id)arg2 atIndex:(long long)arg3;
- (void)onboardingCircles:(id)arg1 didRemoveAffiliationItem:(id)arg2;
- (void)documentDidUpdate:(id)arg1;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithPhysicalCirclesTemplateViewElement:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

