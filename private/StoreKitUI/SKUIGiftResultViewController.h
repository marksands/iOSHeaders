//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <StoreKitUI/SKUIGiftStepViewController.h>

@class SKUIGiftItemView, UIButton, UIImage;

@interface SKUIGiftResultViewController : SKUIGiftStepViewController
{
    UIButton *_giftAgainButton;
    UIImage *_itemImage;
    SKUIGiftItemView *_itemView;
}

- (void).cxx_destruct;
- (void)_setItemImage:(id)arg1 error:(id)arg2;
- (id)_itemView;
- (id)_itemImage;
- (void)_giftAgainAction:(id)arg1;
- (void)_doneButtonAction:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithGift:(id)arg1 configuration:(id)arg2;

@end

