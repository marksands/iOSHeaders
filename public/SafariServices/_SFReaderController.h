//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SFReaderContext.h"
#import "SFReaderEventsListener.h"
#import "WKNavigationDelegate.h"
#import "WKUIDelegatePrivate.h"

@class NSMutableDictionary, NSString, WBSReaderFontManager, WKWebView, _WKRemoteObjectInterface;

@interface _SFReaderController : NSObject <SFReaderEventsListener, SFReaderContext, WKNavigationDelegate, WKUIDelegatePrivate>
{
    id <SFReaderWebProcessControllerProtocol> _readerControllerProxy;
    _WKRemoteObjectInterface *_eventsListenerInterface;
    WBSReaderFontManager *_fontManager;
    CDUnknownBlockType _readerMailContentCompletionHandler;
    CDUnknownBlockType _readerPrintContentCompletionHandler;
    NSMutableDictionary *_bookmarkIdentifierToReadingListItemInfoCompletionMap;
    _Bool _readerAvailable;
    WKWebView *_webView;
    WKWebView *_readerWebView;
    id <_SFReaderControllerDelegate> _delegate;
    id <WKUIDelegatePrivate> _webViewUIDelegate;
    NSString *_articleText;
}

+ (id)_defaultInitialConfiguration;
@property(readonly, nonatomic) NSString *articleText; // @synthesize articleText=_articleText;
@property(nonatomic) __weak id <WKUIDelegatePrivate> webViewUIDelegate; // @synthesize webViewUIDelegate=_webViewUIDelegate;
@property(getter=isReaderAvailable) _Bool readerAvailable; // @synthesize readerAvailable=_readerAvailable;
@property __weak id <_SFReaderControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) __weak WKWebView *readerWebView; // @synthesize readerWebView=_readerWebView;
@property(readonly) __weak WKWebView *webView; // @synthesize webView=_webView;
- (void).cxx_destruct;
- (void)_webView:(id)arg1 dataInteractionOperationWasHandled:(_Bool)arg2 forSession:(id)arg3 itemProviders:(id)arg4;
- (_Bool)_webView:(id)arg1 performDataInteractionOperationWithItemProviders:(id)arg2;
- (unsigned long long)_webView:(id)arg1 willUpdateDataInteractionOperationToOperation:(unsigned long long)arg2 forSession:(id)arg3;
- (void)_webView:(id)arg1 dataInteraction:(id)arg2 session:(id)arg3 didEndWithOperation:(unsigned long long)arg4;
- (void)_webView:(id)arg1 dataInteraction:(id)arg2 sessionWillBegin:(id)arg3;
- (void)_webView:(id)arg1 commitPreviewedViewController:(id)arg2;
- (id)_webView:(id)arg1 previewViewControllerForURL:(id)arg2 defaultActions:(id)arg3 elementInfo:(id)arg4;
- (id)_webView:(id)arg1 actionsForElement:(id)arg2 defaultActions:(id)arg3;
- (void)_webView:(id)arg1 getAlternateURLFromImage:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)owningWebViewDidCommitNavigation;
- (void)readerTextWasExtracted:(id)arg1;
- (void)didPrepareReaderContentForDisplay:(id)arg1;
- (void)didPrepareReaderContentForPrinting:(id)arg1;
- (void)didCollectReaderContentForMail:(id)arg1;
- (void)didCollectReadingListItemInfo:(id)arg1 bookmarkID:(id)arg2;
- (void)didSetReaderConfiguration:(id)arg1;
- (void)didDetermineReaderAvailability:(_Bool)arg1 dueToSameDocumentNavigation:(_Bool)arg2;
- (id)fontManager;
- (id)configuration;
- (void)decreaseReaderTextSize;
- (void)increaseReaderTextSize;
- (void)setReaderTheme:(id)arg1;
- (void)setReaderLanguageTag:(id)arg1;
- (void)setReaderFont:(id)arg1;
- (void)collectReaderContentForMailWithCompletion:(CDUnknownBlockType)arg1;
- (id)readerURL;
- (void)loadNewArticle;
- (void)didCreateReaderWebView:(id)arg1;
- (void)clearUnusedReaderResourcesSoon;
- (void)clearAvailability;
- (void)createArticleFinder;
- (id)scrollPositionInformation;
- (void)deactivateReaderNow:(unsigned long long)arg1;
- (void)activateReader;
- (_Bool)shouldCreateArticleFinder;
- (void)clearReaderWebView;
- (void)stopLoadingNextPage;
- (_Bool)isLoadingNextPage;
- (void)prepareReaderPrintingIFrameWithCompletion:(CDUnknownBlockType)arg1;
- (void)collectReadingListInfoWithBookmarkID:(int)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setReaderInitialTopScrollOffset:(long long)arg1 configuration:(id)arg2 isViewingArchive:(_Bool)arg3 scrollOffsetDictionary:(id)arg4;
- (void)setReaderInitialTopScrollOffset:(long long)arg1 configuration:(id)arg2 isViewingArchive:(_Bool)arg3;
- (id)readerControllerProxy;
- (void)invalidate;
- (void)dealloc;
- (void)_setUpReaderActivityListener;
- (id)initWithWebView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

