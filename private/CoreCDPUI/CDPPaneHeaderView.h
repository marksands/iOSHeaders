//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class BFFPaneHeaderView, UILabel;

@interface CDPPaneHeaderView : UIView
{
    BFFPaneHeaderView *_header;
}

- (void).cxx_destruct;
- (void)makeAllTheTextFits;
- (double)innerHeaderMaxY;
@property(readonly, nonatomic) UIView *_header;
- (void)layoutSubviews;
- (void)setLayoutMargins:(struct UIEdgeInsets)arg1;
- (void)setTitleText:(id)arg1;
@property(readonly, nonatomic) UILabel *textLabel;
@property(readonly, nonatomic) UILabel *subLabel;
@property(readonly, nonatomic) UILabel *detailTextLabel;
- (id)initWithFrame:(struct CGRect)arg1;

@end

