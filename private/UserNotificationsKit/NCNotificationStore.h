//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface NCNotificationStore : NSObject
{
    NSMutableDictionary *_notificationSections;
}

@property(retain, nonatomic) NSMutableDictionary *notificationSections; // @synthesize notificationSections=_notificationSections;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long notificationsCount;
@property(readonly, nonatomic) unsigned long long sectionsCount;
- (id)coalescedNotificationForRequest:(id)arg1;
- (id)removeNotificationRequest:(id)arg1;
- (id)replaceNotificationRequest:(id)arg1;
- (id)addNotificationRequest:(id)arg1;
- (id)init;

@end

