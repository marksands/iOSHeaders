//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIScrollView;

@protocol SKUIScrollViewDelegateObserver <NSObject>

@optional
- (void)observedScrollViewWillEndDragging:(UIScrollView *)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(struct CGPoint)arg3;
- (void)observedScrollViewWillBeginDragging:(UIScrollView *)arg1;
- (void)observedScrollViewWillBeginDecelerating:(UIScrollView *)arg1;
- (void)observedScrollViewDidScroll:(UIScrollView *)arg1;
- (void)observedScrollViewDidEndDecelerating:(UIScrollView *)arg1;
@end

