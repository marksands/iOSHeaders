//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIWebViewDelegate.h"
#import "UIWebViewPrivateDelegate.h"
#import "WKNavigationDelegate.h"

@class NSMutableURLRequest, NSObject<SL_OOPAuthFlowDelegate>, NSString, NSURL, SL_OOPASpinnerTitle, UIWebView, WKWebView;

@interface SL_OOPAWebViewController : UIViewController <WKNavigationDelegate, UIWebViewDelegate, UIWebViewPrivateDelegate>
{
    WKWebView *_wkWebView;
    UIWebView *_uiWebView;
    SL_OOPASpinnerTitle *_spinnerTitleView;
    NSMutableURLRequest *_urlRequest;
    struct __CFURLStorageSession *_storageSession;
    _Bool _hidingWebView;
    id <SL_OOPAWebViewControllerDelegate> _delegate;
    NSObject<SL_OOPAuthFlowDelegate> *_authFlowDelegate;
    NSURL *_authURL;
    NSString *_username;
}

@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(copy, nonatomic) NSURL *authURL; // @synthesize authURL=_authURL;
@property(retain, nonatomic) NSObject<SL_OOPAuthFlowDelegate> *authFlowDelegate; // @synthesize authFlowDelegate=_authFlowDelegate;
@property(nonatomic) __weak id <SL_OOPAWebViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_updateNavigationPromptWithActiveURL:(id)arg1;
- (void)_cancelButtonTapped:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)_loadWebView;
- (void)_loadWebViewIfReady;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
@property(copy, nonatomic) NSString *navBarTitle;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

