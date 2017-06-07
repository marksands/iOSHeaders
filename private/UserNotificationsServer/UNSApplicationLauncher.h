//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FBSSystemService, NSMutableDictionary, UNSLocationMonitor;

@interface UNSApplicationLauncher : NSObject
{
    FBSSystemService *_systemService;
    UNSLocationMonitor *_locationMonitor;
    NSMutableDictionary *_bundleIdentifierToAssertions;
}

- (void).cxx_destruct;
- (void)_queue_removeAllProcessAssertionsAndInvalidate:(_Bool)arg1;
- (void)_removeAllProcessAssertionsAndInvalidate:(_Bool)arg1;
- (void)_queue_removeProcessAssertionsHavingReason:(unsigned int)arg1 forBundleID:(id)arg2 invalidate:(_Bool)arg3;
- (void)_removeProcessAssertionsHavingReason:(unsigned int)arg1 forBundleID:(id)arg2 invalidate:(_Bool)arg3;
- (void)_queue_removeProcessAssertion:(id)arg1 forBundleID:(id)arg2 invalidate:(_Bool)arg3;
- (void)_removeProcessAssertion:(id)arg1 forBundleID:(id)arg2 invalidate:(_Bool)arg3;
- (void)_queue_addProcessAssertion:(id)arg1 forBundleID:(id)arg2;
- (void)_addProcessAssertion:(id)arg1 forBundleID:(id)arg2;
- (id)_newProcessAssertionForBundleID:(id)arg1 flags:(unsigned int)arg2 reason:(unsigned int)arg3 name:(id)arg4 watchdogInterval:(double)arg5 acquisitionHandler:(CDUnknownBlockType)arg6 invalidationHandler:(CDUnknownBlockType)arg7;
- (void)willPresentNotification:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (id)_actionForNotificationResponse:(id)arg1 bundleIdentifier:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)backgroundLaunchApplication:(id)arg1 withResponse:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)foregroundLaunchApplication:(id)arg1 withResponse:(id)arg2 launchImageName:(id)arg3 origin:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)dealloc;
- (id)initWithSystemService:(id)arg1 locationMonitor:(id)arg2;

@end

