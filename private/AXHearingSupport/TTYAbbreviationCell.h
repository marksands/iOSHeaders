//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class UILabel;

@interface TTYAbbreviationCell : UICollectionViewCell
{
    UILabel *_abbreviation;
    UILabel *_hint;
}

@property(retain, nonatomic) UILabel *hint; // @synthesize hint=_hint;
@property(retain, nonatomic) UILabel *abbreviation; // @synthesize abbreviation=_abbreviation;
- (void).cxx_destruct;
- (id)accessibilityIdentifier;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (void)dealloc;
- (id)abbreviationText;
- (void)setAbbreviationData:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

