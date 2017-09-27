//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class ISDialog, ISDialogButton, NSArray;

@interface ISDialogOperation : ISOperation
{
    ISDialog *_dialog;
    _Bool _performDefaultActions;
    ISDialogButton *_selectedButton;
    NSArray *_textFieldValues;
    id _userNotification;
}

+ (id)operationWithError:(id)arg1;
+ (id)operationWithDialog:(id)arg1;
@property(retain) id userNotification; // @synthesize userNotification=_userNotification;
@property(retain) ISDialogButton *selectedButton; // @synthesize selectedButton=_selectedButton;
@property _Bool performDefaultActions; // @synthesize performDefaultActions=_performDefaultActions;
@property(retain) ISDialog *dialog; // @synthesize dialog=_dialog;
- (void)_waitForUserNotificationResponse:(struct __CFUserNotification *)arg1;
- (void)_showUserNotification:(id)arg1;
- (void)_run;
- (void)_handleResponseForNotification:(struct __CFUserNotification *)arg1 responseFlags:(unsigned long long)arg2;
- (void)run;
- (void)cancel;
@property(readonly) NSArray *textFieldValues;
- (void)handleButtonSelected:(long long)arg1 withResponseDictionary:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property id <ISDialogOperationDelegate> delegate; // @dynamic delegate;

@end

