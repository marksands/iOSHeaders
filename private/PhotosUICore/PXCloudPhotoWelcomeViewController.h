//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "AAUIGenericTermsRemoteUIDelegate.h"
#import "PSCloudStorageOffersManagerDelegate.h"
#import "PXCloudPhotoWelcomeNavigationControllerDismissDelegate.h"
#import "PXCloudPhotoWelcomeViewDelegate.h"

@class AAUIGenericTermsRemoteUI, NSString, PSCloudStorageOffersManager, PXCloudPhotoWelcomeView;

@interface PXCloudPhotoWelcomeViewController : UIViewController <PXCloudPhotoWelcomeViewDelegate, PSCloudStorageOffersManagerDelegate, AAUIGenericTermsRemoteUIDelegate, PXCloudPhotoWelcomeNavigationControllerDismissDelegate>
{
    PSCloudStorageOffersManager *_offersManager;
    AAUIGenericTermsRemoteUI *_termsManager;
    _Bool _requireStorageUpgrade;
    _Bool _enableOnAppear;
    PXCloudPhotoWelcomeView *_welcomeView;
}

+ (_Bool)shouldPresentCloudPhotoWelcomeViewController:(_Bool *)arg1;
@property(retain, nonatomic) PXCloudPhotoWelcomeView *welcomeView; // @synthesize welcomeView=_welcomeView;
- (void).cxx_destruct;
- (void)navigationControllerDidDismissViewController:(id)arg1;
- (void)_handleEnableError:(id)arg1;
- (void)genericTermsRemoteUI:(id)arg1 didFinishWithSuccess:(_Bool)arg2;
- (void)managerDidCancel:(id)arg1;
- (void)manager:(id)arg1 loadDidFailWithError:(id)arg2;
- (void)manager:(id)arg1 willPresentViewController:(id)arg2;
- (void)cloudPhotoWelcomeViewLearnMoreTapped:(id)arg1;
- (void)cloudPhotoWelcomeViewNotNowButtonTapped:(id)arg1;
- (void)cloudPhotoWelcomeViewGoButtonTapped:(id)arg1;
- (void)_handleGoButtonTapped;
- (void)_continueWithoutStoragePurchase:(id)arg1;
- (void)_enableCPLDataClass;
- (void)_enableCloudPhotoLibrary;
- (void)_dismiss;
- (void)_presentStoragePurchaseController;
- (void)_enableButtons;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (_Bool)shouldAutorotate;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (void)_updateCurrentActivity;
- (void)viewWillAppear:(_Bool)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

