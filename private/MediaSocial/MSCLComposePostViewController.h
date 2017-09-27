//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SKUIViewController.h"

#import "MSCLAttachmentAlertDelegate.h"
#import "MSCLAttachmentPropertiesDelegate.h"
#import "MSCLAudioPickerDelegate.h"
#import "MSCLComposeImagePickerDelegate.h"
#import "MSCLComposePostViewDelegate.h"
#import "MSCLSoundBiteViewControllerDelegate.h"
#import "MSCLTagListDelegate.h"

@class MSCLAccountStore, MSCLAttachment, MSCLAttachmentDownloadOperation, MSCLAudioPickerViewController, MSCLAuthorView, MSCLComposeImagePickerController, MSCLComposeLabelValueButton, MSCLComposePostView, MSCLConfiguration, MSCLTagListViewController, NSMutableArray, NSString, SKUIMediaSocialAuthor, SKUIResourceLoader;

@interface MSCLComposePostViewController : SKUIViewController <MSCLAttachmentAlertDelegate, MSCLAttachmentPropertiesDelegate, MSCLAudioPickerDelegate, MSCLComposeImagePickerDelegate, MSCLComposePostViewDelegate, MSCLTagListDelegate, MSCLSoundBiteViewControllerDelegate>
{
    MSCLAccountStore *_accountStore;
    NSMutableArray *_attachments;
    SKUIMediaSocialAuthor *_attributionAuthor;
    MSCLComposeLabelValueButton *_attributionButton;
    MSCLAudioPickerViewController *_audioPickerController;
    MSCLAuthorView *_authorSelectionView;
    MSCLComposePostView *_composeView;
    MSCLConfiguration *_configuration;
    _Bool _didAppear;
    MSCLAttachment *_editingAttachment;
    MSCLComposeLabelValueButton *_externalServicesButton;
    MSCLComposeImagePickerController *_imagePickerController;
    SKUIResourceLoader *_resourceLoader;
    SKUIMediaSocialAuthor *_selectedAuthor;
    NSMutableArray *_soundBiteViewControllers;
    MSCLTagListViewController *_tagCompletionViewController;
    _Bool _attachmentWasDownloadedAndNeedsRemoval;
    id <MSCLComposePostViewControllerDelegate> _delegate;
    MSCLAttachmentDownloadOperation *_attachmentDownloadOperation;
}

@property(nonatomic) _Bool attachmentWasDownloadedAndNeedsRemoval; // @synthesize attachmentWasDownloadedAndNeedsRemoval=_attachmentWasDownloadedAndNeedsRemoval;
@property(nonatomic) __weak MSCLAttachmentDownloadOperation *attachmentDownloadOperation; // @synthesize attachmentDownloadOperation=_attachmentDownloadOperation;
@property(nonatomic) __weak id <MSCLComposePostViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) MSCLConfiguration *configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (void)_updatePostButton;
- (void)_setSelectedAuthor:(id)arg1;
- (void)_setAttributionAuthor:(id)arg1;
- (id)_scrollableHeaderViews;
- (id)_resourceLoader;
- (void)_reloadTagCompletionViewController;
- (void)_reloadExternalServicesButton;
- (void)_reloadAttachmentUI;
- (void)_ingestAttachment:(id)arg1 animated:(_Bool)arg2;
- (id)_headerViews;
- (id)_footerViews;
- (id)_enabledExternalServices;
- (void)_editPropertiesForAttachment:(id)arg1 animated:(_Bool)arg2;
- (void)_dismissTagCompletionViewController;
- (id)_defaultAttributionAuthorForDestinationAuthor:(id)arg1;
- (_Bool)_canShowEditorForAttachment:(id)arg1;
- (id)_attachmentViews;
- (long long)_allowedCharacterCount;
- (void)_addAttachments:(id)arg1;
- (void)_socialAccountStoreDidChangeNotification:(id)arg1;
- (void)_pickAuthorAction:(id)arg1;
- (_Bool)_hasSoundBite;
- (id)_getSoundBite;
- (void)_externalServicesButtonAction:(id)arg1;
- (void)_attributionButtonAction:(id)arg1;
- (void)_attachmentButtonAction:(id)arg1;
- (void)tagList:(id)arg1 didSelectTag:(id)arg2;
- (void)viewControllerDidCompleteRecording:(id)arg1;
- (id)parentViewControllerForMSCLComposeImagePicker:(id)arg1;
- (void)MSCLComposeImagePickerDidCancel:(id)arg1;
- (void)MSCLComposeImagePicker:(id)arg1 didFinishWithAttachments:(id)arg2;
- (void)attachmentPropertiesController:(id)arg1 didEditAttachment:(id)arg2;
- (void)attachmentAlertController:(id)arg1 didFinishWithResult:(long long)arg2;
- (id)composePostView:(id)arg1 tagForString:(id)arg2;
- (void)composePostView:(id)arg1 didSelectAttachment:(id)arg2 atIndex:(long long)arg3;
- (void)composePostView:(id)arg1 didRemoveAttachmentView:(id)arg2 atIndex:(long long)arg3;
- (void)composePostViewTextSelectionDidChange:(id)arg1;
- (void)composePostViewTextDidChange:(id)arg1;
- (void)audioPickerDidCancel:(id)arg1;
- (void)audioPicker:(id)arg1 didFinishWithAttachment:(id)arg2;
- (_Bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (long long)preferredStatusBarStyle;
- (void)loadView;
- (void)getPostDescriptionUsingBlock:(CDUnknownBlockType)arg1;
- (void)addAttachments:(id)arg1 animated:(_Bool)arg2;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

