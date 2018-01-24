//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "MPAVRoutingViewControllerThemeDelegate.h"
#import "MPMediaControlsViewControllerDelegate.h"
#import "MediaControlsCollectionItemViewController.h"
#import "MediaControlsEndpointControllerDelegate.h"
#import "MediaControlsRatingActionSheet.h"

@class MPAVRoutingViewController, MPArtworkCatalog, MPMediaControlsViewController, MediaControlsEndpointController, MediaControlsHeaderView, MediaControlsParentContainerView, MediaControlsRoutingCornerView, MediaControlsVolumeContainerView, NSMutableArray, NSString, UIView;

@interface MediaControlsPanelViewController : UIViewController <MediaControlsEndpointControllerDelegate, MediaControlsRatingActionSheet, MPAVRoutingViewControllerThemeDelegate, MPMediaControlsViewControllerDelegate, MediaControlsCollectionItemViewController>
{
    struct CGSize _lastKnownSize;
    _Bool _selected;
    _Bool _transitioning;
    _Bool _coverSheetRoutingViewControllerShouldBePresented;
    _Bool _onScreen;
    _Bool _isListeningForResponse;
    UIView *_contentView;
    UIView *_backgroundView;
    MPAVRoutingViewController *_routingViewController;
    id <MediaControlsPanelViewControllerDelegate> _delegate;
    long long _style;
    MediaControlsHeaderView *_headerView;
    MediaControlsRoutingCornerView *_routingCornerView;
    MediaControlsParentContainerView *_parentContainerView;
    MediaControlsVolumeContainerView *_volumeContainerView;
    UIView *_topDividerView;
    UIView *_bottomDividerView;
    NSMutableArray *_secondaryStringComponents;
    MPMediaControlsViewController *_coverSheetRoutingViewController;
    MPArtworkCatalog *_artworkCatalog;
    unsigned long long _supportedModes;
    long long _selectedMode;
    MediaControlsEndpointController *_endpointController;
    CDUnknownBlockType _routingCornerViewTappedBlock;
}

+ (id)panelViewControllerForCoverSheet;
@property(copy, nonatomic) CDUnknownBlockType routingCornerViewTappedBlock; // @synthesize routingCornerViewTappedBlock=_routingCornerViewTappedBlock;
@property(retain, nonatomic) MediaControlsEndpointController *endpointController; // @synthesize endpointController=_endpointController;
@property(nonatomic) long long selectedMode; // @synthesize selectedMode=_selectedMode;
@property(nonatomic) unsigned long long supportedModes; // @synthesize supportedModes=_supportedModes;
@property(nonatomic) _Bool isListeningForResponse; // @synthesize isListeningForResponse=_isListeningForResponse;
@property(nonatomic, getter=isOnScreen) _Bool onScreen; // @synthesize onScreen=_onScreen;
@property(retain, nonatomic) MPArtworkCatalog *artworkCatalog; // @synthesize artworkCatalog=_artworkCatalog;
@property(nonatomic) _Bool coverSheetRoutingViewControllerShouldBePresented; // @synthesize coverSheetRoutingViewControllerShouldBePresented=_coverSheetRoutingViewControllerShouldBePresented;
@property(retain, nonatomic) MPMediaControlsViewController *coverSheetRoutingViewController; // @synthesize coverSheetRoutingViewController=_coverSheetRoutingViewController;
@property(retain, nonatomic) NSMutableArray *secondaryStringComponents; // @synthesize secondaryStringComponents=_secondaryStringComponents;
@property(retain, nonatomic) UIView *bottomDividerView; // @synthesize bottomDividerView=_bottomDividerView;
@property(retain, nonatomic) UIView *topDividerView; // @synthesize topDividerView=_topDividerView;
@property(retain, nonatomic) MediaControlsVolumeContainerView *volumeContainerView; // @synthesize volumeContainerView=_volumeContainerView;
@property(retain, nonatomic) MediaControlsParentContainerView *parentContainerView; // @synthesize parentContainerView=_parentContainerView;
@property(retain, nonatomic) MediaControlsRoutingCornerView *routingCornerView; // @synthesize routingCornerView=_routingCornerView;
@property(retain, nonatomic) MediaControlsHeaderView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic, getter=isTransitioning) _Bool transitioning; // @synthesize transitioning=_transitioning;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) __weak id <MediaControlsPanelViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MPAVRoutingViewController *routingViewController; // @synthesize routingViewController=_routingViewController;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (void)_routingCornerViewReceivedTap:(id)arg1;
- (void)_updateRoutingCornerView;
- (void)routingViewController:(id)arg1 willDisplayCell:(id)arg2;
- (struct UIEdgeInsets)contentInsetsForRoutingViewController:(id)arg1;
- (void)mediaControlsViewControllerDidReceiveInteraction:(id)arg1;
- (void)_mediaControlsPanelViewControllerReceivedInteraction:(id)arg1;
- (void)willTransitionToSize:(struct CGSize)arg1 withCoordinator:(id)arg2;
- (void)presentRatingActionSheet:(id)arg1;
- (void)headerViewLaunchNowPlayingAppButtonPressed:(id)arg1;
- (void)_dismissRoutingViewControllerFromCoverSheetIfNeeded;
- (void)_presentRoutingViewControllerFromCoverSheet;
- (void)_setRoutingPickerVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)headerViewButtonPressed:(id)arg1;
- (void)_updateSecondaryStringFormat;
- (void)_updatePlaceholderArtwork;
- (void)_updateRouteNameLabel;
- (void)_updateControlCenterMetadata:(id)arg1;
- (void)_updateHeaderUI;
- (void)_updateShouldForceVolumeControlDisabled;
- (void)endpointControllerRouteDidUpdate:(id)arg1;
- (void)endpointControllerDidUpdateRoutingAvailability:(id)arg1;
- (void)endpointControllerDidChangeState:(id)arg1;
- (void)endpointController:(id)arg1 didLoadNewResponse:(id)arg2;
- (void)_updateConfiguration;
- (void)setSelectedMode:(long long)arg1 animated:(_Bool)arg2;
- (void)_updateOnScreenForStyle:(long long)arg1;
- (void)_updateStyle;
- (id)_route;
@property(copy, nonatomic) NSString *label;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

