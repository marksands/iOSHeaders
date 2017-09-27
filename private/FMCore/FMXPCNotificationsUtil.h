//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface FMXPCNotificationsUtil : NSObject
{
    NSMutableDictionary *_darwinNotificationHandlers;
    NSMutableDictionary *_distributedNotificationHandlers;
    NSObject<OS_dispatch_queue> *_modificationQueue;
}

+ (void)handleDistributedNotificationsWithHandlers:(id)arg1;
+ (void)handleDarwinNotificationsWithHandlers:(id)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *modificationQueue; // @synthesize modificationQueue=_modificationQueue;
@property(retain, nonatomic) NSMutableDictionary *distributedNotificationHandlers; // @synthesize distributedNotificationHandlers=_distributedNotificationHandlers;
@property(retain, nonatomic) NSMutableDictionary *darwinNotificationHandlers; // @synthesize darwinNotificationHandlers=_darwinNotificationHandlers;
- (void).cxx_destruct;
- (void)_didReceiveDistributedNotification:(id)arg1 withContext:(id)arg2;
- (void)_didReceiveDarwinNotification:(id)arg1;
- (void)deregisterHandlerForDistributedNotification:(id)arg1;
- (void)registerHandler:(CDUnknownBlockType)arg1 forDistributedNotification:(id)arg2;
- (_Bool)isHandlerRegisteredForDistributedNotification:(id)arg1;
- (void)deregisterHandlerForDarwinNotification:(id)arg1;
- (void)registerHandler:(CDUnknownBlockType)arg1 forDarwinNotification:(id)arg2;
- (_Bool)isHandlerRegisteredForDarwinNotification:(id)arg1;
- (id)init;

@end

