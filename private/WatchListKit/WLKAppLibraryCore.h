//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSXPCConnection, PSSSSubscriptionManagerInternal;

@interface WLKAppLibraryCore : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_connection;
    PSSSSubscriptionManagerInternal *_subscriptionManager;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)_connection;
- (void)_fetchApplicationsInProcess:(CDUnknownBlockType)arg1;
- (void)fetchApplications:(CDUnknownBlockType)arg1;
- (id)init;

@end

