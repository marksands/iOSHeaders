//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HDProfile, NSObject<OS_dispatch_queue>;

@interface HDCloudSyncManager : NSObject
{
    _Bool _shouldResync;
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    long long _inProgressSyncCount;
}

@property(nonatomic) long long inProgressSyncCount; // @synthesize inProgressSyncCount=_inProgressSyncCount;
@property(nonatomic) _Bool shouldResync; // @synthesize shouldResync=_shouldResync;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak HDProfile *profile; // @synthesize profile=_profile;
- (void).cxx_destruct;
- (id)_getPrimaryLastPushForwardProgressDate;
- (void)_addFinalProgressUpdateWithTaskTree:(id)arg1 progress:(id)arg2;
- (void)_cloudSyncContainersForProfile:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_containerIdentifiersForCurrentAccountWithCompletion:(CDUnknownBlockType)arg1;
- (id)_containerWithIdentifier:(id)arg1 error:(id *)arg2;
- (void)queue_cloudSyncContainersWithCompletion:(CDUnknownBlockType)arg1;
- (id)disableAndDeleteAllSyncDataWithTaskTree:(id)arg1;
- (void)disableSyncLocallyWithTaskTree:(id)arg1;
- (void)fetchSyncStatusWithCompletion:(CDUnknownBlockType)arg1;
- (id)fetchDescriptionWithOptions:(unsigned long long)arg1 reason:(long long)arg2 taskTree:(id)arg3 resultHandler:(CDUnknownBlockType)arg4;
- (id)resetWithOptions:(unsigned long long)arg1 reason:(long long)arg2 taskTree:(id)arg3;
- (id)syncWithOptions:(unsigned long long)arg1 reason:(long long)arg2 taskTree:(id)arg3 permitResync:(_Bool)arg4;
- (id)syncWithOptions:(unsigned long long)arg1 reason:(long long)arg2 taskTree:(id)arg3;
- (id)syncWithOptions:(unsigned long long)arg1 reason:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)requestImmediateResync;
- (id)initWithProfile:(id)arg1;

@end
