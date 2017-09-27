//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MapKit/MKPlaceSectionRowView.h>

@class MKPlaceCardActionItem, MKPlatterView, NSLayoutConstraint, UIButton;

__attribute__((visibility("hidden")))
@interface MKPlaceCardActionSectionView : MKPlaceSectionRowView
{
    _Bool _useMarginLayout;
    _Bool _usingSmallFonts;
    NSLayoutConstraint *_heightAnchor;
    NSLayoutConstraint *_leftButtonYConstraint;
    NSLayoutConstraint *_rightButtonYConstraint;
    NSLayoutConstraint *_platterSizeConstraint;
    _Bool _singleItemIsFullWidth;
    MKPlaceCardActionItem *_leftItem;
    MKPlaceCardActionItem *_rightItem;
    UIButton *_rightButton;
    UIButton *_leftButton;
    id <MKPlaceCardActionSectionViewDelegate> _delegate;
    MKPlatterView *_platterView;
}

+ (void)_setButtonString:(id)arg1 forActionItem:(id)arg2 isLeftItem:(_Bool)arg3;
+ (id)_font:(_Bool)arg1;
@property(retain, nonatomic) MKPlatterView *platterView; // @synthesize platterView=_platterView;
@property(nonatomic) __weak id <MKPlaceCardActionSectionViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIButton *leftButton; // @synthesize leftButton=_leftButton;
@property(retain, nonatomic) UIButton *rightButton; // @synthesize rightButton=_rightButton;
@property(nonatomic) _Bool singleItemIsFullWidth; // @synthesize singleItemIsFullWidth=_singleItemIsFullWidth;
@property(retain, nonatomic) MKPlaceCardActionItem *rightItem; // @synthesize rightItem=_rightItem;
@property(retain, nonatomic) MKPlaceCardActionItem *leftItem; // @synthesize leftItem=_leftItem;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (void)_rightButtonIsPressed:(id)arg1;
- (void)_leftButtonIsPressed:(id)arg1;
- (id)_makePlaceActionButtonWithActionItem:(id)arg1 isLeftItem:(_Bool)arg2 useSmallFonts:(_Bool)arg3;
- (void)_contentSizeDidChange;
- (void)infoCardThemeChanged:(id)arg1;
- (void)setTopHairlineHidden:(_Bool)arg1;
- (id)glyphFont;
- (void)_setUpViewWithButtons;
- (id)currentLeftItem;
- (id)initWithLeftActionItem:(id)arg1 rightActionItem:(id)arg2 useSmallFonts:(_Bool)arg3 singleItemIsFullWidth:(_Bool)arg4 useMarginLayout:(_Bool)arg5;
- (id)initWithLeftActionItem:(id)arg1 rightActionItem:(id)arg2 useSmallFonts:(_Bool)arg3 singleItemIsFullWidth:(_Bool)arg4;

@end

