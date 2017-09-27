//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

@class HMDBackingStoreCacheGroup, HMDBackingStoreCacheShareGroup, NSString, NSUUID;

@interface HMDBackingStoreCacheFetchRecordMappingResult : HMFObject
{
    HMDBackingStoreCacheShareGroup *_share;
    HMDBackingStoreCacheGroup *_group;
    NSString *_recordName;
    NSUUID *_uuid;
}

@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(readonly, nonatomic) NSString *recordName; // @synthesize recordName=_recordName;
@property(readonly, nonatomic) HMDBackingStoreCacheGroup *group; // @synthesize group=_group;
@property(readonly, nonatomic) HMDBackingStoreCacheShareGroup *share; // @synthesize share=_share;
- (void).cxx_destruct;
- (id)description;
- (id)initWithGroup:(id)arg1 share:(id)arg2 recordName:(id)arg3 uuid:(id)arg4;

@end

