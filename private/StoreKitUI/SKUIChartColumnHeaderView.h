//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class NSArray;

@interface SKUIChartColumnHeaderView : UIControl
{
    NSArray *_buttons;
    long long _selectedTitleIndex;
}

@property(nonatomic) long long selectedTitleIndex; // @synthesize selectedTitleIndex=_selectedTitleIndex;
- (void).cxx_destruct;
- (void)_reloadSelectedButton;
@property(readonly, nonatomic) double edgePadding;
- (void)_buttonAction:(id)arg1;
- (void)sizeToFit;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
@property(copy, nonatomic) NSArray *titles;
- (void)dealloc;

@end

