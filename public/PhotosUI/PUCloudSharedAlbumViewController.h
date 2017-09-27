//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUI/PUPhotosAlbumViewController.h>

#import "PLAlbumStreamingOptionsViewControllerDelegate.h"
#import "PUPhotoStreamComposeServiceDelegate.h"
#import "PUVideoTrimQueueControllerDelegate.h"
#import "UIPopoverPresentationControllerDelegate.h"

@class NSArray, NSString, PLCloudSharedAlbum, PUPhotoStreamComposeServiceViewController, PUPhotosPickerViewController, PUVideoTrimQueueController, UIBarButtonItem, UISegmentedControl, UIViewController;

@interface PUCloudSharedAlbumViewController : PUPhotosAlbumViewController <PLAlbumStreamingOptionsViewControllerDelegate, UIPopoverPresentationControllerDelegate, PUVideoTrimQueueControllerDelegate, PUPhotoStreamComposeServiceDelegate>
{
    PUPhotosPickerViewController *_activePhotosPickerViewController;
    PUVideoTrimQueueController *_trimController;
    PUPhotoStreamComposeServiceViewController *_composeServiceController;
    _Bool _displayingOptions;
    _Bool __canContributeToCloudSharedAlbum;
    UIViewController *__optionsViewController;
    UIViewController *__optionsPopoverRootViewController;
    NSArray *__transitioningOptionsViewControllers;
    UIBarButtonItem *__optionsBarButtonItem;
    UIBarButtonItem *__optionsBarButtonSpacerItem;
    UISegmentedControl *__switcherSegmentedControl;
    UIBarButtonItem *__switcherBarButtonItem;
    long long __selectedItemIndex;
}

@property(nonatomic, setter=_setSelectedItemIndex:) long long _selectedItemIndex; // @synthesize _selectedItemIndex=__selectedItemIndex;
@property(retain, nonatomic, setter=_setSwitcherBarButtonItem:) UIBarButtonItem *_switcherBarButtonItem; // @synthesize _switcherBarButtonItem=__switcherBarButtonItem;
@property(retain, nonatomic, setter=_setSwitcherSegmentedControl:) UISegmentedControl *_switcherSegmentedControl; // @synthesize _switcherSegmentedControl=__switcherSegmentedControl;
@property(nonatomic, setter=_setCanContributeToCloudSharedAlbum:) _Bool _canContributeToCloudSharedAlbum; // @synthesize _canContributeToCloudSharedAlbum=__canContributeToCloudSharedAlbum;
@property(retain, nonatomic, setter=_setOptionsBarButtonSpacerItem:) UIBarButtonItem *_optionsBarButtonSpacerItem; // @synthesize _optionsBarButtonSpacerItem=__optionsBarButtonSpacerItem;
@property(retain, nonatomic, setter=_setOptionsBarButtonItem:) UIBarButtonItem *_optionsBarButtonItem; // @synthesize _optionsBarButtonItem=__optionsBarButtonItem;
@property(retain, nonatomic, setter=_setTransitioningOptionsViewControllers:) NSArray *_transitioningOptionsViewControllers; // @synthesize _transitioningOptionsViewControllers=__transitioningOptionsViewControllers;
@property(retain, nonatomic, setter=_setOptionsPopoverRootViewController:) UIViewController *_optionsPopoverRootViewController; // @synthesize _optionsPopoverRootViewController=__optionsPopoverRootViewController;
@property(retain, nonatomic, setter=_setOptionsViewController:) UIViewController *_optionsViewController; // @synthesize _optionsViewController=__optionsViewController;
@property(nonatomic, getter=isDisplayingOptions, setter=setDisplayingOptions:) _Bool displayingOptions; // @synthesize displayingOptions=_displayingOptions;
- (void).cxx_destruct;
- (void)_collectionView:(id)arg1 performDropWithCoordinator:(id)arg2;
- (void)photoStreamComposeServiceDidCancel:(id)arg1;
- (void)photoStreamComposeService:(id)arg1 didPostComment:(id)arg2;
- (void)controller:(id)arg1 didCancelTrimmingVideoSources:(id)arg2;
- (void)controller:(id)arg1 didFinishTrimmingVideoSources:(id)arg2;
- (void)handleAddToAlbum:(id)arg1 pickedAssets:(id)arg2;
- (void)albumStreamingOptionsViewController:(id)arg1 didCompleteWithReason:(int)arg2;
- (id)_newOptionsViewController;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (_Bool)prepareForDismissingForced:(_Bool)arg1;
- (void)_handleSwitcherSegmentedControl:(id)arg1;
- (void)_dismissOptionsPopoverAnimated:(_Bool)arg1;
- (void)_presentOptionsPopoverFromBarButtonItem:(id)arg1;
- (void)_optionsBarButtonItemPressed:(id)arg1;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)getTitle:(out id *)arg1 prompt:(out id *)arg2 shouldHideBackButton:(out _Bool *)arg3 leftBarButtonItems:(out id *)arg4 rightBarButtonItems:(out id *)arg5;
- (void)_updateOptionsViewInsets;
- (void)_updateOptionsView;
- (void)updatePeripheralInterfaceAnimated:(_Bool)arg1;
- (_Bool)_canDisplayOptions;
- (_Bool)_shouldShowOptionsSwitcherInToolbar;
- (id)globalFooterSubtitle;
- (_Bool)wantsGlobalFooter;
- (id)newToolbarItems;
- (_Bool)shouldShowToolbar;
- (_Bool)shouldShowTabBar;
- (void)didSelectAddPlaceholderInSection:(long long)arg1;
- (_Bool)wantsAddPlaceholderAtEndOfSection:(long long)arg1;
- (_Bool)wantsAddContentInToolbar;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)canDeleteContent;
- (_Bool)canAddToOtherAlbumContent;
- (id)_suppressionContexts;
- (_Bool)_appAllowsSupressionOfAlerts;
- (void)setAlbum:(struct NSObject *)arg1 existingFetchResult:(id)arg2;

// Remaining properties
@property(retain, nonatomic) PLCloudSharedAlbum *album; // @dynamic album;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

