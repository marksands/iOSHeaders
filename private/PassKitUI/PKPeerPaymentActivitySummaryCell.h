//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitUI/PKTableViewCell.h>

@class CNAvatarViewController, NSString, PKActivityEventPeerPaymentTransaction, PKSuperscriptedCurrencyAmountLabel, UIImageView, UILabel;

@interface PKPeerPaymentActivitySummaryCell : PKTableViewCell
{
    UILabel *_titleView;
    UILabel *_subtitleView;
    UILabel *_timeView;
    PKSuperscriptedCurrencyAmountLabel *_amountLabel;
    UIImageView *_unreadIndicatorView;
    PKActivityEventPeerPaymentTransaction *_event;
    CNAvatarViewController *_avatarViewController;
    NSString *_contactName;
}

+ (id)unreadIndicatorImage;
+ (double)separatorLeadingInset;
+ (double)height;
@property(retain, nonatomic) NSString *contactName; // @synthesize contactName=_contactName;
@property(retain, nonatomic) CNAvatarViewController *avatarViewController; // @synthesize avatarViewController=_avatarViewController;
@property(retain, nonatomic) PKActivityEventPeerPaymentTransaction *event; // @synthesize event=_event;
- (void).cxx_destruct;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_updateViews;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

