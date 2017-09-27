//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <StoreKitUI/SKUIViewReuseView.h>

#import "SKUIViewElementView.h"

@class NSMapTable, NSString, SKUIAttributedStringView, SKUITextBoxView, UIImageView;

@interface SKUIResponseView : SKUIViewReuseView <SKUIViewElementView>
{
    SKUITextBoxView *_descriptionView;
    SKUIAttributedStringView *_subtitleView;
    UIImageView *_replyImageView;
    NSMapTable *_allViewTextProperties;
    struct UIEdgeInsets _contentInset;
}

+ (id)_attributedStringForSubtitleLabel:(id)arg1 context:(id)arg2;
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;
+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;
@property(retain, nonatomic) NSMapTable *allViewTextProperties; // @synthesize allViewTextProperties=_allViewTextProperties;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(retain, nonatomic) UIImageView *replyImageView; // @synthesize replyImageView=_replyImageView;
@property(retain, nonatomic) SKUIAttributedStringView *subtitleView; // @synthesize subtitleView=_subtitleView;
@property(retain, nonatomic) SKUITextBoxView *descriptionView; // @synthesize descriptionView=_descriptionView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)viewForElementIdentifier:(id)arg1;
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

