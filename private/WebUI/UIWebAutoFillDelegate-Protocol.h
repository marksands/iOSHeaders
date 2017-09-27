//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DOMElement, DOMHTMLFormElement, DOMHTMLInputElement, NSArray, NSDictionary, NSString, UIBarButtonItem, UIWebBrowserView, WebFrame;

@protocol UIWebAutoFillDelegate <NSObject>
- (void)webBrowserView:(UIWebBrowserView *)arg1 acceptedAutoFillWord:(NSString *)arg2;
- (NSArray *)webBrowserView:(UIWebBrowserView *)arg1 suggestionsForString:(NSString *)arg2;
- (_Bool)hasCurrentSuggestionsForWebBrowserView:(UIWebBrowserView *)arg1;
- (void)webBrowserView:(UIWebBrowserView *)arg1 didFocusTextField:(DOMHTMLInputElement *)arg2 inFrame:(WebFrame *)arg3;
- (void)webBrowserView:(UIWebBrowserView *)arg1 didEndEditingTextField:(DOMHTMLInputElement *)arg2 inFrame:(WebFrame *)arg3;
- (void)webBrowserView:(UIWebBrowserView *)arg1 didBeginEditingTextField:(DOMHTMLInputElement *)arg2 inFrame:(WebFrame *)arg3;
- (void)webBrowserView:(UIWebBrowserView *)arg1 willSubmitForm:(DOMElement *)arg2 toFrame:(WebFrame *)arg3 fromFrame:(WebFrame *)arg4 withValues:(NSDictionary *)arg5 submissionHandler:(void (^)(void))arg6;
- (void)webBrowserView:(UIWebBrowserView *)arg1 preFillInFrame:(WebFrame *)arg2;
- (void)autoFillInWebBrowserView:(UIWebBrowserView *)arg1;
- (void)webBrowserView:(UIWebBrowserView *)arg1 updateAutoFillButton:(UIBarButtonItem *)arg2;
- (_Bool)webBrowserViewShouldShowAutoFillButton:(UIWebBrowserView *)arg1;

@optional
- (NSString *)titleOfAutoFillButtonInWebBrowserView:(UIWebBrowserView *)arg1;
- (void)webBrowserView:(UIWebBrowserView *)arg1 willSendSubmitEventToForm:(DOMHTMLFormElement *)arg2 inFrame:(WebFrame *)arg3 withValues:(NSDictionary *)arg4;
- (void)webBrowserView:(UIWebBrowserView *)arg1 clearFormAutoFillStateForFrame:(WebFrame *)arg2;
- (void)webBrowserView:(UIWebBrowserView *)arg1 textDidChangeInTextField:(DOMHTMLInputElement *)arg2 inFrame:(WebFrame *)arg3;
@end

