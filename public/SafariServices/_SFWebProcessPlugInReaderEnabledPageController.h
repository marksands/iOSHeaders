//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SafariServices/_SFWebProcessPlugInAutoFillPageController.h>

#import "RequestDesktopSiteWebProcessPlugInListener.h"
#import "SFReaderWebProcessControllerProtocol.h"

@class NSDictionary, NSMutableDictionary, NSString, SFWebProcessPlugInCertificateWarningController, SFWebProcessPlugInPageExtensionController, _SFReaderWebProcessPlugInPageController, _SFWebProcessPlugInAppleConnectExtensionController, _SFWebProcessPlugInPageSafeBrowsingController, _SFWebProcessSharingLinkExtractor, _WKRemoteObjectInterface;

@interface _SFWebProcessPlugInReaderEnabledPageController : _SFWebProcessPlugInAutoFillPageController <RequestDesktopSiteWebProcessPlugInListener, SFReaderWebProcessControllerProtocol>
{
    struct unique_ptr<SafariServices::ReaderAvailabilityController, std::__1::default_delete<SafariServices::ReaderAvailabilityController>> _readerAvailabilityController;
    _WKRemoteObjectInterface *_availabilityControllerInterface;
    id <SFReaderEventsListener> _readerActivityListenerProxy;
    _SFReaderWebProcessPlugInPageController *_readerPageController;
    long long _cachedReaderTopScrollOffset;
    NSDictionary *_initialScrollPositionAsDictionary;
    _SFWebProcessPlugInPageSafeBrowsingController *_safeBrowsingController;
    SFWebProcessPlugInPageExtensionController *_extensionController;
    _SFWebProcessSharingLinkExtractor *_sharingLinkExtractor;
    SFWebProcessPlugInCertificateWarningController *_certificateWarningController;
    _SFWebProcessPlugInAppleConnectExtensionController *_appleConnectExtensionController;
    id <RequestDesktopSiteUIProcessListener> _requestDesktopSiteUIProcessListener;
    _WKRemoteObjectInterface *_requestDesktopSiteWebProcessPlugInListenerInterface;
    NSMutableDictionary *_domainToUserAgentPolicyMap;
    _Bool _viewingReadingListArchive;
    NSDictionary *_initalArticleScrollPositionAsDictionary;
    NSDictionary *_initialReaderConfiguration;
}

@property(readonly, nonatomic, getter=isViewingReadingListArchive) _Bool viewingReadingListArchive; // @synthesize viewingReadingListArchive=_viewingReadingListArchive;
@property(readonly, nonatomic) NSDictionary *initialReaderConfiguration; // @synthesize initialReaderConfiguration=_initialReaderConfiguration;
@property(nonatomic) long long cachedReaderTopScrollOffset; // @synthesize cachedReaderTopScrollOffset=_cachedReaderTopScrollOffset;
@property(copy, nonatomic) NSDictionary *initalArticleScrollPositionAsDictionary; // @synthesize initalArticleScrollPositionAsDictionary=_initalArticleScrollPositionAsDictionary;
@property(retain, nonatomic) _SFReaderWebProcessPlugInPageController *readerPageController; // @synthesize readerPageController=_readerPageController;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)markURLAsNeedingDesktopUserAgent:(id)arg1;
- (void)_setUpUIProcessListenerIfNeeded;
- (id)webProcessPlugInBrowserContextController:(id)arg1 frame:(id)arg2 userAgentForURL:(id)arg3;
- (id)webProcessPlugInBrowserContextController:(id)arg1 frame:(id)arg2 willSendRequestForResource:(unsigned long long)arg3 request:(id)arg4 redirectResponse:(id)arg5;
- (void)webProcessPlugInBrowserContextController:(id)arg1 renderingProgressDidChange:(unsigned long long)arg2;
- (void)webProcessPlugInBrowserContextController:(id)arg1 didFinishLoadForFrame:(id)arg2;
- (void)webProcessPlugInBrowserContextController:(id)arg1 didFinishDocumentLoadForFrame:(id)arg2;
- (void)webProcessPlugInBrowserContextController:(id)arg1 didSameDocumentNavigation:(long long)arg2 forFrame:(id)arg3;
- (void)webProcessPlugInBrowserContextController:(id)arg1 didCommitLoadForFrame:(id)arg2;
- (void)webProcessPlugInBrowserContextController:(id)arg1 globalObjectIsAvailableForFrame:(id)arg2 inScriptWorld:(id)arg3;
- (void)webProcessPlugInBrowserContextController:(id)arg1 didStartProvisionalLoadForFrame:(id)arg2;
- (void)_removeLoadDeferringReasonsForSafeBrowsingIfNecessary;
- (void)_deferPageLoadingUntilSafeBrowsingCheckCompleteForFrame:(id)arg1 isMainFrame:(_Bool)arg2;
- (void)prepareReaderContentForPrinting;
- (void)collectReaderContentForMail;
- (void)readerContentDidBecomeReadyWithDetectedLanguage:(id)arg1;
- (void)didSetReaderConfiguration:(id)arg1;
- (void)collectReadingListItemInfoWithBookmarkID:(id)arg1;
- (void)loadNewReaderArticle;
- (void)didCreateReaderPageContextHandle:(id)arg1;
- (void)prepareToTransitionToReader;
- (void)willHideReader;
- (void)didFinishPresentationUpdateAfterTransitioningToReader;
- (void)decreaseReaderTextSize;
- (void)increaseReaderTextSize;
- (void)setReaderTheme:(id)arg1;
- (void)setReaderFont:(id)arg1;
- (void)setReaderInitialTopScrollOffset:(long long)arg1 configuration:(id)arg2 isViewingArchive:(_Bool)arg3;
- (struct OpaqueJSValue *)originalArticleFinder;
- (void)_detectReaderAvailabilityAfterSameDocumentNavigation;
- (void)_detectAvailabilityAfterDelay:(double)arg1 loadEvent:(int)arg2;
- (void)_clearReaderControllerInterface;
- (void)_setUpReaderControllerInterface;
- (void)_setUpReaderActivityListenerProxy;
- (void)readerTextWasExtracted:(id)arg1 withMetadata:(id)arg2 wasDeterminingAvailability:(_Bool)arg3;
- (void)didDetermineReaderAvailability:(_Bool)arg1 dueToSameDocumentNavigation:(_Bool)arg2;
- (void)articleContentDidChange;
- (void)willDestroyBrowserContextController:(id)arg1;
- (id)initWithPlugIn:(id)arg1 contextController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

