//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, PDScheduledActivityCriteria;

@protocol PDScheduledActivityClient <NSObject>
- (void)performScheduledActivityWithIdentifier:(NSString *)arg1 activityCriteria:(PDScheduledActivityCriteria *)arg2 activityContext:(id <NSCoding>)arg3;
@end
