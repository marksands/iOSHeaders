//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor, UIView;

@interface NUArticleViewStyle : NSObject
{
    long long _statusBarStyle;
    UIColor *_backgroundColor;
    UIView *_tabBarBackgroundView;
}

@property(retain, nonatomic) UIView *tabBarBackgroundView; // @synthesize tabBarBackgroundView=_tabBarBackgroundView;
@property(readonly, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(readonly, nonatomic) long long statusBarStyle; // @synthesize statusBarStyle=_statusBarStyle;
- (void).cxx_destruct;
- (long long)statusBarStyleForBackgroundColor:(id)arg1;
- (void)unstyleTabBar:(id)arg1;
- (void)styleTabBar:(id)arg1;
- (id)initWithBackgroundColor:(id)arg1;

@end

