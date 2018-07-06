//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "_ASCredentialProviderExtensionHostContextDelegate.h"

@class NSArray, NSExtension, NSString;

@interface _ASCredentialProviderExtensionViewController : UIViewController <_ASCredentialProviderExtensionHostContextDelegate>
{
    NSExtension *_extension;
    UIViewController *_remoteViewController;
    NSArray *_serviceIdentifiers;
    _Bool _dismissOnBackground;
    id <_ASCredentialProviderExtensionViewControllerDelegate> _delegate;
}

@property(nonatomic) _Bool dismissOnBackground; // @synthesize dismissOnBackground=_dismissOnBackground;
@property(nonatomic) __weak id <_ASCredentialProviderExtensionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)childViewControllerForWhitePointAdaptivityStyle;
- (id)childViewControllerForStatusBarStyle;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForScreenEdgesDeferringSystemGestures;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (void)prepareToCancelRequestWithHostContext:(id)arg1 error:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)prepareToCompleteRequestWithHostContext:(id)arg1 credential:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_setRemoteViewController:(id)arg1;
- (void)_didInstantiateViewController:(id)arg1 withRequestID:(id)arg2 error:(id)arg3;
- (void)_finishWithCredential:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithExtension:(id)arg1 serviceIdentifiers:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

