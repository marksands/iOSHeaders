//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SFCredentialProviderExtensionManagerObserver.h"
#import "SFFormMetadataObserver.h"
#import "_SFAuthenticationClient.h"
#import "_SFAutoFillInputViewDelegate.h"

@class NSArray, NSMutableIndexSet, NSMutableSet, NSString, NSTimer, SFFormAutoFillFrameHandle, SFFormAutocompleteState, UIView<WBUFormAutoFillWebView>, WBSOneTimeCodeMonitor, WKWebView<WBUFormAutoFillWebView>, _SFAuthenticationContext, _SFAutoFillAuthenticationCache, _SFAutoFillInputView, _SFFormAutoFillInputSession, _WKRemoteObjectInterface;

@interface _SFFormAutoFillController : NSObject <SFCredentialProviderExtensionManagerObserver, _SFAutoFillInputViewDelegate, SFFormMetadataObserver, _SFAuthenticationClient>
{
    WKWebView<WBUFormAutoFillWebView> *_webView;
    id <SFFormAutoFillControllerDelegate> _delegate;
    _WKRemoteObjectInterface *_remoteObjectInterface;
    id <SFFormAutoFiller> _autoFiller;
    _Bool _isCurrentlyAuthenticating;
    long long _authenticationType;
    SFFormAutocompleteState *_state;
    NSTimer *_prefillTimer;
    NSMutableIndexSet *_uniqueIDsOfFormsThatWereAutoFilled;
    NSMutableSet *_uniqueIDsOfControlsThatWereAutoFilled;
    NSString *_uniqueIDOfFocusedPasswordElementWithAutomaticPassword;
    NSArray *_uniqueIDsOfPasswordElementsForAutomaticPasswords;
    SFFormAutoFillFrameHandle *_frameHandleForAutomaticPasswords;
    _SFFormAutoFillInputSession *_inputSessionForAutomaticPasswords;
    _SFAutoFillInputView *_autoFillInputView;
    _Bool _metadataCorrectionsEnabled;
}

@property(nonatomic) _Bool metadataCorrectionsEnabled; // @synthesize metadataCorrectionsEnabled=_metadataCorrectionsEnabled;
- (void).cxx_destruct;
- (void)credentialProviderExtensionManagerExtensionListDidChange:(id)arg1;
- (void)autoFillInputViewDidSelectMorePasswords:(id)arg1;
- (void)autoFillInputViewDidSelectUseKeyboard:(id)arg1;
- (void)_didFocusSensitiveFormField;
- (_Bool)elementIsBeingFocusedForStreamlinedLogin:(id)arg1;
- (id)_beginAutomaticPasswordInteractionWithInputSession:(id)arg1 generatedPassword:(id)arg2 ignorePreviousDecision:(_Bool)arg3;
- (id)beginAutomaticPasswordInteractionWithInputSession:(id)arg1;
- (void)beginAutomaticPasswordInteractionWithInputSession:(id)arg1 generatedPassword:(id)arg2;
- (id)automaticPasswordForPasswordField:(id)arg1 inForm:(id)arg2 isFrame:(id)arg3;
- (void)prepareForShowingAutomaticStrongPasswordWithInputSession:(id)arg1;
- (void)automaticPasswordSheetDismissed;
- (void)removeAutomaticPasswordButtonInitiatedByUser:(_Bool)arg1;
- (void)didRemoveAutomaticStrongPasswordInForm:(id)arg1 inputSessionUserObject:(id)arg2 inFrame:(id)arg3;
- (void)autoFillDidFinishWithUpdatedFormMetadata:(id)arg1;
- (void)_removeUniqueIDsOfAutoFilledForm:(id)arg1;
- (void)_addUniqueIDsOfAutoFilledForm:(id)arg1;
- (void)willNavigateFrame:(id)arg1 withUnsubmittedForm:(id)arg2 loadingIsDeferred:(_Bool)arg3;
- (void)didFillGeneratedPasswordInForm:(id)arg1 inFrame:(id)arg2;
- (void)textDidChangeInTextField:(id)arg1 inForm:(id)arg2 inFrame:(id)arg3;
- (void)didCollectFormMetadataForPreFilling:(id)arg1 atURL:(id)arg2 ancestorFramesOfFormToPreFill:(id)arg3;
- (id)authenticationCustomUIProgressObserverForContext:(id)arg1;
- (_Bool)displayMessageAsTitleForContext:(id)arg1;
- (id)passcodePromptForContext:(id)arg1;
- (id)authenticationMessageForContext:(id)arg1;
- (id)_websiteForAuthenticationPrompt;
@property(readonly, nonatomic) WBSOneTimeCodeMonitor *oneTimeCodeMonitor;
- (void)authenticateForAutoFillOnPageLoad:(_Bool)arg1 forAuthenticationType:(long long)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)_authenticateForAutoFillForHighLevelDomain:(id)arg1 onPageLoad:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) _SFAuthenticationContext *authenticationContext;
@property(readonly, nonatomic) _SFAutoFillAuthenticationCache *authenticationCache;
- (void)_didCollectURLsForPreFilling:(id)arg1 atURL:(id)arg2;
- (void)didCollectURLsForPreFilling:(id)arg1 atURL:(id)arg2;
- (void)willSubmitFormValues:(id)arg1 userObject:(id)arg2 submissionHandler:(CDUnknownBlockType)arg3;
- (void)_fieldFocusedWithInputSession:(id)arg1;
- (void)fieldFocusedWithInputSession:(id)arg1;
- (void)fieldDidFocusWithInputSession:(id)arg1;
- (void)fieldWillFocusWithInputSession:(id)arg1;
@property(readonly, nonatomic) UIView<WBUFormAutoFillWebView> *webView;
- (void)_autoFillLoginFormSynchronouslyAndClearMetadata:(id)arg1 inFrame:(id)arg2;
- (void)willSubmitForm:(id)arg1 inFrame:(id)arg2 submissionHandler:(CDUnknownBlockType)arg3;
- (void)setFormControls:(id)arg1 areAutoFilled:(_Bool)arg2 andClearField:(id)arg3 inFrame:(id)arg4;
- (void)autoFillOneTimeCodeFieldsInFrame:(id)arg1 withValue:(id)arg2;
- (void)fillTextField:(id)arg1 inFrame:(id)arg2 withGeneratedPassword:(id)arg3;
- (void)annotateForm:(long long)arg1 inFrame:(id)arg2 withValues:(id)arg3;
- (void)autoFillForm:(long long)arg1 inFrame:(id)arg2 withGeneratedPassword:(id)arg3;
- (void)autoFillFormInFrame:(id)arg1 withValues:(id)arg2 setAutoFilled:(_Bool)arg3 focusFieldAfterFilling:(_Bool)arg4 fieldToFocus:(id)arg5 submitForm:(_Bool)arg6;
- (void)autoFillFormInFrame:(id)arg1 withValues:(id)arg2 setAutoFilled:(_Bool)arg3 focusFieldAfterFilling:(_Bool)arg4 fieldToFocus:(id)arg5;
- (void)autoFillFormInFrame:(id)arg1 withValues:(id)arg2 setAutoFilled:(_Bool)arg3 andFocusField:(id)arg4;
- (void)fetchMetadataForTextField:(id)arg1 inFrame:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)textFieldFocused:(id)arg1 inForm:(id)arg2 inFrame:(id)arg3 inputSession:(id)arg4;
- (void)passwordFieldFocused:(id)arg1 inForm:(id)arg2 inFrame:(id)arg3 inputSession:(id)arg4;
- (void)usernameFieldFocused:(id)arg1 inForm:(id)arg2 inFrame:(id)arg3 inputSession:(id)arg4;
- (void)_fieldFocused:(id)arg1 inForm:(id)arg2 inFrame:(id)arg3 inputSession:(id)arg4;
- (void)updateSuggestions;
- (_Bool)shouldShowIconsInPasswordPicker;
- (void)insertTextSuggestion:(id)arg1;
- (void)autoFill;
- (void)prefillFormsSoonIfNeeded;
- (void)_prefillTimerFired:(id)arg1;
- (void)invalidate;
- (void)dealloc;
- (id)initWithWebView:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

