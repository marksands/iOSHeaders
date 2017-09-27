//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UINavigationController.h"

#import "DOCAppearanceProtocol.h"
#import "DOCHostInfoViewControllerProxy.h"
#import "UIPopoverPresentationControllerDelegate.h"

@class DOCAppearance, DOCConfiguration, DOCItem, NSString, UIViewController<DOCRemoteAppearanceInterface>, _UIResilientRemoteViewContainerViewController;

@interface DOCInfoViewController : UINavigationController <DOCHostInfoViewControllerProxy, UIPopoverPresentationControllerDelegate, DOCAppearanceProtocol>
{
    _UIResilientRemoteViewContainerViewController *_remoteViewController;
    UIViewController<DOCRemoteAppearanceInterface> *_localViewController;
    DOCConfiguration *_configuration;
    id <DOCServiceInfoViewControllerProxy> _serviceProxy;
    DOCItem *_item;
    DOCAppearance *_lastAppearance;
    _Bool _showTagsOnly;
    _Bool _inPopoverMode;
}

@property(nonatomic) _Bool inPopoverMode; // @synthesize inPopoverMode=_inPopoverMode;
- (void).cxx_destruct;
- (void)updatePreferredContentSize:(struct CGSize)arg1;
- (void)dismissViewController;
- (void)updateAppearance:(id)arg1;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (void)prepareForPopoverPresentation:(id)arg1;
- (void)_doneButtonPressed:(id)arg1;
- (void)_updateForPresentation;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLoad;
- (id)remoteInterface;
- (id)remoteViewController;
- (id)initWithConfiguration:(id)arg1 items:(id)arg2 showTagsOnly:(_Bool)arg3;
- (id)initWithConfiguration:(id)arg1 items:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

