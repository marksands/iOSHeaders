//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

@class HMFTimer, NSString, NSUUID;

@interface HMDSyncOperation : HMFObject
{
    _Bool _cloudConflict;
    NSUUID *_identifier;
    NSString *_zoneName;
    unsigned long long _operationType;
    unsigned long long _versionFlags;
    HMFTimer *_delayTimer;
    CDUnknownBlockType _operationBlock;
}

+ (id)cloudZoneFetchSyncOperation:(id)arg1 cloudConflict:(_Bool)arg2 block:(CDUnknownBlockType)arg3;
+ (id)cloudZonePushSyncOperation:(id)arg1 block:(CDUnknownBlockType)arg2;
+ (id)idsMergeSyncOperationWithVersionFlags:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
+ (id)cloudFetchSyncOperationWithCloudConflict:(_Bool)arg1 block:(CDUnknownBlockType)arg2;
+ (id)cloudVerifyAccountSyncOperationWithBlock:(CDUnknownBlockType)arg1;
+ (id)cloudForcePushSyncOperationWithVersionFlags:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
+ (id)cloudPushSyncOperationWithVersionFlags:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
@property(nonatomic, getter=isCloudConflict) _Bool cloudConflict; // @synthesize cloudConflict=_cloudConflict;
@property(copy, nonatomic) CDUnknownBlockType operationBlock; // @synthesize operationBlock=_operationBlock;
@property(retain, nonatomic) HMFTimer *delayTimer; // @synthesize delayTimer=_delayTimer;
@property(readonly, nonatomic) unsigned long long versionFlags; // @synthesize versionFlags=_versionFlags;
@property(readonly, nonatomic) unsigned long long operationType; // @synthesize operationType=_operationType;
@property(readonly, nonatomic) NSString *zoneName; // @synthesize zoneName=_zoneName;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)description;
- (id)initWithOperationType:(unsigned long long)arg1 zoneName:(id)arg2 versionFlags:(unsigned long long)arg3 syncBlock:(CDUnknownBlockType)arg4;

@end

