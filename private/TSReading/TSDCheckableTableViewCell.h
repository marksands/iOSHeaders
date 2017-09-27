//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIButton, UIImageView;

@interface TSDCheckableTableViewCell : UITableViewCell
{
    UIButton *mImageButton;
    UIImageView *mCheckmarkImageView;
    _Bool mChecked;
    _Bool mShowsCheckboxOnRight;
}

@property(nonatomic) _Bool checked; // @synthesize checked=mChecked;
@property(readonly, nonatomic) _Bool showsCheckboxOnRight; // @synthesize showsCheckboxOnRight=mShowsCheckboxOnRight;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (void)setImage:(id)arg1 forState:(unsigned long long)arg2;
- (id)imageForState:(unsigned long long)arg1;
- (void)setCheckmarkImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)dealloc;
- (id)initWithReuseIdentifier:(id)arg1 showsCheckboxOnRight:(_Bool)arg2 style:(long long)arg3;
- (id)initWithReuseIdentifier:(id)arg1 showsCheckboxOnRight:(_Bool)arg2;

@end

