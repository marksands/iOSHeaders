//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NUIContainerView, UIView;

@protocol NUIContainerViewDelegate <NSObject>

@optional
- (void)containerViewDidLayoutArrangedSubviews:(NUIContainerView *)arg1;
- (void)containerView:(NUIContainerView *)arg1 willMeasureArrangedSubviewsFittingSize:(struct CGSize)arg2 forReason:(long long)arg3;
- (struct CGRect)containerView:(NUIContainerView *)arg1 layoutFrameForArrangedSubview:(UIView *)arg2 withProposedFrame:(struct CGRect)arg3;
- (struct CGSize)containerView:(NUIContainerView *)arg1 systemLayoutSizeFittingSize:(struct CGSize)arg2 forArrangedSubview:(UIView *)arg3;
- (void)containerViewDidInvalidateIntrinsicContentSize:(NUIContainerView *)arg1;
@end

