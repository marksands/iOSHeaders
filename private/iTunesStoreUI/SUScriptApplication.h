//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iTunesStoreUI/SUScriptObject.h>

@class NSNumber, NSString;

@interface SUScriptApplication : SUScriptObject
{
}

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;
- (id)scriptAttributeKeys;
- (id)attributeKeys;
@property(readonly) long long statusBarStyleBlackTranslucent;
@property(readonly) long long statusBarStyleBlackOpaque;
@property(readonly) long long statusBarStyleDefault;
@property(readonly) long long statusBarAnimationSlide;
@property(readonly) long long statusBarAnimationNone;
@property(readonly) long long statusBarAnimationFade;
@property(readonly) NSNumber *exitStoreReasonPurchase;
@property(readonly) NSNumber *exitStoreReasonOther;
@property(readonly) NSNumber *exitStoreReasonGotoMainStore;
@property(readonly) NSNumber *exitStoreReasonFatalError;
@property(readonly) NSNumber *exitStoreReasonDownloadComplete;
@property(readonly) NSNumber *exitStoreReasonButton;
@property(readonly, getter=wasLaunchedFromLibrary) id launchedFromLibrary;
@property(readonly) NSString *version;
@property long long statusBarStyle;
@property id statusBarHidden;
- (void)setVersion:(id)arg1;
- (void)setIdentifier:(id)arg1;
@property(retain) id iconBadgeNumber;
@property(readonly) id screenWidth;
@property(readonly) id screenHeight;
@property(readonly, getter=isRunningInStoreDemoMode) id runningInStoreDemoMode;
@property(readonly, getter=isDelayingTerminate) id delayingTerminate;
@property(readonly) NSString *identifier;
- (void)showNewsstand;
- (void)setStatusBarStyle:(long long)arg1 animated:(_Bool)arg2;
- (void)setStatusBarHidden:(_Bool)arg1 withAnimation:(long long)arg2;
- (void)scrollIconToVisible:(id)arg1 shouldSuspend:(_Bool)arg2;
- (void)returnToLibrary;
- (void)exitStoreWithReason:(id)arg1;
- (void)endDelayingTerminate;
- (void)beginDelayingTerminate;

@end

