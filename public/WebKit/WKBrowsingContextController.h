//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, NSURL, WKBackForwardList, WKBrowsingContextHandle, _WKRemoteObjectRegistry;

@interface WKBrowsingContextController : NSObject
{
    struct WeakObjCPtr<id<WKBrowsingContextHistoryDelegate>> _historyDelegate;
    RefPtr_a805eeb8 _page;
    struct unique_ptr<WebKit::PageLoadStateObserver, std::__1::default_delete<WebKit::PageLoadStateObserver>> _pageLoadStateObserver;
    struct WeakObjCPtr<id<WKBrowsingContextLoadDelegate>> _loadDelegate;
    struct WeakObjCPtr<id<WKBrowsingContextPolicyDelegate>> _policyDelegate;
}

+ (id)_browsingContextControllerForPageRef:(struct OpaqueWKPage *)arg1;
+ (id)customSchemes;
+ (void)unregisterSchemeForCustomProtocol:(id)arg1;
+ (void)registerSchemeForCustomProtocol:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_initWithPageRef:(struct OpaqueWKPage *)arg1;
@property __weak id <WKBrowsingContextHistoryDelegate> historyDelegate;
@property __weak id <WKBrowsingContextPolicyDelegate> policyDelegate;
@property __weak id <WKBrowsingContextLoadDelegate> loadDelegate;
@property double pageZoom;
@property double textZoom;
@property(readonly) NSArray *certificateChain;
@property(readonly) NSString *title;
@property(readonly) double estimatedProgress;
@property(readonly) _Bool hasOnlySecureContent;
@property(readonly) NSURL *unreachableURL;
@property(readonly) NSURL *committedURL;
@property(readonly) NSURL *provisionalURL;
@property(readonly) NSURL *activeURL;
@property(readonly, getter=isLoading) _Bool loading;
@property(readonly) WKBackForwardList *backForwardList;
- (void)goToBackForwardListItem:(id)arg1;
@property(readonly) _Bool canGoBack;
- (void)goBack;
@property(readonly) _Bool canGoForward;
- (void)goForward;
@property(copy) NSString *customUserAgent;
@property(copy) NSString *applicationNameForUserAgent;
- (void)reloadFromOrigin;
- (void)reload;
- (void)stopLoading;
- (void)loadData:(id)arg1 MIMEType:(id)arg2 textEncodingName:(id)arg3 baseURL:(id)arg4 userData:(id)arg5;
- (void)loadData:(id)arg1 MIMEType:(id)arg2 textEncodingName:(id)arg3 baseURL:(id)arg4;
- (void)loadAlternateHTMLString:(id)arg1 baseURL:(id)arg2 forUnreachableURL:(id)arg3;
- (void)loadHTMLString:(id)arg1 baseURL:(id)arg2 userData:(id)arg3;
- (void)loadHTMLString:(id)arg1 baseURL:(id)arg2;
- (void)loadFileURL:(id)arg1 restrictToFilesWithin:(id)arg2 userData:(id)arg3;
- (void)loadFileURL:(id)arg1 restrictToFilesWithin:(id)arg2;
- (void)loadRequest:(id)arg1 userData:(id)arg2;
- (void)loadRequest:(id)arg1;
- (void)dealloc;
- (_Bool)_webProcessIsResponsive;
@property(readonly, nonatomic) int processIdentifier;
@property(readonly, nonatomic) _WKRemoteObjectRegistry *_remoteObjectRegistry;
@property(readonly, nonatomic) WKBrowsingContextHandle *handle;
@property(readonly) unsigned long long pageCount;
@property _Bool paginationLineGridEnabled;
@property double gapBetweenPages;
@property double pageLength;
@property _Bool paginationBehavesLikeColumns;
@property unsigned long long paginationMode;
@property(readonly) struct OpaqueWKPage *_pageRef;

@end

