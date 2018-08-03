//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ScreenTimeUI/STTableViewHeaderFooterView.h>

#import "PSHeaderFooterView.h"

@class PSSpecifier, UILabel;

@interface STSingleLineHeaderView : STTableViewHeaderFooterView <PSHeaderFooterView>
{
    UILabel *_titleLabel;
    PSSpecifier *_specifier;
}

@property(retain, nonatomic) PSSpecifier *specifier; // @synthesize specifier=_specifier;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (double)preferredHeightForWidth:(double)arg1;
- (void)reloadFromSpecifier;
- (id)initWithSpecifier:(id)arg1 useContentLayoutGuide:(_Bool)arg2;
- (id)initWithSpecifier:(id)arg1;

@end

