//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SKUITrendingSearchPage, SKUITrendingSearchView;

@interface SKUITrendingSearchPageView : UIView
{
    id <SKUITrendingSearchPageViewDelegate> _delegate;
    SKUITrendingSearchPage *_page;
    SKUITrendingSearchView *_trendingSearchView;
}

@property(retain, nonatomic) SKUITrendingSearchPage *page; // @synthesize page=_page;
@property(nonatomic) __weak id <SKUITrendingSearchPageViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_buttonAction:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setBackgroundColor:(id)arg1;
@property(nonatomic) struct UIEdgeInsets contentInset;
- (id)initWithFrame:(struct CGRect)arg1;

@end

