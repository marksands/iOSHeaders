//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ICQDaemonOffer, NSLock, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>;

@interface ICQDaemonAlert : NSObject
{
    NSLock *_alertLock;
    long long _alertState;
    struct __CFUserNotification *_cfAlert;
    NSObject<OS_dispatch_semaphore> *_alertSema;
    NSObject<OS_dispatch_queue> *_alertQueue;
    _Bool _showOnlyInSpringboard;
    _Bool _handleActionsBeforeCallingCompletionHandler;
    ICQDaemonOffer *_daemonOffer;
}

+ (void)dismissAlertsWithNotificationID:(id)arg1;
+ (_Bool)shouldShowForDaemonOffer:(id)arg1;
@property(nonatomic) _Bool handleActionsBeforeCallingCompletionHandler; // @synthesize handleActionsBeforeCallingCompletionHandler=_handleActionsBeforeCallingCompletionHandler;
@property(nonatomic) _Bool showOnlyInSpringboard; // @synthesize showOnlyInSpringboard=_showOnlyInSpringboard;
@property(readonly, nonatomic) ICQDaemonOffer *daemonOffer; // @synthesize daemonOffer=_daemonOffer;
- (void).cxx_destruct;
- (void)dismissAlert;
- (_Bool)showAlertWithCompletion:(CDUnknownBlockType)arg1;
- (void)_handleLink:(id)arg1;
- (void)dealloc;
- (id)initWithDaemonOffer:(id)arg1;
- (id)init;

@end

