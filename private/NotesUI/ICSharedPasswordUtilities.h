//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ICSharedPasswordUtilities : NSObject
{
    id _displayedSheet;
}

+ (id)createNoteFromNote:(id)arg1 isPasswordProtected:(_Bool)arg2 removingOriginalNote:(_Bool)arg3;
+ (void)transferSharedPasswordIfNecessary;
+ (void)resetAllSharedPasswords;
+ (void)updateAllNotesWithOldPassword:(id)arg1 toSharedPassword:(id)arg2 fromAccount:(id)arg3;
+ (void)resetTimeoutTimer;
+ (id)nonDeletedLockedNotesFromNotes:(id)arg1;
+ (_Bool)passwordCapabableAccountExists;
+ (id)defaultAccountForPasswordProtectedNotes;
+ (_Bool)setSharedPassword:(id)arg1 hint:(id)arg2 oldPassword:(id)arg3;
+ (_Bool)setSharedPassword:(id)arg1 hint:(id)arg2;
+ (_Bool)isDefaultAccountForPasswordNotesiCloudAccount;
+ (_Bool)isDefaultAccountForPasswordNotesLocalAccount;
+ (_Bool)isPassword:(id)arg1 correctForAccount:(id)arg2;
+ (_Bool)isPassword:(id)arg1 correctForNote:(id)arg2;
+ (_Bool)isSharedPasswordCorrect:(id)arg1;
+ (_Bool)authenticateWithPassword:(id)arg1 forNote:(id)arg2;
+ (_Bool)authenticateWithPassword:(id)arg1 forAccount:(id)arg2;
+ (_Bool)isAuthenticatedForDefaultAccount;
+ (_Bool)isAuthenticatedForNote:(id)arg1;
+ (_Bool)isAuthenticatedForAccount:(id)arg1;
+ (void)lockAllNotes;
+ (_Bool)unlockedNotesOrKeysExist;
+ (_Bool)sharedPasswordExists;
+ (void)showFirstTimePasswordProtectNoteAlertForDisplayWindow:(struct UIWindow *)arg1;
+ (void)showFirstTimePasswordProtectNoteAlertIfNecessaryForDisplayWindow:(struct UIWindow *)arg1;
@property(retain, nonatomic) id displayedSheet; // @synthesize displayedSheet=_displayedSheet;
- (void).cxx_destruct;
- (void)showPasswordEntrySheetWithIntent:(unsigned long long)arg1 note:(id)arg2 displayWindow:(struct UIWindow *)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)showPasswordSetUpSheetForAccount:(id)arg1 displayWindow:(struct UIWindow *)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)authenticateUsingAlternateMethodForDeletingNotes:(id)arg1 displayWindow:(struct UIWindow *)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)authenticatePasswordForDeletingNotes:(id)arg1 displayWindow:(struct UIWindow *)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)authenticateForDeletingNotes:(id)arg1 displayWindow:(struct UIWindow *)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)authenticateIfNecessaryForDeletingNotes:(id)arg1 displayWindow:(struct UIWindow *)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_recursivelyAuthenticateForNotes:(id)arg1 intent:(unsigned long long)arg2 displayWindow:(struct UIWindow *)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)authenticateForNotes:(id)arg1 intent:(unsigned long long)arg2 displayWindow:(struct UIWindow *)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_authenticateForNote:(id)arg1 intent:(unsigned long long)arg2 displayWindow:(struct UIWindow *)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)authenticateForNote:(id)arg1 intent:(unsigned long long)arg2 displayWindow:(struct UIWindow *)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)cryptorCachedKeysDidEmpty:(id)arg1;
- (void)dealloc;
- (id)init;

@end

