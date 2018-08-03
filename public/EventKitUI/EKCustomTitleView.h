//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface EKCustomTitleView : UIView
{
    _Bool _showSubtitle;
    _Bool _animating;
    UILabel *_originalTitle;
    UILabel *_title;
    UIImageView *_originalImage;
    UIImageView *_titleImage;
    UILabel *_subTitle;
}

@property _Bool animating; // @synthesize animating=_animating;
@property _Bool showSubtitle; // @synthesize showSubtitle=_showSubtitle;
@property(retain) UILabel *subTitle; // @synthesize subTitle=_subTitle;
@property(retain) UIImageView *titleImage; // @synthesize titleImage=_titleImage;
@property(retain) UIImageView *originalImage; // @synthesize originalImage=_originalImage;
@property(retain) UILabel *title; // @synthesize title=_title;
@property(retain) UILabel *originalTitle; // @synthesize originalTitle=_originalTitle;
- (void).cxx_destruct;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
- (_Bool)isAccessibilityElement;
- (void)animateOutWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)animateInWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)layoutSubviews;
- (struct CGRect)_centerAndClipFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithTitle:(id)arg1 subTitle:(id)arg2 eventViewController:(id)arg3;

@end

