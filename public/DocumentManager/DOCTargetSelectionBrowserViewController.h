//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UINavigationController.h"

#import "DOCAppearanceProtocol.h"
#import "DOCHostTargetSelectionBrowserViewControllerProxy.h"

@class DOCAppearance, DOCConfiguration, NSArray, NSString, UIViewController<DOCRemoteAppearanceInterface>, _UIResilientRemoteViewContainerViewController;

@interface DOCTargetSelectionBrowserViewController : UINavigationController <DOCHostTargetSelectionBrowserViewControllerProxy, DOCAppearanceProtocol>
{
    _UIResilientRemoteViewContainerViewController *_remoteViewController;
    UIViewController<DOCRemoteAppearanceInterface> *_localViewController;
    DOCConfiguration *_configuration;
    id <DOCServiceTargetSelectionBrowserViewControllerProxy> _serviceProxy;
    NSArray *_urls;
    NSArray *_items;
    DOCAppearance *_lastAppearance;
    id <DOCTargetSelectionBrowserViewControllerDelegate> _targetSelectionDelegate;
}

@property(nonatomic) __weak id <DOCTargetSelectionBrowserViewControllerDelegate> targetSelectionDelegate; // @synthesize targetSelectionDelegate=_targetSelectionDelegate;
- (void).cxx_destruct;
- (void)notifyDelegateOfCancellation;
- (void)_dismissWithBlock:(CDUnknownBlockType)arg1;
- (void)filesExportedAtURLs:(id)arg1;
- (void)cancelPresentation;
- (void)dismissViewController;
- (void)updateAppearance:(id)arg1;
- (void)_cancelButtonPressed:(id)arg1;
- (void)_updateNavigationBar;
- (void)viewDidLoad;
- (id)remoteInterface;
- (id)remoteViewController;
- (id)initWithConfiguration:(id)arg1 urls:(id)arg2;
- (id)initWithConfiguration:(id)arg1 items:(id)arg2;
- (id)initForExportingWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

