//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSNotification.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface NSConcreteNotification : NSNotification
{
    NSString *name;
    id object;
    NSDictionary *userInfo;
    _Bool dyingObject;
}

+ (id)newTempNotificationWithName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
- (void)recycle;
- (void)dealloc;
- (id)initWithName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
- (id)userInfo;
- (id)object;
- (id)name;

@end

