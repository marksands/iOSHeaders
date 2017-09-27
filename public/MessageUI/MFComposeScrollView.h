//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

@class NSMutableSet;

@interface MFComposeScrollView : UIScrollView
{
    NSMutableSet *_disabledSubviews;
    long long _scrollBlocked;
    _Bool _subviewsDisabled;
    _Bool _shouldScrollToFirstResponder;
}

@property(nonatomic) _Bool shouldScrollToFirstResponder; // @synthesize shouldScrollToFirstResponder=_shouldScrollToFirstResponder;
@property(nonatomic) _Bool subviewsDisabled; // @synthesize subviewsDisabled=_subviewsDisabled;
- (_Bool)_scrollsToMakeFirstResponderVisible;
- (void)setContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (void)endBlockingScroll;
- (void)beginBlockingScroll;
- (void)willRemoveSubview:(id)arg1;
- (void)didAddSubview:(id)arg1;
- (void)enableSubview:(id)arg1;
- (void)disableSubview:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

