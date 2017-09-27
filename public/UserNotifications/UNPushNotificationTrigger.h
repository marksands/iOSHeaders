//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UserNotifications/UNNotificationTrigger.h>

@interface UNPushNotificationTrigger : UNNotificationTrigger
{
    _Bool _isContentAvailable;
    _Bool _isMutableContent;
}

+ (_Bool)supportsSecureCoding;
+ (id)triggerWithContentAvailable:(_Bool)arg1 mutableContent:(_Bool)arg2;
@property(readonly, nonatomic) _Bool isMutableContent; // @synthesize isMutableContent=_isMutableContent;
@property(readonly, nonatomic) _Bool isContentAvailable; // @synthesize isContentAvailable=_isContentAvailable;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)_initWithContentAvailable:(_Bool)arg1 mutableContent:(_Bool)arg2;

@end

