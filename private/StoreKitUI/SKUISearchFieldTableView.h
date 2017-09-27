//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableView.h"

@class SKUITrendingSearchPage, SKUITrendingSearchPageView, SKUITrendingSearchProvider;

@interface SKUISearchFieldTableView : UITableView
{
    SKUITrendingSearchPage *_page;
    SKUITrendingSearchPageView *_pageView;
    _Bool _trendingSearchesVisible;
    SKUITrendingSearchProvider *_trendingSearchProvider;
    id <SKUITrendingSearchPageViewDelegate> _trendingSearchDelegate;
}

@property(nonatomic) _Bool trendingSearchesVisible; // @synthesize trendingSearchesVisible=_trendingSearchesVisible;
@property(nonatomic) __weak id <SKUITrendingSearchPageViewDelegate> trendingSearchDelegate; // @synthesize trendingSearchDelegate=_trendingSearchDelegate;
@property(retain, nonatomic) SKUITrendingSearchProvider *trendingSearchProvider; // @synthesize trendingSearchProvider=_trendingSearchProvider;
- (void).cxx_destruct;
- (void)_reloadView;
- (void)_setTrendingResponse:(id)arg1 error:(id)arg2;
- (void)_reloadData;
- (void)layoutSubviews;

@end

