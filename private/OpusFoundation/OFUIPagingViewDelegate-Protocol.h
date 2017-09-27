//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class OFUIPagingView, UIView;

@protocol OFUIPagingViewDelegate <NSObject>
- (UIView *)viewForPageInPagingView:(OFUIPagingView *)arg1 atIndex:(long long)arg2;
- (long long)numberOfPagesInPagingView:(OFUIPagingView *)arg1;

@optional
- (void)pagingViewDidEndMoving:(OFUIPagingView *)arg1;
- (void)pagingViewWillBeginMoving:(OFUIPagingView *)arg1;
- (void)pagesDidChangeInPagingView:(OFUIPagingView *)arg1;
- (void)currentPageDidChangeInPagingView:(OFUIPagingView *)arg1;
@end

