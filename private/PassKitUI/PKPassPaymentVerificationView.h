//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitUI/PKPassFooterContentView.h>

#import <PassKitUI/PKPaymentVerificationControllerDelegate-Protocol.h>

@class NSString, PKContinuousButton, PKPaymentVerificationController, UIActivityIndicatorView, UIButton, UILabel, UIView;

@interface PKPassPaymentVerificationView : PKPassFooterContentView <PKPaymentVerificationControllerDelegate>
{
    UILabel *_titleLabel;
    UILabel *_bodyLabel;
    PKContinuousButton *_button;
    UIActivityIndicatorView *_activityIndicator;
    UIButton *_alternateButton;
    UIView *_bottomRule;
    PKPaymentVerificationController *_controller;
}

- (void).cxx_destruct;
- (void)presentVerificationViewController:(id)arg1 animated:(_Bool)arg2;
- (void)didChangeVerificationPresentation;
- (void)_updateButton;
- (id)_bottomRule;
- (id)_alternateButton;
- (id)_activityIndicator;
- (id)_button;
- (id)_bodyLabel;
- (id)_titleLabel;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithPass:(id)arg1 passView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

