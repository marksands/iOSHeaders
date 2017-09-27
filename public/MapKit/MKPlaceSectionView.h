//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MapKit/_MKStackView.h>

@class MKPlaceSectionItemView, MKViewWithHairline, NSArray;

__attribute__((visibility("hidden")))
@interface MKPlaceSectionView : _MKStackView
{
    unsigned long long _trackingSelectForRow;
    MKViewWithHairline *_hairLineView;
    _Bool _highlightsTouches;
    _Bool _showsBottomHairline;
    id <MKPlaceSectionViewDelegate> _delegate;
    MKPlaceSectionItemView *_headerView;
    NSArray *_rowViews;
    MKPlaceSectionItemView *_footerView;
}

@property(nonatomic) _Bool showsBottomHairline; // @synthesize showsBottomHairline=_showsBottomHairline;
@property(retain, nonatomic) MKPlaceSectionItemView *footerView; // @synthesize footerView=_footerView;
@property(nonatomic) _Bool highlightsTouches; // @synthesize highlightsTouches=_highlightsTouches;
@property(copy, nonatomic) NSArray *rowViews; // @synthesize rowViews=_rowViews;
@property(retain, nonatomic) MKPlaceSectionItemView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) __weak id <MKPlaceSectionViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_updateViewsAnimated:(_Bool)arg1;
- (void)setFooterView:(id)arg1 animated:(_Bool)arg2;
- (void)setRowViews:(id)arg1 animated:(_Bool)arg2;
- (void)setHeaderView:(id)arg1 animated:(_Bool)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)_touchesCancelledForRow:(id)arg1 at:(unsigned long long)arg2;
- (void)_touchesBeganForRow:(id)arg1 at:(unsigned long long)arg2;
- (void)_tappedRow:(id)arg1 at:(unsigned long long)arg2;
- (id)rowAt:(struct CGPoint)arg1;
- (unsigned long long)indexOfRowAt:(struct CGPoint)arg1;
- (void)_updateHairlineInsets;
- (void)infoCardThemeChanged:(id)arg1;
- (void)layoutMarginsDidChange;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

