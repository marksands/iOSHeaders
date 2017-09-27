//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <WebUI/WBUFormDataController.h>

#import "UIWebAutoFillDelegate.h"

@class NSHashTable, NSString, WBUFormAutoCompleteStateWK1;

@interface WBUFormDataControllerWK1 : WBUFormDataController <UIWebAutoFillDelegate>
{
    WBUFormAutoCompleteStateWK1 *_autoCompleteState;
    NSHashTable *_webBrowserViewsWithUnsubmittedForms;
}

+ (id)sharedFormDataController;
- (void).cxx_destruct;
- (void)webBrowserView:(id)arg1 clearFormAutoFillStateForFrame:(id)arg2;
- (void)webBrowserView:(id)arg1 acceptedAutoFillWord:(id)arg2;
- (id)webBrowserView:(id)arg1 suggestionsForString:(id)arg2;
- (_Bool)hasCurrentSuggestionsForWebBrowserView:(id)arg1;
- (void)webBrowserView:(id)arg1 textDidChangeInTextField:(id)arg2 inFrame:(id)arg3;
- (void)webBrowserView:(id)arg1 didFocusTextField:(id)arg2 inFrame:(id)arg3;
- (void)webBrowserView:(id)arg1 didEndEditingTextField:(id)arg2 inFrame:(id)arg3;
- (void)webBrowserView:(id)arg1 didBeginEditingTextField:(id)arg2 inFrame:(id)arg3;
- (void)webBrowserView:(id)arg1 willSubmitForm:(id)arg2 toFrame:(id)arg3 fromFrame:(id)arg4 withValues:(id)arg5 submissionHandler:(CDUnknownBlockType)arg6;
- (void)webBrowserView:(id)arg1 willSendSubmitEventToForm:(id)arg2 inFrame:(id)arg3 withValues:(id)arg4;
- (void)webBrowserView:(id)arg1 preFillInFrame:(id)arg2;
- (void)autoFillInWebBrowserView:(id)arg1;
- (void)webBrowserView:(id)arg1 updateAutoFillButton:(id)arg2;
- (_Bool)webBrowserViewShouldShowAutoFillButton:(id)arg1;
- (id)titleOfAutoFillButtonInWebBrowserView:(id)arg1;
- (void)_unregisterWebBrowserViewWithUnsubmittedForm:(id)arg1;
- (void)_registerWebBrowserViewWithUnsubmittedForm:(id)arg1;
- (void)_webViewWillClose:(id)arg1;
- (void)_applicationWillTerminate:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_saveUnsubmittedGeneratedPasswords;
- (void)_recursivelySaveUnsubmittedGeneratedPasswordsInWebBrowserView:(id)arg1 frame:(id)arg2;
- (void)didFocusTextField:(id)arg1 inFrame:(id)arg2;
- (void)didEndEditingTextField:(id)arg1 inFrame:(id)arg2;
- (void)clearFormAutoFillStateForFrame:(id)arg1;
- (id)decisionListenerForAction:(id)arg1 frame:(id)arg2 originalListener:(id)arg3;
- (id)_formMetadataAndFrame:(id *)arg1 forPolicyAction:(id)arg2 frame:(id)arg3;
- (void)_autoFillLoginForm:(id)arg1 inFrame:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

