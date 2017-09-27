//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SFSafariViewControllerDelegate.h"
#import "SKCloudServiceSetupRemoteViewControllerDelegate.h"

@class NSString, SFSafariViewController, SKCloudServiceSetupConfiguration, SKCloudServiceSetupReloadContext, _UIResilientRemoteViewContainerViewController;

@interface SKCloudServiceSetupViewController : UIViewController <SFSafariViewControllerDelegate, SKCloudServiceSetupRemoteViewControllerDelegate>
{
    _UIResilientRemoteViewContainerViewController *_remoteViewContainerViewController;
    _Bool _isRemoteViewControllerReady;
    _Bool _hasInitializedServiceViewController;
    SKCloudServiceSetupReloadContext *_activeCloudServiceSetupReloadContext;
    CDUnknownBlockType _loadCompletionHandler;
    SFSafariViewController *_safariViewController;
    id <SKCloudServiceSetupViewControllerDelegate> _delegate;
    SKCloudServiceSetupConfiguration *_configuration;
}

@property(readonly, copy, nonatomic) SKCloudServiceSetupConfiguration *configuration; // @synthesize configuration=_configuration;
@property(nonatomic) __weak id <SKCloudServiceSetupViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_reloadWithActiveCloudServiceSetupReloadContext;
- (void)_didReceiveRemoteViewController:(id)arg1;
- (void)_requestRemoteViewController;
- (void)handleSafariScriptURL:(id)arg1;
- (void)reloadWithContext:(id)arg1;
- (void)loadWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)overrideCreditCardPresentationWithCompletion:(CDUnknownBlockType)arg1;
- (void)cloudServiceSetupRemoteViewController:(id)arg1 requestsDismissingSafariViewControllerAnimated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)cloudServiceSetupRemoteViewController:(id)arg1 requestsPresentingSafariViewControllerWithURL:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)cloudServiceSetupRemoteViewController:(id)arg1 requestsDismissalWithAnimation:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)cloudServiceSetupRemoteViewController:(id)arg1 didFinishLoadingWithSuccess:(_Bool)arg2 error:(id)arg3;
- (void)safariViewControllerDidFinish:(id)arg1;
- (void)safariViewController:(id)arg1 didCompleteInitialLoad:(_Bool)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

