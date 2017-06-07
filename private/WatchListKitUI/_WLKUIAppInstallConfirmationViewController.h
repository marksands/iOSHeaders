//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class SSLookupItemOffer, UIBarButtonItem, UIButton, WLKChannelDetails, _WLKUIAppInstallConfirmationView, _WLKUIAppInstallLockup;

@interface _WLKUIAppInstallConfirmationViewController : UIViewController
{
    WLKChannelDetails *_channel;
    _WLKUIAppInstallConfirmationView *_confirmationView;
    SSLookupItemOffer *_itemOffer;
    CDUnknownBlockType _cancelationHandler;
    CDUnknownBlockType _actionHandler;
    UIButton *_actionButton;
    _WLKUIAppInstallLockup *_lockup;
    UIBarButtonItem *_barButtonItem;
}

@property(retain, nonatomic) UIBarButtonItem *barButtonItem; // @synthesize barButtonItem=_barButtonItem;
@property(retain, nonatomic) _WLKUIAppInstallLockup *lockup; // @synthesize lockup=_lockup;
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(copy, nonatomic) CDUnknownBlockType actionHandler; // @synthesize actionHandler=_actionHandler;
@property(copy, nonatomic) CDUnknownBlockType cancelationHandler; // @synthesize cancelationHandler=_cancelationHandler;
- (void).cxx_destruct;
- (id)_namedRatingWithRatings:(id)arg1;
- (id)_fileSizeWithDeviceSizes:(id)arg1;
- (void)_fetchAppInfo;
- (void)_handleCancel;
- (void)_handleAction;
- (void)loadView;
- (void)setInstallingState;
- (void)setPreInstallState;
- (void)setMessage:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)itemOffer;
- (id)initWithChannel:(id)arg1;
- (id)init;

@end

