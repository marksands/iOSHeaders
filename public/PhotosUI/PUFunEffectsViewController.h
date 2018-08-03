//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "PUOneUpAssetTransitionViewController.h"
#import "PXChangeObserver.h"

@class NSString, PUMediaProvider, PUObserverRegistry, PUProgressIndicatorView, PUReviewAdjustmentOutput, PUReviewAsset, PUReviewScreenBarsModel, PUReviewScreenControlBar, PUReviewScreenTopBar;

@interface PUFunEffectsViewController : UIViewController <PXChangeObserver, PUOneUpAssetTransitionViewController>
{
    _Bool __inputHasKnownAdjustments;
    _Bool __shouldHideBars;
    PUReviewAsset *_reviewAsset;
    PUMediaProvider *_mediaProvider;
    PUReviewScreenBarsModel *_reviewBarsModel;
    PUObserverRegistry *__observerRegistry;
    UIViewController *__effectsViewController;
    PUReviewScreenTopBar *__topBar;
    PUReviewScreenControlBar *__controlBar;
    long long __inputAdjustmentBaseVersion;
    PUReviewAdjustmentOutput *__exportAdjustmentOutput;
    unsigned long long __exportCompletion;
    PUProgressIndicatorView *__progressIndicatorView;
}

@property(nonatomic, setter=_setShouldHideBars:) _Bool _shouldHideBars; // @synthesize _shouldHideBars=__shouldHideBars;
@property(retain, nonatomic, setter=_setProgressIndicatorView:) PUProgressIndicatorView *_progressIndicatorView; // @synthesize _progressIndicatorView=__progressIndicatorView;
@property(nonatomic) unsigned long long _exportCompletion; // @synthesize _exportCompletion=__exportCompletion;
@property(retain, nonatomic) PUReviewAdjustmentOutput *_exportAdjustmentOutput; // @synthesize _exportAdjustmentOutput=__exportAdjustmentOutput;
@property(readonly, nonatomic) long long _inputAdjustmentBaseVersion; // @synthesize _inputAdjustmentBaseVersion=__inputAdjustmentBaseVersion;
@property(readonly, nonatomic) _Bool _inputHasKnownAdjustments; // @synthesize _inputHasKnownAdjustments=__inputHasKnownAdjustments;
@property(readonly, nonatomic) PUReviewScreenControlBar *_controlBar; // @synthesize _controlBar=__controlBar;
@property(readonly, nonatomic) PUReviewScreenTopBar *_topBar; // @synthesize _topBar=__topBar;
@property(readonly, nonatomic) UIViewController *_effectsViewController; // @synthesize _effectsViewController=__effectsViewController;
@property(readonly, nonatomic) PUObserverRegistry *_observerRegistry; // @synthesize _observerRegistry=__observerRegistry;
@property(retain, nonatomic) PUReviewScreenBarsModel *reviewBarsModel; // @synthesize reviewBarsModel=_reviewBarsModel;
@property(readonly, nonatomic) PUMediaProvider *mediaProvider; // @synthesize mediaProvider=_mediaProvider;
@property(readonly, nonatomic) PUReviewAsset *reviewAsset; // @synthesize reviewAsset=_reviewAsset;
- (void).cxx_destruct;
- (void)unregisterObserver:(id)arg1;
- (void)registerObserver:(id)arg1;
- (void)_signalCompletion:(unsigned long long)arg1 withSavedAsset:(id)arg2;
- (void)_updateProgressIndicatorWithProgress:(double)arg1;
- (void)_dismissProgressIndicator;
- (void)_showProgressIndicator;
- (void)_finishExportingWithMediaItem:(id)arg1;
- (void)_handleExportFailureWithError:(id)arg1;
- (void)_exportWithCompletion:(unsigned long long)arg1;
- (void)_handleExportWithCompletion:(unsigned long long)arg1;
- (void)_handleDismissCompletion;
- (void)_handleCompletion:(unsigned long long)arg1;
- (void)oneUpAssetTransitionDidEnd:(id)arg1;
- (void)oneUpAssetTransitionWillBegin:(id)arg1;
- (void)oneUpAssetTransition:(id)arg1 animateTransitionWithContext:(id)arg2 duration:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)oneUpAssetTransition:(id)arg1 requestTransitionContextWithCompletion:(CDUnknownBlockType)arg2;
- (void)reviewViewControllerDidShowUserInterface:(id)arg1;
- (void)reviewViewControllerDidHideUserInterface:(id)arg1;
- (void)reviewViewController:(id)arg1 didStartExportingMediaItem:(id)arg2;
- (void)reviewViewController:(id)arg1 didFinishExportingMediaItem:(id)arg2 withError:(id)arg3;
- (void)reviewViewController:(id)arg1 didProgress:(double)arg2 exportingMediaItem:(id)arg3;
- (void)reviewViewControllerEffectsButtonWasTapped:(id)arg1;
- (void)_handleDidTapSendButton:(id)arg1;
- (void)_handleDidTapEditButton:(id)arg1;
- (void)_handleDidTapMarkupButton:(id)arg1;
- (void)_handleDidTapFunEffectsButton:(id)arg1;
- (void)_handleDidTapDoneButton:(id)arg1;
- (void)_handleDidTapRetakeButton:(id)arg1;
- (void)_setShouldHideBars:(_Bool)arg1 animated:(_Bool)arg2;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (id)_barControlsForModelControls:(id)arg1 transitioning:(_Bool)arg2;
- (void)_updateBars;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithReviewAsset:(id)arg1 mediaProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

