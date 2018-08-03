//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "ILClassificationExtensionShellViewControllerDelegate.h"
#import "ILClassificationUIExtensionHostContextDelegate.h"

@class ILClassificationExtensionShellViewController, ILClassificationReportingController, ILClassificationRequest, ILClassificationResponse, ILClassificationUIExtensionHostContext, NSExtension, NSObject<OS_dispatch_queue>, NSString, NSUUID, UINavigationController;

@interface ILClassificationUIExtensionHostViewController : UIViewController <ILClassificationUIExtensionHostContextDelegate, ILClassificationExtensionShellViewControllerDelegate>
{
    id <ILClassificationUIExtensionHostViewControllerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    ILClassificationRequest *_classificationRequest;
    ILClassificationResponse *_classificationResponse;
    NSString *_sender;
    NSString *_isoCountryCode;
    NSExtension *_extension;
    NSUUID *_extensionRequestIdentifier;
    UINavigationController *_navigationController;
    ILClassificationExtensionShellViewController *_shellViewController;
    ILClassificationUIExtensionHostContext *_extensionHostContext;
    ILClassificationReportingController *_reportingController;
}

@property(readonly, nonatomic) ILClassificationReportingController *reportingController; // @synthesize reportingController=_reportingController;
@property(retain, nonatomic) ILClassificationUIExtensionHostContext *extensionHostContext; // @synthesize extensionHostContext=_extensionHostContext;
@property(retain, nonatomic) ILClassificationExtensionShellViewController *shellViewController; // @synthesize shellViewController=_shellViewController;
@property(retain, nonatomic) UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(retain, nonatomic) NSUUID *extensionRequestIdentifier; // @synthesize extensionRequestIdentifier=_extensionRequestIdentifier;
@property(retain, nonatomic) NSExtension *extension; // @synthesize extension=_extension;
@property(copy, nonatomic) NSString *isoCountryCode; // @synthesize isoCountryCode=_isoCountryCode;
@property(copy, nonatomic) NSString *sender; // @synthesize sender=_sender;
@property(retain, nonatomic) ILClassificationResponse *classificationResponse; // @synthesize classificationResponse=_classificationResponse;
@property(readonly, nonatomic) ILClassificationRequest *classificationRequest; // @synthesize classificationRequest=_classificationRequest;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <ILClassificationUIExtensionHostViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)logErrorWithMessage:(id)arg1;
- (void)blockNumber:(id)arg1 withCountryCode:(id)arg2;
- (void)launchSettings;
- (void)presentBlockAlertWithCompletion:(CDUnknownBlockType)arg1;
- (void)finish;
- (void)didCompleteClassificationRequestWithResponse:(id)arg1;
- (void)context:(id)arg1 didBecomeReadyForClassificationResponse:(_Bool)arg2;
- (void)userDidFinishForExtensionShellViewController:(id)arg1;
- (void)userDidCancelForExtensionShellViewController:(id)arg1;
- (void)activateExtensionWithCompletion:(CDUnknownBlockType)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initUnactivatedVCWithRequest:(id)arg1 sender:(id)arg2 isoCountryCode:(id)arg3;
- (id)initWithClassificationRequest:(id)arg1 sender:(id)arg2 isoCountryCode:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

