//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ENGroupID, NSString;

@interface IDSCloudKitKeyElectionStoreItem : NSObject
{
    NSString *_groupName;
    ENGroupID *_groupID;
}

@property(retain, nonatomic) ENGroupID *groupID; // @synthesize groupID=_groupID;
@property(retain, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
- (void).cxx_destruct;
- (id)description;

@end
