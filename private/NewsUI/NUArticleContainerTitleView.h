//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NUPageStyle, NUTitleView;

@interface NUArticleContainerTitleView : UIView
{
    NUTitleView *_titleView;
    NUPageStyle *_pageStyle;
}

@property(retain, nonatomic) NUPageStyle *pageStyle; // @synthesize pageStyle=_pageStyle;
@property(readonly, nonatomic) NUTitleView *titleView; // @synthesize titleView=_titleView;
- (void).cxx_destruct;
- (void)applyPageStyle:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

