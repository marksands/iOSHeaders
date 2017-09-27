//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UINavigationController.h"

@class NSString, UIAlertController;

@interface GKFriendRequestComposeViewController : UINavigationController
{
    unsigned int _rid;
    id <GKFriendRequestComposeViewControllerDelegate> _composeViewDelegateWeak;
    NSString *_message;
    unsigned long long _recipientCount;
    UIAlertController *_alertController;
}

+ (unsigned long long)maxNumberOfRecipients;
+ (_Bool)_preventsAppearanceProxyCustomization;
@property(retain, nonatomic) UIAlertController *alertController; // @synthesize alertController=_alertController;
@property(nonatomic) unsigned long long recipientCount; // @synthesize recipientCount=_recipientCount;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
- (void)sendFinishedMessageToDelegateCancelled:(_Bool)arg1;
- (void)addRecipientsWithEmailAddresses:(id)arg1;
- (void)addRecipientsWithPlayerIDs:(id)arg1;
- (void)addRecipientPlayers:(id)arg1;
- (void)_addRecipientInternals:(id)arg1;
- (void)prepareForNewRecipients:(id)arg1;
@property(nonatomic) unsigned int rid; // @synthesize rid=_rid;
@property(nonatomic) id <GKFriendRequestComposeViewControllerDelegate> composeViewDelegate; // @synthesize composeViewDelegate=_composeViewDelegateWeak;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (_Bool)shouldAutomaticallyForwardRotationMethods;
- (_Bool)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (unsigned long long)supportedInterfaceOrientations;
- (void)_setupChildViewController;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (id)init;

@end

