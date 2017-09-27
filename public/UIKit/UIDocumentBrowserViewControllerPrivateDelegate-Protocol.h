//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIDocumentBrowserViewControllerDelegate.h"

@class DOCConcreteLocation, NSArray, NSURL, UIBarButtonItem, UIDocumentBrowserViewController;

@protocol UIDocumentBrowserViewControllerPrivateDelegate <UIDocumentBrowserViewControllerDelegate>

@optional
- (void)documentBrowser:(UIDocumentBrowserViewController *)arg1 commitDocumentURLPreview:(NSURL *)arg2;
- (void)documentBrowser:(UIDocumentBrowserViewController *)arg1 didPickImportedURLs:(NSArray *)arg2;
- (void)documentManagerWasCancelled:(UIDocumentBrowserViewController *)arg1;
- (void)didDismissDocumentManager:(UIDocumentBrowserViewController *)arg1;
- (void)willDismissDocumentManager:(UIDocumentBrowserViewController *)arg1;
- (_Bool)documentBrowser:(UIDocumentBrowserViewController *)arg1 shouldHandleLocation:(DOCConcreteLocation *)arg2;
- (_Bool)documentBrowser:(UIDocumentBrowserViewController *)arg1 shouldShowActivityViewControllerForDocumentURLs:(NSArray *)arg2 barButtonItem:(UIBarButtonItem *)arg3 popoverTracker:(id <DOCServicePopoverTrackerProtocol>)arg4;
@end

