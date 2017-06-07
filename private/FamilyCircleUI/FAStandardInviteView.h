//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <FamilyCircleUI/FAInviteViewProtocol-Protocol.h>

@class FAFamilySharingFeaturesView, NSString, UIImageView, UILabel;

@interface FAStandardInviteView : UIView <FAInviteViewProtocol>
{
    UILabel *_titleLabel;
    UIImageView *_familySharingLogo;
    UILabel *_inviteHeaderLabel;
    FAFamilySharingFeaturesView *_featuresView;
}

- (void).cxx_destruct;
- (double)_heightForTitle:(id)arg1 width:(double)arg2;
- (double)_heightForText:(id)arg1 width:(double)arg2;
- (id)_labelWithCenteredText:(id)arg1;
- (double)desiredHeightForWidth:(double)arg1;
- (void)layoutSubviews;
- (id)initWithInvite:(id)arg1 hideLocationSharing:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

