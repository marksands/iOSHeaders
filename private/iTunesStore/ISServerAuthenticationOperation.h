//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class ISDialog, ISDialogButton, NSNumber, NSURL, SSAuthenticationContext;

@interface ISServerAuthenticationOperation : ISOperation
{
    NSNumber *_authenticatedAccountDSID;
    SSAuthenticationContext *_authenticationContext;
    ISDialog *_dialog;
    _Bool _performsButtonAction;
    ISDialogButton *_performedButton;
    NSURL *_redirectURL;
    ISDialogButton *_selectedButton;
}

@property(retain) ISDialogButton *selectedButton; // @synthesize selectedButton=_selectedButton;
@property(retain) NSURL *redirectURL; // @synthesize redirectURL=_redirectURL;
@property _Bool performsButtonAction; // @synthesize performsButtonAction=_performsButtonAction;
@property(retain) ISDialogButton *performedButton; // @synthesize performedButton=_performedButton;
@property(retain) ISDialog *dialog; // @synthesize dialog=_dialog;
@property(retain) NSNumber *authenticatedAccountDSID; // @synthesize authenticatedAccountDSID=_authenticatedAccountDSID;
@property(retain) SSAuthenticationContext *authenticationContext; // @synthesize authenticationContext=_authenticationContext;
- (void)run;
- (void)dealloc;
- (id)init;

@end

