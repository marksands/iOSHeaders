//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDate;

__attribute__((visibility("hidden")))
@interface EKInviteeAlternativeTime : NSObject
{
    NSDate *_startDate;
    NSDate *_endDate;
    NSArray *_conflictedParticipants;
}

@property(retain, nonatomic) NSArray *conflictedParticipants; // @synthesize conflictedParticipants=_conflictedParticipants;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
- (void).cxx_destruct;
- (id)description;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 conflictedParticipants:(id)arg3;

@end

