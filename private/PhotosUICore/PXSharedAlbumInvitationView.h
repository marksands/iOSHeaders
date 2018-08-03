//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "PXSettingsKeyObserver.h"

@class NSString, PXCapsuleButton, PXFeedInvitationSectionInfo, PXRoundedCornerOverlayView, UIImageView, UILabel;

@interface PXSharedAlbumInvitationView : UIView <PXSettingsKeyObserver>
{
    _Bool _useInPopover;
    id <PXSharedAlbumInvitationViewDelegate> _delegate;
    PXFeedInvitationSectionInfo *_invitationSectionInfo;
    double _cornerRadius;
    PXRoundedCornerOverlayView *_roundedCornerOverlayView;
    unsigned long long _avatarImageTag;
    UIImageView *_avatarView;
    UILabel *_infoLabel;
    UILabel *_albumTitleLabel;
    PXCapsuleButton *_acceptButton;
    PXCapsuleButton *_declineButton;
    UILabel *_reportJunkLabel;
    id <PLCloudSharedAlbumProtocol> _sharedAlbum;
    struct UIEdgeInsets _contentInsets;
}

+ (void)preloadResources;
@property(retain, nonatomic) id <PLCloudSharedAlbumProtocol> sharedAlbum; // @synthesize sharedAlbum=_sharedAlbum;
@property(retain, nonatomic) UILabel *reportJunkLabel; // @synthesize reportJunkLabel=_reportJunkLabel;
@property(retain, nonatomic) PXCapsuleButton *declineButton; // @synthesize declineButton=_declineButton;
@property(retain, nonatomic) PXCapsuleButton *acceptButton; // @synthesize acceptButton=_acceptButton;
@property(retain, nonatomic) UILabel *albumTitleLabel; // @synthesize albumTitleLabel=_albumTitleLabel;
@property(retain, nonatomic) UILabel *infoLabel; // @synthesize infoLabel=_infoLabel;
@property(retain, nonatomic) UIImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(nonatomic) unsigned long long avatarImageTag; // @synthesize avatarImageTag=_avatarImageTag;
@property(retain, nonatomic) PXRoundedCornerOverlayView *roundedCornerOverlayView; // @synthesize roundedCornerOverlayView=_roundedCornerOverlayView;
@property(nonatomic) _Bool useInPopover; // @synthesize useInPopover=_useInPopover;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(retain, nonatomic) PXFeedInvitationSectionInfo *invitationSectionInfo; // @synthesize invitationSectionInfo=_invitationSectionInfo;
@property(nonatomic) __weak id <PXSharedAlbumInvitationViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_reportJunkLabelTapped:(id)arg1;
- (void)_reportJunk;
- (void)_declineButtonTapped:(id)arg1;
- (void)_acceptButtonTapped:(id)arg1;
- (void)_presentToastWithTitle:(id)arg1;
- (void)_enableUserInteractions:(_Bool)arg1;
- (void)_showOutOfNetworkInvitationMessageForSharedAlbum:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_openiCloudSettings;
- (id)_actionButtonWithTitle:(id)arg1 action:(SEL)arg2 buttonColor:(id)arg3 titleColor:(id)arg4;
- (void)_updateReportJunkLabel;
- (void)_updateAlbumTitleLabel;
- (void)_updateInfoLabel;
- (void)_handlePersonImage:(id)arg1 imageTag:(unsigned long long)arg2;
- (void)_updateAvatarImage:(unsigned long long)arg1;
- (void)_updateRoundedCornerOverlayView;
- (void)_updateColors;
- (id)_roundedCornerViewBackgroundColor;
- (id)_declineButtonColor;
- (id)_parentViewBackgroundColor;
- (struct CGSize)_performLayoutInRect:(struct CGRect)arg1 updateSubviewFrames:(_Bool)arg2;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)_updateUI;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

