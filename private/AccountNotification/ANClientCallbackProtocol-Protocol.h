//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ANAccountNotification;

@protocol ANClientCallbackProtocol <NSObject>
- (void)notificationWasCleared:(ANAccountNotification *)arg1;
- (void)notificationWasDismissed:(ANAccountNotification *)arg1;
- (void)notificationWasActivated:(ANAccountNotification *)arg1;
@end

