//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UserNotificationsKit/NCNotificationContent.h>

@class NSDate, NSString, NSTimeZone, UIImage;

@interface NCMutableNotificationContent : NCNotificationContent
{
}

- (id)copyWithZone:(struct _NSZone *)arg1;
@property(retain, nonatomic) NSTimeZone *timeZone; // @dynamic timeZone;
@property(nonatomic, getter=isDateAllDay) _Bool dateAllDay; // @dynamic dateAllDay;
@property(retain, nonatomic) NSDate *date; // @dynamic date;
@property(retain, nonatomic) UIImage *attachmentImage; // @dynamic attachmentImage;
@property(retain, nonatomic) UIImage *icon; // @dynamic icon;
@property(copy, nonatomic) NSString *hiddenPreviewsBodyPlaceholder; // @dynamic hiddenPreviewsBodyPlaceholder;
@property(copy, nonatomic) NSString *message; // @dynamic message;
@property(copy, nonatomic) NSString *subtitle; // @dynamic subtitle;
@property(copy, nonatomic) NSString *title; // @dynamic title;
@property(copy, nonatomic) NSString *header; // @dynamic header;

@end

