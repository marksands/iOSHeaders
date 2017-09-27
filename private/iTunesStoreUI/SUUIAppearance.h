//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSDictionary, NSMutableDictionary, SUControlAppearance, SUTabBarAppearance, SUToolbarAppearance;

@interface SUUIAppearance : NSObject <NSCopying>
{
    SUControlAppearance *_backButtonAppearance;
    SUControlAppearance *_confirmationButtonAppearance;
    SUControlAppearance *_destructiveButtonAppearance;
    SUControlAppearance *_exitStoreButtonAppearance;
    SUControlAppearance *_forwardButtonAppearance;
    _Bool _isDefaultAppearance;
    NSMutableDictionary *_navigationBarBackgroundImages;
    NSDictionary *_navigationBarTitleTextAttributes;
    NSMutableDictionary *_navigationButtonAppearance;
    NSMutableDictionary *_segmentedControlAppearance;
    SUTabBarAppearance *_tabBarAppearance;
    SUToolbarAppearance *_toolbarAppearance;
}

+ (id)_defaultTabBarAppearance;
+ (id)_defaultForwardButtonAppearance;
+ (id)_defaultDoneButtonAppearance;
+ (id)_defaultDestructiveButtonAppearance;
+ (id)_defaultConfirmationButtonAppearance;
+ (id)_defaultButtonAppearance;
+ (id)_defaultBackButtonAppearance;
+ (id)_defaultShadowWithColor:(id)arg1 offset:(struct CGSize)arg2;
+ (id)defaultAppearance;
@property(copy, nonatomic) SUToolbarAppearance *toolbarAppearance; // @synthesize toolbarAppearance=_toolbarAppearance;
@property(copy, nonatomic) SUTabBarAppearance *tabBarAppearance; // @synthesize tabBarAppearance=_tabBarAppearance;
@property(copy, nonatomic) NSDictionary *navigationBarTitleTextAttributes; // @synthesize navigationBarTitleTextAttributes=_navigationBarTitleTextAttributes;
@property(copy, nonatomic) SUControlAppearance *forwardButtonAppearance; // @synthesize forwardButtonAppearance=_forwardButtonAppearance;
@property(copy, nonatomic) SUControlAppearance *exitStoreButtonAppearance; // @synthesize exitStoreButtonAppearance=_exitStoreButtonAppearance;
@property(copy, nonatomic) SUControlAppearance *destructiveButtonAppearance; // @synthesize destructiveButtonAppearance=_destructiveButtonAppearance;
@property(copy, nonatomic) SUControlAppearance *confirmationButtonAppearance; // @synthesize confirmationButtonAppearance=_confirmationButtonAppearance;
@property(copy, nonatomic) SUControlAppearance *backButtonAppearance; // @synthesize backButtonAppearance=_backButtonAppearance;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_copySegmentedControlKeyWithStyle:(long long)arg1 tintStyle:(long long)arg2;
- (void)_styleBackBarButtonItem:(id)arg1;
- (void)styleToolbar:(id)arg1;
- (void)styleTabBarItem:(id)arg1;
- (void)styleTabBar:(id)arg1;
- (void)styleSegmentedControl:(id)arg1 tintStyle:(long long)arg2;
- (void)styleNavigationBar:(id)arg1;
- (void)styleForwardButtonItem:(id)arg1;
- (void)styleExitStoreButtonItem:(id)arg1;
- (void)styleDestructiveButton:(id)arg1;
- (void)styleConfirmationButtonItem:(id)arg1;
- (void)styleBarButtonItem:(id)arg1;
- (void)setSegmentedControlAppearance:(id)arg1 forStyle:(long long)arg2 tintStyle:(long long)arg3;
- (void)setNavigationButtonAppearance:(id)arg1 forStyle:(long long)arg2;
- (void)setNavigationBarBackgroundImage:(id)arg1 forBarMetrics:(long long)arg2;
- (id)segmentedControlAppearanceForStyle:(long long)arg1 tintStyle:(long long)arg2;
- (id)navigationButtonAppearanceForStyle:(long long)arg1;
- (id)navigationBarBackgroundImageForBarMetrics:(long long)arg1;
- (void)dealloc;

@end

