//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MPMovieView, UIView, UIWindow;

@protocol MPMovieViewDelegate <NSObject>

@optional
- (void)movieView:(MPMovieView *)arg1 willMoveToSuperview:(UIView *)arg2;
- (void)movieViewDidMoveToWindow:(MPMovieView *)arg1;
- (void)movieView:(MPMovieView *)arg1 willMoveToWindow:(UIWindow *)arg2;
@end

