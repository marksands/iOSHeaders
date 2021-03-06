//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ASDNotificationServiceProtocol.h"

@class NSHashTable, NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface ASDNotificationCenter : NSObject <ASDNotificationServiceProtocol>
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableDictionary *_notificationObservers;
    struct os_unfair_lock_s _observerLock;
    NSHashTable *_progressObservers;
}

+ (id)interface;
+ (id)defaultCenter;
- (void).cxx_destruct;
- (void)deliverProgress:(id)arg1;
- (void)deliverNotifications:(id)arg1;
- (void)removeProgressObserver:(id)arg1;
- (void)removeNotificationObserver:(id)arg1 forName:(id)arg2;
- (void)addProgressObserver:(id)arg1;
- (void)addNotificationObserver:(id)arg1 forName:(id)arg2;
- (id)init;

@end

