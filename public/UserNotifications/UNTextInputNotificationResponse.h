//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UserNotifications/UNNotificationResponse.h>

@class NSString;

@interface UNTextInputNotificationResponse : UNNotificationResponse
{
    NSString *_userText;
}

+ (_Bool)supportsSecureCoding;
+ (id)responseWithNotification:(id)arg1 actionIdentifier:(id)arg2 actionOptions:(unsigned long long)arg3 userText:(id)arg4;
+ (id)responseWithNotification:(id)arg1 actionIdentifier:(id)arg2 userText:(id)arg3;
+ (id)responseWithNotification:(id)arg1 actionIdentifier:(id)arg2 actionOptions:(unsigned long long)arg3;
@property(readonly, copy, nonatomic) NSString *userText; // @synthesize userText=_userText;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithNotification:(id)arg1 actionIdentifier:(id)arg2 userText:(id)arg3;
- (id)_initWithNotification:(id)arg1 actionIdentifier:(id)arg2 actionOptions:(unsigned long long)arg3 userText:(id)arg4;

@end

