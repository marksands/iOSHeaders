//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TULogging : NSObject
{
}

+ (_Bool)sendDirectoryToCrashReporter:(id)arg1 error:(id *)arg2;
+ (void)unregisterForShouldLogChangedNotification;
+ (void)registerForShouldLogChangedNotification;
+ (void)disablePhoneLogging;
+ (void)enablePhoneLogging;

@end

