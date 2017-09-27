//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIActionSheetDelegate.h"

@class NSString, UIAlertController;

@interface EKUISendInviteAlertController : NSObject <UIActionSheetDelegate>
{
    CDUnknownBlockType _completionHandler;
    UIAlertController *_alertController;
    EKUISendInviteAlertController *_strongSelf;
}

+ (id)presentInviteAlertWithOptions:(unsigned long long)arg1 viewController:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
+ (id)newAlertControllerWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(retain) EKUISendInviteAlertController *strongSelf; // @synthesize strongSelf=_strongSelf;
@property(retain) UIAlertController *alertController; // @synthesize alertController=_alertController;
@property(copy) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void).cxx_destruct;
- (void)_cleanup;
- (void)_completeWithSelection:(int)arg1;
- (void)cancelAnimated:(_Bool)arg1;
- (void)_presentAlertWithOptions:(unsigned long long)arg1 viewController:(id)arg2;
- (_Bool)_useSheetForViewController:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

