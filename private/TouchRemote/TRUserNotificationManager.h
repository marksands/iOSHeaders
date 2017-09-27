//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class _TRUserNotification;

@interface TRUserNotificationManager : NSObject
{
    _TRUserNotification *_activeUserNotification;
}

+ (id)sharedInstance;
@property(retain, nonatomic) _TRUserNotification *activeUserNotification; // @synthesize activeUserNotification=_activeUserNotification;
- (void).cxx_destruct;
- (void)presentLegacyAuthenticationFailedDialogWithMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestLegacyAuthenticationWithAccountID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)cancel;
- (void)presentWiFiNetworkConnectionError:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentErrorWithTitle:(id)arg1 message:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)requestPermissionForDiagnosticSubmissionWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentAuthenticationFailureWithMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestAppleIDAuthenticationWithAccountID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestAuthenticationWithAccountID:(id)arg1 message:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)requestPermissionToInitiateSetupWithCompletion:(CDUnknownBlockType)arg1;
- (void)_showUserNotificationWithDictionary:(id)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dealloc;

@end

