//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PassKitUI/PKTableHeaderView.h>

@class UILabel, UITextField;

@interface PKSearchableTableHeaderView : PKTableHeaderView
{
    UITextField *_searchField;
    UILabel *_searchFieldLabel;
    _Bool _showsSearchField;
}

@property(nonatomic) _Bool showsSearchField; // @synthesize showsSearchField=_showsSearchField;
- (void).cxx_destruct;
@property(readonly, nonatomic) double searchFieldOffset;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
@property(readonly, nonatomic) UILabel *searchFieldLabel;
@property(readonly, nonatomic) UITextField *searchField;

@end

