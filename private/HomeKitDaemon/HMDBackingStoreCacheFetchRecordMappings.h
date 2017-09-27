//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeKitDaemon/HMDBackingStoreOperation.h>

@class HMDBackingStoreCacheGroup, HMDBackingStoreCacheShareGroup;

@interface HMDBackingStoreCacheFetchRecordMappings : HMDBackingStoreOperation
{
    HMDBackingStoreCacheGroup *_group;
    HMDBackingStoreCacheShareGroup *_share;
    CDUnknownBlockType _fetchResult;
}

@property(copy, nonatomic) CDUnknownBlockType fetchResult; // @synthesize fetchResult=_fetchResult;
@property(retain, nonatomic) HMDBackingStoreCacheShareGroup *share; // @synthesize share=_share;
@property(retain, nonatomic) HMDBackingStoreCacheGroup *group; // @synthesize group=_group;
- (void).cxx_destruct;
- (id)mainReturningError;
- (id)initWithGroup:(id)arg1 fetchResult:(CDUnknownBlockType)arg2;
- (id)initWithShareGroup:(id)arg1 fetchResult:(CDUnknownBlockType)arg2;

@end

