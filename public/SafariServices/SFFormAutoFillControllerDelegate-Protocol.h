//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURL, WBSOneTimeCodeMonitor, _SFFormAutoFillController;

@protocol SFFormAutoFillControllerDelegate <NSObject>
- (_Bool)formAutoFillControllerShouldDisableAutoFill:(_SFFormAutoFillController *)arg1;
- (NSURL *)formAutoFillControllerURLForFormAutoFill:(_SFFormAutoFillController *)arg1;
- (_Bool)formAutoFillControllerCanPrefillForm:(_SFFormAutoFillController *)arg1;

@optional
- (void)formAutoFillControllerUserChoseToUseGeneratedPassword:(_SFFormAutoFillController *)arg1;
- (_Bool)formAutoFillControllerDidUserDeclineAutomaticStrongPasswordForCurrentDomain:(_SFFormAutoFillController *)arg1;
- (WBSOneTimeCodeMonitor *)formAutoFillControllerOneTimeCodeMonitor:(_SFFormAutoFillController *)arg1;
- (_Bool)formAutoFillControllerShouldShowIconsInPasswordPicker:(_SFFormAutoFillController *)arg1;
- (void)formAutoFillControllerGetAuthenticationForAutoFill:(_SFFormAutoFillController *)arg1 onPageLoad:(_Bool)arg2 completion:(void (^)(_Bool))arg3;
- (void)formAutoFillControllerGetAuthenticationForAutoFillOnPageLoad:(_SFFormAutoFillController *)arg1 completion:(void (^)(_Bool))arg2;
- (void)formAutoFillControllerDidFocusSensitiveFormField:(_SFFormAutoFillController *)arg1;
@end

