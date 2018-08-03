//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "PKPassFaceDelegate.h"
#import "PKPasscodeLockManagerObserver.h"
#import "UIGestureRecognizerDelegate.h"

@class NSString, PKPass, PKPassColorProfile, PKPassFrontFaceView, PKPasscodeLockManager, UITapGestureRecognizer;

@interface PKPassView : UIView <PKPassFaceDelegate, UIGestureRecognizerDelegate, PKPasscodeLockManagerObserver>
{
    PKPassFrontFaceView *_frontFace;
    PKPassColorProfile *_colorProfile;
    UITapGestureRecognizer *_tapRecognizer;
    long long _priorContentMode;
    PKPasscodeLockManager *_passcodeLockManager;
    unsigned long long _contentModeToken;
    NSString *_suppressingIdentifier;
    _Bool _modallyPresented;
    PKPass *_pass;
    id <WLCardViewDelegate> _delegate;
    long long _contentMode;
    unsigned long long _suppressedContent;
    double _modalShadowVisibility;
}

@property(nonatomic) double modalShadowVisibility; // @synthesize modalShadowVisibility=_modalShadowVisibility;
@property(nonatomic, getter=isModallyPresented) _Bool modallyPresented; // @synthesize modallyPresented=_modallyPresented;
@property(nonatomic) unsigned long long suppressedContent; // @synthesize suppressedContent=_suppressedContent;
@property(nonatomic) long long contentMode; // @synthesize contentMode=_contentMode;
@property(nonatomic) __weak id <WLCardViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, retain, nonatomic) PKPass *pass; // @synthesize pass=_pass;
- (void).cxx_destruct;
- (void)_resizePassAnimated:(_Bool)arg1 notify:(_Bool)arg2;
- (void)_updateFrontFaceSuppressedContent;
- (_Bool)_visibleFaceShouldClipForCurrentViewMode:(double *)arg1;
- (unsigned long long)_regionsForCurrentModes;
- (long long)_frontFaceBackgroundModeForContentMode;
- (void)_applyContentMode:(_Bool)arg1;
- (void)passFaceInfoButtonPressed:(id)arg1;
- (_Bool)passFaceDeleteButtonEnabled;
- (void)passFaceDeleteButtonPressed:(id)arg1;
- (void)passcodeLockManager:(id)arg1 didReceivePasscodeSet:(_Bool)arg2;
- (void)_updateHighEndLayerShadowAnimated:(_Bool)arg1 withDelay:(double)arg2;
- (void)_updateLowEndLayerShadowAnimated:(_Bool)arg1 withDelay:(double)arg2;
- (void)_updateLayerShadowAnimated:(_Bool)arg1 withDelay:(double)arg2;
- (void)resizePassAnimated:(_Bool)arg1 notify:(_Bool)arg2;
- (void)updateValidityDisplay;
- (void)presentDiff:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)layoutSubviews;
- (void)setContentMode:(long long)arg1 animated:(_Bool)arg2 withDelay:(double)arg3;
- (void)setContentMode:(long long)arg1 animated:(_Bool)arg2;
- (void)setModalShadowVisibility:(double)arg1 animated:(_Bool)arg2 withDelay:(double)arg3;
- (void)setModalShadowVisibility:(double)arg1 animated:(_Bool)arg2;
- (void)setDimmer:(double)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) _Bool frontFaceBodyContentCreated;
@property(readonly, nonatomic) _Bool suppressesPile;
@property(readonly, nonatomic) _Bool isForcedFrontFaceResized;
@property(readonly, nonatomic) _Bool isFrontFaceResized;
@property(readonly, nonatomic) NSString *uniqueID;
- (void)setLiveMotionEnabled:(_Bool)arg1;
- (id)item;
- (_Bool)canShowBarcode;
- (id)snapshotViewOfVisibleFaceAfterScreenUpdates:(_Bool)arg1;
- (id)snapshotOfFrontFaceWithRequestedSize:(struct CGSize)arg1;
- (id)snapshotOfFrontFace;
- (struct CGRect)frameOfVisibleFace;
- (struct CGSize)sizeOfFrontFace;
- (struct CGSize)sizeOfFront;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)tapRecognized:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (id)initWithPass:(id)arg1 content:(long long)arg2 suppressedContent:(unsigned long long)arg3;
- (id)initWithPass:(id)arg1 content:(long long)arg2;
- (id)initWithPass:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

