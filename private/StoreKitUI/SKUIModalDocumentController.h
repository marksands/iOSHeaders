//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AAUIFamilySetupDelegate.h"
#import "SKUIComposeReviewDelegate.h"
#import "SKUIGiftViewControllerDelegate.h"
#import "SKUIModalDocumentController.h"
#import "SKUIOverlayContainerDelegate.h"
#import "UIPopoverControllerDelegate.h"
#import "UIPopoverPresentationControllerDelegate.h"

@class NSArray, NSMutableArray, NSString, SKUIClientContext, SKUIOverlayContainerViewController, SKUIReportAConcernViewController, SKUIStoreDialogController, UINavigationController, UIPopoverController, UIViewController;

@interface SKUIModalDocumentController : NSObject <AAUIFamilySetupDelegate, SKUIComposeReviewDelegate, SKUIGiftViewControllerDelegate, SKUIModalDocumentController, SKUIOverlayContainerDelegate, UIPopoverControllerDelegate, UIPopoverPresentationControllerDelegate>
{
    SKUIClientContext *_clientContext;
    NSMutableArray *_composeReviewViewControllers;
    id <SKUIModalDocumentDelegate> _delegate;
    SKUIStoreDialogController *_dialogController;
    SKUIReportAConcernViewController *_reportAConcernViewController;
    NSMutableArray *_giftViewControllers;
    id <SKUIModalSourceViewProvider> _modalSourceViewProvider;
    UINavigationController *_overlayNavigationController;
    SKUIOverlayContainerViewController *_overlayViewController;
    id <UINavigationControllerDelegate> _navigationControllerDelegate;
    UIPopoverController *_popoverController;
    UIViewController *_rootViewController;
    NSMutableArray *_stackItems;
    id <SKUIModalDocumentDataSource> _dataSource;
}

@property(nonatomic) __weak id <SKUIModalDocumentDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(nonatomic) __weak id <UINavigationControllerDelegate> navigationControllerDelegate; // @synthesize navigationControllerDelegate=_navigationControllerDelegate;
@property(nonatomic) __weak id <SKUIModalSourceViewProvider> modalSourceViewProvider; // @synthesize modalSourceViewProvider=_modalSourceViewProvider;
@property(nonatomic) __weak id <SKUIModalDocumentDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
- (void).cxx_destruct;
- (void)_unloadDocumentForViewController:(id)arg1;
- (void)_unloadDocumentForPopoverController:(id)arg1;
- (id)_showOverlayContainerViewController;
- (void)_sendDidFinishIfApplicable;
- (void)_pushSheetStackItem:(id)arg1;
- (void)_pushPopoverSheetDocument:(id)arg1 viewController:(id)arg2 popoverPresentationController:(id)arg3 options:(id)arg4;
- (void)_pushSheetDocument:(id)arg1 viewController:(id)arg2;
- (void)_pushRedeemDocument:(id)arg1 options:(id)arg2;
- (id)_modalSourceViewProviderFromStackItems;
- (void)_pushPopoverStackItem:(id)arg1;
- (void)_pushPlaylistDocument:(id)arg1 options:(id)arg2;
- (void)_pushOverlayStackItem:(id)arg1;
- (void)_pushGiftDocument:(id)arg1 options:(id)arg2;
- (void)_pushFamilySetupDocument:(id)arg1 options:(id)arg2;
- (void)_pushDialogDocument:(id)arg1 options:(id)arg2;
- (void)_promptForStarRating:(id)arg1;
- (void)_presetPopoverSheetDocument:(id)arg1 viewController:(id)arg2 popoverPresentationController:(id)arg3;
- (void)_presentAlertForDialog:(id)arg1;
- (void)_pushCharityDocument:(id)arg1 options:(id)arg2;
- (void)_presentOverlayViewControllersFromNavigationController:(id)arg1;
- (id)_presenterViewController;
- (void)_popPopoverStackItem:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_popOverlayStackItem:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)_popoverController:(id)arg1 containsStackItem:(id)arg2;
- (void)_popDocument:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_overlayStackItems;
- (id)_imageForImageViewElement:(id)arg1;
- (void)_garbageCollectActivityViewController:(id)arg1;
- (void)_dismissOverlayControllerWithStackItem:(id)arg1 animated:(_Bool)arg2;
- (struct CGRect)_centerRect:(id)arg1 adjust:(_Bool)arg2;
- (void)_overlayControllerBackstopAction:(id)arg1;
- (void)popoverPresentationController:(id)arg1 willRepositionPopoverToRect:(inout struct CGRect *)arg2 inView:(inout id *)arg3;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)overlayContainerViewController:(id)arg1 willPopViewController:(id)arg2;
- (void)unloadDocumentForViewController:(id)arg1;
- (void)giftViewController:(id)arg1 didFinishWithResult:(_Bool)arg2;
- (void)_composeReviewViewControllerDidFinish:(id)arg1 finished:(_Bool)arg2;
- (void)composeReviewViewController:(id)arg1 didSubmitWithEdit:(_Bool)arg2;
- (void)composeReviewViewControllerDidCancel:(id)arg1;
- (_Bool)composeReviewViewController:(id)arg1 shouldSubmitReview:(id)arg2;
- (void)composeReviewViewController:(id)arg1 presentDialog:(id)arg2;
- (void)composeReviewViewController:(id)arg1 didFailWithDialog:(id)arg2;
- (void)familySetupViewController:(id)arg1 didCompleteWithSuccess:(_Bool)arg2;
- (void)_popDocumentSkippingUserInterfaceUpdates;
@property(readonly, nonatomic) UINavigationController *_overlayNavigationController;
@property(readonly, nonatomic) SKUIOverlayContainerViewController *_overlayViewController;
- (void)ensureOverlayNavigationControllerStackConsistencyForNavigationController:(id)arg1;
- (void)setOverlayNavigationController:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)replaceDocument:(id)arg1 withDocument:(id)arg2 options:(id)arg3;
- (void)pushDocument:(id)arg1 options:(id)arg2;
- (void)popToDocument:(id)arg1;
- (void)popDocument;
- (void)popAllDocuments;
- (void)presentOverlayViewControllersFromNavigationController:(id)arg1;
- (id)navigationDocumentForNavigationController:(id)arg1;
- (id)navigationDocumentForDocument:(id)arg1;
@property(readonly, nonatomic) NSArray *documents;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

