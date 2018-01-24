//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QLPreviewControllerDelegate.h"
#import "UIActionSheetDelegate.h"
#import "_UIDICActivityViewControllerDelegate.h"

@class NSArray, NSString, NSURL, QLPreviewController, UIBarButtonItem, UIPopoverController, UIView, UIViewController, _UIDICActivityViewController, _UIDICPreviewItem;

@interface UIDocumentInteractionController : NSObject <QLPreviewControllerDelegate, _UIDICActivityViewControllerDelegate, UIActionSheetDelegate>
{
    NSArray *_gestureRecognizers;
    NSArray *_icons;
    QLPreviewController *_previewController;
    UIViewController *_presentingViewController;
    struct CGRect _presentRect;
    UIView *_presentView;
    UIBarButtonItem *_presentItem;
    NSURL *_tmpURLToDeleteOnDealloc;
    NSURL *_decompressedArchiveDocumentURL;
    _Bool _shouldDecompressArchiveIfNecessary;
    struct {
        unsigned int delegateViewControllerForPreview:1;
        unsigned int delegateRectForPreview:1;
        unsigned int delegateViewForPreview:1;
        unsigned int delegateWillBeginPreview:1;
        unsigned int delegateDidEndPreviewPreview:1;
        unsigned int delegateWillPresentOptionsMenu:1;
        unsigned int delegateDidDismissOptionsMenu:1;
        unsigned int delegateWillPresentOpenInMenu:1;
        unsigned int delegateDidDismissOpenInMenu:1;
        unsigned int delegateWillBeginSendingToApplication:1;
        unsigned int delegateDidEndSendingToApplication:1;
        unsigned int delegateCanPerformAction:1;
        unsigned int delegatePerformAction:1;
        unsigned int delegateArchiveDecompressionRootURL:1;
        unsigned int delegateExcludesActivities:1;
        unsigned int delegateAddsActivities:1;
        unsigned int delegateProvidesActivityItem:1;
        unsigned int delegateProvidesPrintInfo:1;
        unsigned int transitionImageForPreview:1;
        unsigned int documentProxyForPreview:1;
        unsigned int showingOptionsMenu:1;
        unsigned int showingOpenInMenu:1;
    } _documentInteractionControllerFlags;
    _Bool _sourceIsManaged;
    _Bool _previewsPresentWithMarkup;
    _Bool _excludeDotFilesFromArchiveListings;
    id <UIDocumentInteractionControllerDelegate> _delegate;
    _UIDICPreviewItem *_previewControllerItem;
    id _annotation;
    CDUnknownBlockType _completionWithItemsHandler;
    _UIDICActivityViewController *_activityViewController;
    UIPopoverController *_popoverController;
    NSString *_uniqueIdentifier;
}

+ (id)_archiveDecompressQueue;
+ (id)_UTIForFileURL:(id)arg1;
+ (id)interactionControllerWithURL:(id)arg1;
@property(nonatomic) _Bool excludeDotFilesFromArchiveListings; // @synthesize excludeDotFilesFromArchiveListings=_excludeDotFilesFromArchiveListings;
@property(nonatomic) _Bool previewsPresentWithMarkup; // @synthesize previewsPresentWithMarkup=_previewsPresentWithMarkup;
@property(nonatomic) _Bool sourceIsManaged; // @synthesize sourceIsManaged=_sourceIsManaged;
@property(retain, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(retain, nonatomic) UIPopoverController *popoverController; // @synthesize popoverController=_popoverController;
@property(retain, nonatomic) _UIDICActivityViewController *activityViewController; // @synthesize activityViewController=_activityViewController;
@property(copy, nonatomic, getter=_completionWithItemsHandler, setter=_setCompletionWithItemsHandler:) CDUnknownBlockType _completionWithItemsHandler; // @synthesize _completionWithItemsHandler;
@property(retain, nonatomic) id annotation; // @synthesize annotation=_annotation;
@property(nonatomic) __weak id <UIDocumentInteractionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_fixupFileExtensionIfNeeded;
- (id)activityViewController:(id)arg1 mailSubjectForActivityType:(id)arg2;
- (void)activityViewController:(id)arg1 didFinishPerformingActivityType:(id)arg2 completed:(_Bool)arg3 items:(id)arg4 error:(id)arg5;
- (void)activityViewController:(id)arg1 didFinishPresentingActivityType:(id)arg2;
- (void)activityViewController:(id)arg1 openActivityDidEndSendingToApplication:(id)arg2;
- (void)activityViewController:(id)arg1 openActivityWillBeginSendingToApplication:(id)arg2;
- (void)popoverController:(id)arg1 animationCompleted:(long long)arg2;
- (_Bool)_delegatePerformAction:(SEL)arg1;
- (_Bool)_delegateCanPerformAction:(SEL)arg1;
- (_Bool)_delegateImplementsLegacyActions;
- (_Bool)_canSaveToCameraRollForType;
- (_Bool)_isValidURL:(id)arg1;
- (_Bool)_isFilenameValidForDecompressing:(id)arg1 allowsPreviewingArchive:(_Bool)arg2;
- (_Bool)_isPackageArchive:(id)arg1;
- (_Bool)_documentNeedsHelpDecompressingArchiveForPreview;
- (_Bool)_shouldAutoDecompressIfArchiveForPreview;
- (_Bool)_shouldAutoDecompressIfArchive;
- (id)_decompressedArchiveDocumentURL;
- (void)_setDecompressedArchiveDocumentURL:(id)arg1;
- (void)_decompressArchiveAndSetupPayload:(CDUnknownBlockType)arg1;
- (id)__decompressArchiveAndSetupPayload:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_pathsInArchive:(CDUnknownBlockType)arg1;
- (unsigned long long)_archiveExtractionOptions;
@property(nonatomic) _Bool shouldUnzipDocument;
- (id)_newActivityIfNecessaryForLegacyActionDelegatingWithAction:(SEL)arg1;
- (_Bool)_shouldIncludeActivityForLegacyDelegatingWithAction:(SEL)arg1;
- (id)_newPreviewActivity;
- (_Bool)_shouldIncludePreviewActivity;
- (_Bool)_setupPreviewController;
- (_Bool)_setupForOpenInMenu;
- (_Bool)_setupForOptionsMenu;
- (id)_preparedActivityViewControllerWithItems:(id)arg1 activities:(id)arg2 options:(unsigned long long)arg3;
- (void)_invokeDelegateDidFinishOpenWithApplicationIdentifier:(id)arg1;
- (void)_invokeDelegateWillBeginOpenWithApplicationIdentifier:(id)arg1;
- (id)_preferredApplicationForDocumentOpening;
- (void)openResourceOperation:(id)arg1 didFinishCopyingResource:(id)arg2;
- (void)__performLaunchServiceDocumentOpenWithApplication:(id)arg1 launchServiceOptions:(id)arg2;
- (void)__openUsingInPlaceMechanismToTransferDocumentToApplication:(id)arg1;
- (void)__openUsingDefaultCopyMechanismToTransferDocumentToApplication:(id)arg1;
- (void)_openDocumentWithApplication:(id)arg1;
- (void)_openDocumentInPlaceWithApplication:(id)arg1;
- (void)openDocumentWithDefaultApplication;
- (void)_presentOptionsMenu:(id)arg1;
- (void)_presentPreview:(id)arg1;
- (void)dismissMenuAnimated:(_Bool)arg1;
- (void)dismissPreviewAnimated:(_Bool)arg1;
- (_Bool)presentOpenInMenuFromBarButtonItem:(id)arg1 animated:(_Bool)arg2;
- (_Bool)presentOpenInMenuFromRect:(struct CGRect)arg1 inView:(id)arg2 animated:(_Bool)arg3;
- (_Bool)_presentOpenInMenuAnimated:(_Bool)arg1 willPresentBlock:(CDUnknownBlockType)arg2;
- (_Bool)__presentPreviewAnimated:(_Bool)arg1;
- (_Bool)presentPreviewAnimated:(_Bool)arg1;
- (id)presentingNavigationController;
- (_Bool)presentOptionsMenuFromBarButtonItem:(id)arg1 animated:(_Bool)arg2;
- (_Bool)presentOptionsMenuFromRect:(struct CGRect)arg1 inView:(id)arg2 animated:(_Bool)arg3;
- (_Bool)_presentOptionsMenuAnimated:(_Bool)arg1 willPresentBlock:(CDUnknownBlockType)arg2;
- (void)_clearPreviousPresentationContext;
- (_Bool)_canPreviewDecompressedArchive;
- (id)previewController:(id)arg1 previewItemAtIndex:(long long)arg2;
- (long long)numberOfPreviewItemsInPreviewController:(id)arg1;
- (id)excludedActivityTypesForPreviewController:(id)arg1;
- (void)markupAction:(id)arg1;
- (id)dismissActionsForPreviewController:(id)arg1;
- (void)previewController:(id)arg1 updatedContentsURL:(id)arg2 forEditedItem:(id)arg3;
- (_Bool)previewController:(id)arg1 shouldSaveEditedItem:(id)arg2;
- (_Bool)previewController:(id)arg1 canEditItem:(id)arg2;
- (id)previewController:(id)arg1 transitionImageForPreviewItem:(id)arg2 contentRect:(struct CGRect *)arg3;
- (void)previewControllerDidDismiss:(id)arg1;
- (struct CGRect)previewController:(id)arg1 frameForPreviewItem:(id)arg2 inSourceView:(id *)arg3;
@property(readonly, nonatomic) _UIDICPreviewItem *previewControllerItem; // @synthesize previewControllerItem=_previewControllerItem;
@property(readonly, nonatomic) QLPreviewController *previewController;
- (id)extractSubitemFromArchive:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)subitemsInArchive:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic, getter=isArchive) _Bool archive;
- (void)_dismissEverythingWithExtremePrejudiceAnimated:(_Bool)arg1;
- (id)_defaultApplication;
- (_Bool)_shouldReturnDefaultApplication;
- (void)setPreviewURLOverride:(id)arg1;
- (_Bool)_delegateExistsAndImplementsRequiredMethods:(id *)arg1;
- (id)_documentProxySourceIsManaged:(_Bool)arg1;
- (id)_documentProxy;
- (void)_invalidate;
@property(readonly, nonatomic) NSArray *gestureRecognizers;
- (_Bool)_isImage;
@property(readonly, nonatomic) NSArray *icons;
@property(copy) NSString *name;
@property(copy, nonatomic) NSString *UTI;
@property(retain) NSURL *URL;
- (void)_updateURLSourceIsManaged;
- (void)dealloc;
- (id)initWithURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

