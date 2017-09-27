//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "APSConnectionDelegate.h"

@class APSConnection, NSString;

@interface RadioPushNotificationController : NSObject <APSConnectionDelegate>
{
    APSConnection *_connection;
    id <RadioPushNotificationControllerDelegate> _delegate;
    NSString *_environment;
    _Bool _notificationsEnabled;
    _Bool _pushEnabled;
}

@property(nonatomic) _Bool notificationsEnabled; // @synthesize notificationsEnabled=_notificationsEnabled;
@property(nonatomic) __weak id <RadioPushNotificationControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_portNameForEnvironmentName:(id)arg1;
- (void)_loadURLBagWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)connection:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

