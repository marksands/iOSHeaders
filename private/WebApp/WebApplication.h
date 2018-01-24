//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIApplication.h"

#import "UIApplicationDelegate.h"

@class NSString, UIWindow, WebAppViewController;

@interface WebApplication : UIApplication <UIApplicationDelegate>
{
    WebAppViewController *_webApp;
    UIWindow *_window;
}

- (void).cxx_destruct;
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)_showWebApplicationAtURL:(id)arg1;
- (id)nameOfDefaultImageToUpdateAtSuspension;
- (id)nameOfDefaultImageToUpdateAtSuspension:(long long)arg1;
- (_Bool)applicationSuspendWithSettings:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;

@end

