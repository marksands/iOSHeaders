//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PassKitUI/PKTableViewCell.h>

@class UIImageView, UILabel;

@interface PKPaymentRemoteCredentialTableViewCell : PKTableViewCell
{
    _Bool _showingPlaceholder;
    UIImageView *_snapshotImageView;
    UILabel *_credentialDetailLabel;
}

+ (struct CGSize)defaultImageViewSize;
@property(nonatomic) _Bool showingPlaceholder; // @synthesize showingPlaceholder=_showingPlaceholder;
@property(readonly, nonatomic) UILabel *credentialDetailLabel; // @synthesize credentialDetailLabel=_credentialDetailLabel;
@property(readonly, nonatomic) UIImageView *snapshotImageView; // @synthesize snapshotImageView=_snapshotImageView;
- (void).cxx_destruct;
- (id)detailTextLabelColor;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)pk_applyAppearance:(id)arg1;
- (id)pk_childrenForAppearance;

@end

