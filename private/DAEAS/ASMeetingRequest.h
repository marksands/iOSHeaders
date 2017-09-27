//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DAEAS/ASEvent.h>

#import "ASParsingAcceptingTopLevelLeaves.h"
#import "NSCoding.h"

@class ASEmailItem, NSArray, NSDate, NSMutableDictionary, NSNumber, NSString;

@interface ASMeetingRequest : ASEvent <ASParsingAcceptingTopLevelLeaves, NSCoding>
{
    int _meetingClassType;
    int _meetingMessageType;
    NSNumber *_instanceType;
    NSDate *_dateReceived;
    NSDate *_recurrenceId;
    NSString *_cachedParentFolderId;
    NSString *_cachedParentServerId;
    NSString *_sender;
    NSArray *_forwardees;
    NSMutableDictionary *_placeHolder;
    ASEmailItem *_parentEmailItem;
}

+ (id)asParseRules;
+ (_Bool)notifyOfUnknownTokens;
+ (_Bool)frontingBasicTypes;
+ (_Bool)parsingWithSubItems;
+ (_Bool)parsingLeafNode;
+ (_Bool)acceptsTopLevelLeaves;
@property(nonatomic) __weak ASEmailItem *parentEmailItem; // @synthesize parentEmailItem=_parentEmailItem;
@property(retain, nonatomic) NSMutableDictionary *placeHolder; // @synthesize placeHolder=_placeHolder;
@property(retain, nonatomic) NSArray *forwardees; // @synthesize forwardees=_forwardees;
@property(retain, nonatomic) NSString *sender; // @synthesize sender=_sender;
@property(retain, nonatomic) NSString *cachedParentServerId; // @synthesize cachedParentServerId=_cachedParentServerId;
@property(retain, nonatomic) NSString *cachedParentFolderId; // @synthesize cachedParentFolderId=_cachedParentFolderId;
@property(nonatomic) int meetingMessageType; // @synthesize meetingMessageType=_meetingMessageType;
@property(nonatomic) int meetingClassType; // @synthesize meetingClassType=_meetingClassType;
@property(retain, nonatomic) NSDate *recurrenceId; // @synthesize recurrenceId=_recurrenceId;
@property(retain, nonatomic) NSDate *dateReceived; // @synthesize dateReceived=_dateReceived;
@property(retain, nonatomic) NSNumber *instanceType; // @synthesize instanceType=_instanceType;
- (void).cxx_destruct;
- (id)unactionableICSRepresentationForAccount:(id)arg1;
- (_Bool)cachedOrganizerIsSelfWithAccount:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setDTStamp:(id)arg1;
- (void)setExceptionDate:(id)arg1;
- (id)exceptionDate;
- (void)setOrganizer:(id)arg1;
- (void)takeValuesFromParentEmailForAccount:(id)arg1;
- (void)_setReminderSecsBefore:(id)arg1;
- (id)init;
- (id)description;
- (void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6;
- (_Bool)writeInviteToCalDBCreateAsRejected:(_Bool)arg1 defaultCalendar:(void *)arg2 account:(id)arg3;
- (_Bool)shouldUseInMemoryAttendeesForAccount:(id)arg1 numExistingAttendees:(unsigned long long)arg2;
- (_Bool)saveForwardeesToCalendarWithExistingRecord:(void *)arg1;
- (_Bool)saveResponseCommentToCalendarWithExistingRecord:(void *)arg1;
- (void)saveEmailServerIdAndUpdateNotificationToRecord:(void *)arg1 account:(id)arg2;
- (_Bool)saveEmailServerIdToCalendarWithExistingRecord:(void *)arg1 intoCalendar:(void *)arg2 account:(id)arg3;
- (_Bool)saveToCalendarWithExistingRecord:(void *)arg1 intoCalendar:(void *)arg2 shouldMergeProperties:(_Bool)arg3 outMergeDidChooseLocalProperties:(_Bool *)arg4 account:(id)arg5;
- (_Bool)_bailIfNotNewestDataForAccount:(id)arg1;
- (void)postProcessApplicationData;
- (void)_determineSelfnessWithLocalEvent:(void *)arg1 forAccount:(id)arg2;
- (void)setObject:(id)arg1 forDCCPT:(int)arg2;
- (void)clearPlaceHolder;
- (void)applyPlaceHolder;

@end

