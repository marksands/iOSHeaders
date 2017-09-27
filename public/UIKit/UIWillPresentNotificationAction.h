//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BSAction.h"

@class NSObject<OS_dispatch_semaphore>, UNNotification;

@interface UIWillPresentNotificationAction : BSAction
{
    NSObject<OS_dispatch_semaphore> *_decodeSemaphore;
    UNNotification *_cachedNotification;
    _Bool _cachedDeliverable;
}

- (void).cxx_destruct;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (long long)UIActionType;
- (void)_blockingWaitForDecodeSemaphore;
- (id)_trigger;
@property(readonly, nonatomic) _Bool isRemote;
@property(readonly, nonatomic) _Bool isLocal;
@property(readonly, nonatomic) _Bool isDeliverable;
@property(readonly, retain, nonatomic) UNNotification *notification;
- (id)initWithNotification:(id)arg1 deliverable:(_Bool)arg2 timeout:(double)arg3 withHandler:(CDUnknownBlockType)arg4;
- (id)initWithNotification:(id)arg1 timeout:(double)arg2 withHandler:(CDUnknownBlockType)arg3;

@end

