//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PassKitUI/PKTableFooterView.h>

@class UIButton;

@interface PKPeerPaymentFindBankAccountInformationFooterView : PKTableFooterView
{
    UIButton *_accountInformationButton;
}

@property(retain, nonatomic) UIButton *accountInformationButton; // @synthesize accountInformationButton=_accountInformationButton;
- (void).cxx_destruct;
- (struct CGSize)_sizeForButton:(id)arg1 constrainedToSize:(struct CGSize)arg2;
- (void)setButtonsEnabled:(_Bool)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

