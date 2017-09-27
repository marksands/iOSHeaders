//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EKCalendarEventInvitationNotificationAttendee, NSArray;

@interface CalMessageStrings : NSObject
{
    _Bool _timeProposals;
    NSArray *_titleStrings;
    NSArray *_bodyStrings;
    long long _comments;
    EKCalendarEventInvitationNotificationAttendee *_importantAttendee;
}

@property(readonly, nonatomic) EKCalendarEventInvitationNotificationAttendee *importantAttendee; // @synthesize importantAttendee=_importantAttendee;
@property(readonly, nonatomic) _Bool timeProposals; // @synthesize timeProposals=_timeProposals;
@property(readonly, nonatomic) long long comments; // @synthesize comments=_comments;
@property(readonly, nonatomic) NSArray *bodyStrings; // @synthesize bodyStrings=_bodyStrings;
@property(readonly, nonatomic) NSArray *titleStrings; // @synthesize titleStrings=_titleStrings;
- (void).cxx_destruct;
- (id)initWithTitles:(id)arg1 bodyStrings:(id)arg2 comments:(long long)arg3 timeProposals:(_Bool)arg4 importantAttendee:(id)arg5;

@end

