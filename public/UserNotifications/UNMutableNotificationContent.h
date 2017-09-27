//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UserNotifications/UNNotificationContent.h>

@class NSArray, NSDictionary, NSNumber, NSString, UNNotificationSound;

@interface UNMutableNotificationContent : UNNotificationContent
{
}

- (id)copyWithZone:(struct _NSZone *)arg1;
@property(copy, nonatomic) NSDictionary *userInfo; // @dynamic userInfo;
@property(copy, nonatomic) NSString *title; // @dynamic title;
@property(copy, nonatomic) NSString *threadIdentifier; // @dynamic threadIdentifier;
@property(copy, nonatomic) NSString *subtitle; // @dynamic subtitle;
@property(copy, nonatomic) UNNotificationSound *sound; // @dynamic sound;
@property(nonatomic, getter=isSnoozeable) _Bool snoozeable; // @dynamic snoozeable;
@property(nonatomic) _Bool shouldPauseMedia; // @dynamic shouldPauseMedia;
@property(nonatomic) _Bool shouldLockDevice; // @dynamic shouldLockDevice;
@property(nonatomic) _Bool shouldAlwaysAlertWhileAppIsForeground; // @dynamic shouldAlwaysAlertWhileAppIsForeground;
@property(nonatomic) _Bool shouldAddToNotificationsList; // @dynamic shouldAddToNotificationsList;
@property(copy, nonatomic) NSArray *peopleIdentifiers; // @dynamic peopleIdentifiers;
@property(copy, nonatomic) NSString *launchImageName; // @dynamic launchImageName;
@property(nonatomic) _Bool hasDefaultAction; // @dynamic hasDefaultAction;
@property(nonatomic, getter=isFromSnooze) _Bool fromSnooze; // @dynamic fromSnooze;
@property(copy, nonatomic) NSString *defaultActionTitle; // @dynamic defaultActionTitle;
@property(copy, nonatomic) NSString *darwinSnoozedNotificationName; // @dynamic darwinSnoozedNotificationName;
@property(copy, nonatomic) NSString *darwinNotificationName; // @dynamic darwinNotificationName;
@property(copy, nonatomic) NSString *categoryIdentifier; // @dynamic categoryIdentifier;
@property(copy, nonatomic) NSString *body; // @dynamic body;
@property(copy, nonatomic) NSNumber *badge; // @dynamic badge;
@property(copy, nonatomic) NSArray *attachments; // @dynamic attachments;

@end

