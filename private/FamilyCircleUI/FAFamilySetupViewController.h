//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppleAccountUI/AAUIBleachedNavigationController.h>

#import <FamilyCircleUI/FAFamilySetupPageDelegate-Protocol.h>
#import <FamilyCircleUI/RemoteUIControllerDelegate-Protocol.h>

@class AAGrandSlamSigner, ACAccount, ACAccountStore, NSArray, NSMutableURLRequest, NSString, RemoteUIController, UIActivityIndicatorView, UINavigationItem;
@protocol FASetupDelegate;

@interface FAFamilySetupViewController : AAUIBleachedNavigationController <FAFamilySetupPageDelegate, RemoteUIControllerDelegate>
{
    ACAccount *_account;
    ACAccountStore *_accountStore;
    AAGrandSlamSigner *_grandSlamSigner;
    RemoteUIController *_remoteUIController;
    NSMutableURLRequest *_startRemoteUIRequest;
    NSMutableURLRequest *_currentRemoteUIRequest;
    _Bool _isShowingSpinner;
    UIActivityIndicatorView *_spinnerView;
    NSArray *_originalRightBarButtonItems;
    UINavigationItem *_navigationItemShowingSpinner;
}

- (void).cxx_destruct;
- (void)_sendUserToiTunesSettings;
- (void)_remoteUIDidCancel;
- (void)remoteUIControllerDidDismiss:(id)arg1;
- (void)remoteUIController:(id)arg1 didReceiveHTTPResponse:(id)arg2;
- (_Bool)remoteUIController:(id)arg1 shouldLoadRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)remoteUIController:(id)arg1 willPresentObjectModel:(id)arg2 modally:(_Bool)arg3;
- (void)_loadRemoteUIPages;
- (void)_hideActivitySpinnerInNavigationBar;
- (void)_showActivitySpinnerInNavigationBar;
- (void)_closeButtonWasTapped:(id)arg1;
- (id)_createCloseButton;
- (id)_urlForLaunchingSettings;
- (_Bool)_isRunningInSettings;
- (void)familySetupPage:(id)arg1 didCompleteWithSuccess:(_Bool)arg2;
- (_Bool)shouldAutorotate;
- (void)viewDidLoad;
- (void)dealloc;
- (id)_initWithAccount:(id)arg1 grandSlamSigner:(id)arg2 rootViewController:(id)arg3;
- (id)initTrimmedFlowWithAccount:(id)arg1 grandSlamSigner:(id)arg2;
- (id)initWithAccount:(id)arg1 grandSlamSigner:(id)arg2 familyEligibilityResponse:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <FASetupDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

