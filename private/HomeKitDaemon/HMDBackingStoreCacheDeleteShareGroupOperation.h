//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/HMDBackingStoreOperation.h>

@class HMDBackingStoreCacheShareGroup;

@interface HMDBackingStoreCacheDeleteShareGroupOperation : HMDBackingStoreOperation
{
    HMDBackingStoreCacheShareGroup *_record;
}

@property(retain, nonatomic) HMDBackingStoreCacheShareGroup *record; // @synthesize record=_record;
- (void).cxx_destruct;
- (id)mainReturningError;
- (id)initWithShareGroup:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;

@end

