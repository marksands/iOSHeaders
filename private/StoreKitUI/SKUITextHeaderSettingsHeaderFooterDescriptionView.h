//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <StoreKitUI/SKUISettingsHeaderFooterDescriptionView.h>

@class SKUIViewElement, UILabel;

@interface SKUITextHeaderSettingsHeaderFooterDescriptionView : SKUISettingsHeaderFooterDescriptionView
{
    UILabel *_label;
    SKUIViewElement *_viewElement;
}

+ (id)_labelWithLabelElements:(id)arg1;
+ (id)_labelElementsFromViewElement:(id)arg1;
+ (id)_concatenateTextFromLabelElements:(id)arg1;
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 settingsHeaderFooterDescription:(id)arg2 context:(id)arg3;
+ (void)requestLayoutForSettingsHeaderFooterDescription:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (_Bool)prefetchResourcesForSettingsHeaderFooterDescription:(id)arg1 reason:(long long)arg2 context:(id)arg3;
+ (struct CGSize)preferredSizeForSettingsHeaderFooterDescription:(id)arg1 context:(id)arg2;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (void)reloadWithSettingsHeaderFooterDescription:(id)arg1 width:(double)arg2 context:(id)arg3;

@end

