//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MobileTimer/NAEquatable-Protocol.h>
#import <MobileTimer/NSCopying-Protocol.h>

@class NSArray, NSDate, NSString;

@protocol MTScheduleable <NAEquatable, NSCopying>
- (NSArray *)upcomingTriggersAfterDate:(NSDate *)arg1;
- (_Bool)shouldBeScheduled;
- (NSString *)identifier;
@end

