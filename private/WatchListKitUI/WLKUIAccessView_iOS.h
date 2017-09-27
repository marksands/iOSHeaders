//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "TVCarouselViewDataSource.h"

@class NSArray, NSString, TVCarouselView, UIButton, UILabel, UILayoutGuide, UIScrollView, UIStackView;

@interface WLKUIAccessView_iOS : UIView <TVCarouselViewDataSource>
{
    NSArray *_apps;
    UILayoutGuide *_titlePlacementGuide;
    UIStackView *_scrollStack;
    UILabel *_titleLabel;
    UIScrollView *_bodyScroll;
    UILabel *_bodyLabel;
    UIStackView *_logoStack;
    UIStackView *_bottomStack;
    UIButton *_allowButton;
    UIButton *_disallowButton;
    UIButton *_nackButton;
    UILabel *_privacyLabel;
    UIButton *_privacyButton;
    UIButton *_seeAllButton;
    TVCarouselView *_carouselView;
    _Bool _didLayout;
}

+ (struct CGSize)iconSize;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)_imageViewForIndex:(unsigned long long)arg1;
- (id)_buildLogoStack;
- (id)_buildCarousel;
- (id)carouselView:(id)arg1 cellForItemAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfItemsInCarouselView:(id)arg1;
- (void)layoutSubviews;
- (void)showNackScreen;
- (void)setFooter:(id)arg1;
- (void)setBody:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)bodyScroll;
- (id)nackButton;
- (id)seeAllButton;
- (id)privacyButton;
- (id)disallowButton;
- (id)allowButton;
- (void)dealloc;
- (id)initWithApps:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

