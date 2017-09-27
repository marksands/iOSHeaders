//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DocumentManager/UIDocumentBrowserViewController.h>

#import "DOCDocumentBrowserDelegate.h"

@class DOCBrowserViewController, NSArray, NSString;

@interface DOCBaseDocumentBrowserViewController : UIDocumentBrowserViewController <DOCDocumentBrowserDelegate>
{
    _Bool _requestingDocumentCreation;
    NSArray *_selectedItems;
    DOCBrowserViewController *_effectiveBrowserViewController;
}

@property(readonly) DOCBrowserViewController *effectiveBrowserViewController; // @synthesize effectiveBrowserViewController=_effectiveBrowserViewController;
@property(copy) NSArray *selectedItems; // @synthesize selectedItems=_selectedItems;
- (void).cxx_destruct;
- (void)browserDidFinishGatheringItemsAndThumbnails:(id)arg1;
- (void)dismissButtonWasTappedInBrowser:(id)arg1;
- (void)locationsButtonWasTappedInBrowser:(id)arg1 sourceRect:(struct CGRect)arg2;
- (void)clearCurrentOpenInteraction;
- (void)dismissAllPresentedViewControllers:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)revealDocumentAtURL:(id)arg1 importIfNeeded:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)importDocumentAtURL:(id)arg1 mode:(unsigned long long)arg2 toLocation:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)importDocumentAtURL:(id)arg1 mode:(unsigned long long)arg2 toCurrentBrowserLocationWithCompletion:(CDUnknownBlockType)arg3;
- (void)importDocumentAtURL:(id)arg1 nextToDocumentAtURL:(id)arg2 mode:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)browser:(id)arg1 didUpdateCurrentLocationCanSelect:(_Bool)arg2;
- (void)browser:(id)arg1 didUpdateCurrentLocationIsWritable:(_Bool)arg2;
- (void)browser:(id)arg1 didUpdateImportSupportInCurrentLocation:(_Bool)arg2;
- (void)browser:(id)arg1 didUpdateNumberOfItems:(unsigned long long)arg2;
- (void)browser:(id)arg1 wantsToShowInfoForItem:(id)arg2;
- (void)browser:(id)arg1 didSelectItems:(id)arg2;
- (void)browser:(id)arg1 didCommitPreviewOfDocument:(id)arg2;
- (void)browser:(id)arg1 didPickItem:(id)arg2;
- (void)browserWantsToCreateNewFile:(id)arg1;
- (void)browserWantsToCreateNewFolder:(id)arg1;
- (void)browser:(id)arg1 isDisplayingEmptyCollection:(_Bool)arg2;
- (void)browser:(id)arg1 didResolveShownLocation:(id)arg2;
- (void)browser:(id)arg1 wantsToShowLocation:(id)arg2 forceReplaceLocation:(_Bool)arg3;
- (void)dismissDocumentManager;
- (void)showContentForLocation:(id)arg1;
- (void)createDocumentAtCurrentLocation;
- (void)createDocumentAtLocation:(id)arg1;
- (void)notifyDelegateOfImportOfURL:(id)arg1 destinationURL:(id)arg2 error:(id)arg3;
- (id)transitionControllerForDocumentURL:(id)arg1;
- (void)showLocation:(id)arg1 animated:(_Bool)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

