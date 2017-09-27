//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface FKFriendGroup : NSObject
{
    NSMutableArray *_friendsManager;
    unsigned long long _groupSize;
    NSString *_title;
    unsigned long long _selectedPosition;
    id <FKFriendGroupDelegate> _delegate;
}

@property(nonatomic) __weak id <FKFriendGroupDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long selectedPosition; // @synthesize selectedPosition=_selectedPosition;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)displayNameForGroupWithSeparator:(id)arg1;
- (long long)_firstEmptyPosition;
- (id)friends;
- (void)setFriends:(id)arg1;
- (void)removeFriendAtPosition:(unsigned long long)arg1;
- (void)setFriend:(id)arg1 atPosition:(unsigned long long)arg2 error:(unsigned int *)arg3;
- (void)addFriend:(id)arg1 error:(unsigned int *)arg2;
- (_Bool)isFull;
- (unsigned long long)count;
- (_Bool)containsFriend:(id)arg1;
- (unsigned long long)positionOfFriend:(id)arg1;
- (id)friendAtPosition:(unsigned long long)arg1;
- (id)initWithDelegate:(id)arg1 groupSize:(unsigned long long)arg2;
- (id)initWithGroupSize:(unsigned long long)arg1;
- (id)init;

@end

