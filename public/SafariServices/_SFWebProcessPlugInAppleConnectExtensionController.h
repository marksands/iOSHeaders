//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "_SFAppleConnectExtensionMessageReceiver.h"

@class NSString, WKWebProcessPlugInScriptWorld, _SFWebProcessPlugInPageController, _WKRemoteObjectInterface;

__attribute__((visibility("hidden")))
@interface _SFWebProcessPlugInAppleConnectExtensionController : NSObject <_SFAppleConnectExtensionMessageReceiver>
{
    _SFWebProcessPlugInPageController *_pageController;
    id <_SFAppleConnectExtensionContentScriptMessageReceiver> _appleConnectExtensionContentScriptMessageReceiver;
    _WKRemoteObjectInterface *_extensionMessageReceiverInterface;
    WKWebProcessPlugInScriptWorld *_isolatedWorld;
}

- (void).cxx_destruct;
- (void)dispatchMessageToContentScriptWithName:(id)arg1 userInfo:(id)arg2;
- (void)dispatchMessageFromContentScript:(id)arg1 userInfo:(id)arg2;
- (id)_appleConnectExtensionContentScriptMessageReceiver;
- (void)injectAppleConnectBindingsForFrame:(id)arg1 inScriptWorld:(id)arg2;
- (void)invalidate;
- (id)initWithPageController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

