//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface _VCUIActionStatusErrorView : UIView
{
    UILabel *_errorLabel;
    UIImageView *_errorIconView;
    UIView *_errorIconBackgroundView;
}

@property(retain, nonatomic) UIView *errorIconBackgroundView; // @synthesize errorIconBackgroundView=_errorIconBackgroundView;
@property(retain, nonatomic) UIImageView *errorIconView; // @synthesize errorIconView=_errorIconView;
@property(retain, nonatomic) UILabel *errorLabel; // @synthesize errorLabel=_errorLabel;
- (void).cxx_destruct;
- (void)_setUpViews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

