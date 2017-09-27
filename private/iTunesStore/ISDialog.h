//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SSXPCCoding.h"

@class NSArray, NSLock, NSMutableDictionary, NSString, SSAuthenticationContext, SSPaymentSheet;

@interface ISDialog : NSObject <SSXPCCoding>
{
    _Bool _allowsBioAuthorization;
    _Bool _allowDuplicates;
    SSAuthenticationContext *_authenticationContext;
    _Bool _authorizationIsForced;
    NSArray *_buttons;
    long long _defaultButtonIndex;
    NSString *_displayCountKey;
    _Bool _dismissOnHomeButton;
    _Bool _dismissOnLock;
    _Bool _expectsResponse;
    _Bool _groupsTextFields;
    long long _kind;
    NSLock *_lock;
    long long _maxDisplayCount;
    NSString *_message;
    _Bool _noDefaultButton;
    _Bool _oneButtonPerLine;
    _Bool _shouldDismissAfterUnlock;
    _Bool _shouldDisplayAsTopMost;
    _Bool _shouldPendInSetupIfNotAllowed;
    NSArray *_textFields;
    NSString *_title;
    long long _unlockActionButtonIndex;
    NSMutableDictionary *_userInfo;
    struct __CFDictionary *_userNotificationValues;
    _Bool _displaysOnLockscreen;
    SSPaymentSheet *_paymentSheet;
    NSString *_touchIDContinueToken;
}

+ (long long)displayCountForKey:(id)arg1;
@property(copy) NSString *touchIDContinueToken; // @synthesize touchIDContinueToken=_touchIDContinueToken;
@property(readonly) SSPaymentSheet *paymentSheet; // @synthesize paymentSheet=_paymentSheet;
@property _Bool displaysOnLockscreen; // @synthesize displaysOnLockscreen=_displaysOnLockscreen;
@property long long unlockActionButtonIndex; // @synthesize unlockActionButtonIndex=_unlockActionButtonIndex;
@property(retain) NSString *title; // @synthesize title=_title;
@property(retain) NSArray *textFields; // @synthesize textFields=_textFields;
@property _Bool shouldPendInSetupIfNotAllowed; // @synthesize shouldPendInSetupIfNotAllowed=_shouldPendInSetupIfNotAllowed;
@property _Bool shouldDisplayAsTopMost; // @synthesize shouldDisplayAsTopMost=_shouldDisplayAsTopMost;
@property _Bool shouldDismissAfterUnlock; // @synthesize shouldDismissAfterUnlock=_shouldDismissAfterUnlock;
@property _Bool oneButtonPerLine; // @synthesize oneButtonPerLine=_oneButtonPerLine;
@property _Bool noDefaultButton; // @synthesize noDefaultButton=_noDefaultButton;
@property(retain) NSString *message; // @synthesize message=_message;
@property long long kind; // @synthesize kind=_kind;
@property _Bool groupsTextFields; // @synthesize groupsTextFields=_groupsTextFields;
@property _Bool expectsResponse; // @synthesize expectsResponse=_expectsResponse;
@property _Bool dismissOnLock; // @synthesize dismissOnLock=_dismissOnLock;
@property _Bool dismissOnHomeButton; // @synthesize dismissOnHomeButton=_dismissOnHomeButton;
@property long long defaultButtonIndex; // @synthesize defaultButtonIndex=_defaultButtonIndex;
@property(retain) NSArray *buttons; // @synthesize buttons=_buttons;
@property _Bool authorizationIsForced; // @synthesize authorizationIsForced=_authorizationIsForced;
@property(copy) SSAuthenticationContext *authenticationContext; // @synthesize authenticationContext=_authenticationContext;
@property _Bool allowDuplicates; // @synthesize allowDuplicates=_allowDuplicates;
- (void).cxx_destruct;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (long long)_kindForString:(id)arg1;
- (id)buyParams;
@property(readonly) _Bool allowsBioAuthorization;
- (id)valueForUserInfoKey:(id)arg1;
- (void)setValue:(void *)arg1 forCFUserNotificationKey:(struct __CFString *)arg2;
- (void)setValue:(id)arg1 forUserInfoKey:(id)arg2;
@property long long maximumDisplayCount;
@property(copy) NSString *displayCountKey;
- (void)setButtonsWithTitles:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, getter=isDisplayable) _Bool displayable;
- (void)incrementDisplayCount;
- (void *)copyValueForCFUserNotificationKey:(struct __CFString *)arg1;
- (id)copyUserNotification;
- (void)dealloc;
- (id)initWithTitle:(id)arg1 message:(id)arg2;
- (id)initWithOfferDeviceError:(id)arg1;
- (id)initWithError:(id)arg1;
- (id)initWithDialogDictionary:(id)arg1;
- (id)init;
- (id)initWithAuthenticationChallege:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

