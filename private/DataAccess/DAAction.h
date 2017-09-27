//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@interface DAAction : NSObject <NSCoding>
{
    int _changeId;
    unsigned long long _itemChangeType;
    id _serverId;
    id _instanceId;
    id _changedItem;
    id _forwardedAttendees;
    id _forwardedAttendeeUUIDs;
}

@property(retain, nonatomic) id forwardedAttendeeUUIDs; // @synthesize forwardedAttendeeUUIDs=_forwardedAttendeeUUIDs;
@property(retain, nonatomic) id forwardedAttendees; // @synthesize forwardedAttendees=_forwardedAttendees;
@property(nonatomic) int changeId; // @synthesize changeId=_changeId;
@property(retain, nonatomic, setter=_setChangedItem:) id changedItem; // @synthesize changedItem=_changedItem;
@property(retain, nonatomic) id instanceId; // @synthesize instanceId=_instanceId;
@property(retain, nonatomic) id serverId; // @synthesize serverId=_serverId;
@property(nonatomic) unsigned long long itemChangeType; // @synthesize itemChangeType=_itemChangeType;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)stringForItemChangeType:(unsigned long long)arg1;
- (id)initWithItemChangeType:(unsigned long long)arg1 changedItem:(id)arg2 serverId:(id)arg3 instanceId:(id)arg4;
- (id)initWithItemChangeType:(unsigned long long)arg1 changedItem:(id)arg2 serverId:(id)arg3;
- (struct ASEvent *)event;
- (id)deletedEventID;
- (struct ASContact *)contact;
- (id)deletedContactID;
- (id)message;
- (struct ASToDo *)toDo;
- (id)deletedToDoID;
- (struct ASNote *)note;
- (id)deletedNoteID;

@end

