//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface ASInvitationMailContext : NSObject
{
    _Bool _isMyInvite;
    int _emailResponse;
    NSString *_eventUID;
    NSString *_serverID;
    NSArray *_attendeeUUIDs;
}

@property(retain, nonatomic) NSArray *attendeeUUIDs; // @synthesize attendeeUUIDs=_attendeeUUIDs;
@property(nonatomic) int emailResponse; // @synthesize emailResponse=_emailResponse;
@property(nonatomic) _Bool isMyInvite; // @synthesize isMyInvite=_isMyInvite;
@property(retain, nonatomic) NSString *serverID; // @synthesize serverID=_serverID;
@property(retain, nonatomic) NSString *eventUID; // @synthesize eventUID=_eventUID;
- (void).cxx_destruct;

@end

