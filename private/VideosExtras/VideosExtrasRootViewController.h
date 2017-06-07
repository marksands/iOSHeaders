//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <VideosExtras/IKAppContextDelegate-Protocol.h>
#import <VideosExtras/IKAppDeviceConfig-Protocol.h>
#import <VideosExtras/IKApplication-Protocol.h>
#import <VideosExtras/MPVideoOverlayDelegate-Protocol.h>
#import <VideosExtras/UICollectionViewDelegate-Protocol.h>
#import <VideosExtras/UINavigationControllerDelegate-Protocol.h>

@class IKAppContext, NSArray, NSLayoutConstraint, NSObject, NSString, UINavigationController, UITraitCollection, UIView, VideosExtrasArtworkDataSource, VideosExtrasContext, VideosExtrasFeatureContainerViewController, VideosExtrasMainTemplateViewController, VideosExtrasNavigationController;
@protocol IKAppDataStoring, IKAppUserDefaultsStoring, OS_dispatch_queue;

@interface VideosExtrasRootViewController : UIViewController <IKApplication, IKAppContextDelegate, UINavigationControllerDelegate, UICollectionViewDelegate, IKAppDeviceConfig, MPVideoOverlayDelegate>
{
    NSLayoutConstraint *_bottomConstraint;
    VideosExtrasNavigationController *_navigationController;
    NSObject<OS_dispatch_queue> *_imageRequestQueue;
    _Bool _didAttemptRestartAfterAppContextFailure;
    VideosExtrasMainTemplateViewController *_mainTemplateViewController;
    VideosExtrasContext *_context;
    VideosExtrasFeatureContainerViewController *_featureContainer;
    IKAppContext *_applicationContext;
    NSArray *_lastSelectedSnapshotViewControllers;
    id <IKAppDataStoring> _localStorage;
    id <IKAppDataStoring> _vendorStorage;
    id <IKAppUserDefaultsStoring> _userDefaultsStorage;
    VideosExtrasArtworkDataSource *_artworkDataSource;
}

+ (id)currentController;
@property(retain, nonatomic) VideosExtrasArtworkDataSource *artworkDataSource; // @synthesize artworkDataSource=_artworkDataSource;
@property(retain, nonatomic) id <IKAppUserDefaultsStoring> userDefaultsStorage; // @synthesize userDefaultsStorage=_userDefaultsStorage;
@property(retain, nonatomic) id <IKAppDataStoring> vendorStorage; // @synthesize vendorStorage=_vendorStorage;
@property(retain, nonatomic) id <IKAppDataStoring> localStorage; // @synthesize localStorage=_localStorage;
@property(retain, nonatomic) NSArray *lastSelectedSnapshotViewControllers; // @synthesize lastSelectedSnapshotViewControllers=_lastSelectedSnapshotViewControllers;
@property(retain, nonatomic) IKAppContext *applicationContext; // @synthesize applicationContext=_applicationContext;
@property(retain, nonatomic) VideosExtrasFeatureContainerViewController *featureContainer; // @synthesize featureContainer=_featureContainer;
@property(readonly, nonatomic) __weak VideosExtrasContext *context; // @synthesize context=_context;
@property(retain, nonatomic) VideosExtrasMainTemplateViewController *mainTemplateViewController; // @synthesize mainTemplateViewController=_mainTemplateViewController;
@property(readonly, nonatomic) UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
- (void).cxx_destruct;
- (void)_showExtrasBar:(_Bool)arg1;
- (_Bool)_shouldExtrasBeVisibleForViewSize:(struct CGSize)arg1;
- (_Bool)_areExtrasVisible;
- (void)_adjustExtrasVisibilityForViewSize:(struct CGSize)arg1;
- (void)overlayTappedBackButton:(id)arg1;
@property(readonly, nonatomic) UIView *mainMenuBar;
- (void)_finalizeMainTemplateOffset:(_Bool)arg1;
- (void)_applyMainTemplateOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)detectMainDocument:(id)arg1;
- (_Bool)_setMainDocumentWithViewController:(id)arg1;
- (void)_setNavigationController:(id)arg1;
- (id)_createDataStorageForIdentifier:(id)arg1;
- (id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (_Bool)shouldAutorotate;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (_Bool)prefersStatusBarHidden;
- (id)storeFrontCountryCode;
- (id)systemLanguage;
- (id)timeZone;
- (_Bool)isTimeZoneSet;
- (struct CGSize)screenSize;
- (unsigned long long)preferredVideoPreviewFormat;
- (unsigned long long)preferredVideoFormat;
- (void)appContext:(id)arg1 didStopWithOptions:(id)arg2;
- (void)appContext:(id)arg1 didFailWithError:(id)arg2;
- (void)_attemptRestart;
- (void)appContext:(id)arg1 didStartWithOptions:(id)arg2;
- (void)appContext:(id)arg1 evaluateAppJavaScriptInContext:(id)arg2;
- (id)navigationControllerForContext:(id)arg1;
- (id)deviceConfigForContext:(id)arg1;
- (id)viewElementRegistry;
- (_Bool)appUsesDefaultStyleSheets;
- (id)appLaunchParams;
- (id)vendorIdentifier;
- (id)appIdentifier;
- (_Bool)shouldIgnoreJSValidation;
- (id)appJSURL;
- (_Bool)appIsTrusted;
- (void)popToFeatureOrMain;
- (void)start;
- (void)_stopOldContextIfNeeded;
- (void)dealloc;
- (id)initWithContext:(id)arg1;
- (void)_setUpForApplication;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) UITraitCollection *overrideTraitCollection; // @dynamic overrideTraitCollection;
@property(readonly) Class superclass;

@end

