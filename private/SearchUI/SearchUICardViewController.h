//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SearchUI/SearchUITableViewController.h>

@class SFCard, UIActivityIndicatorView, UILabel, UIView;

@interface SearchUICardViewController : SearchUITableViewController
{
    unsigned long long _level;
    SFCard *_card;
    UIView *_loadingView;
    UIActivityIndicatorView *_loadingSpinner;
    UILabel *_loadingLabel;
}

@property(retain) UILabel *loadingLabel; // @synthesize loadingLabel=_loadingLabel;
@property(retain) UIActivityIndicatorView *loadingSpinner; // @synthesize loadingSpinner=_loadingSpinner;
@property(retain) UIView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain) SFCard *card; // @synthesize card=_card;
@property unsigned long long level; // @synthesize level=_level;
- (void).cxx_destruct;
- (double)offScreenContentScrollDistance;
- (void)setShouldUseInsetRoundedSections:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)displayLoadingView;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)cardViewDidAppear;
- (void)viewWillAppear:(_Bool)arg1;
- (void)updateWithCardSections:(id)arg1;
- (id)initWithCard:(id)arg1 style:(unsigned long long)arg2 feedbackDelegate:(id)arg3;

@end

