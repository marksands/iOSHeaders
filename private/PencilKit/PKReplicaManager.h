//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSMutableOrderedSet, NSObject<OS_dispatch_queue>;

@interface PKReplicaManager : NSObject
{
    NSObject<OS_dispatch_queue> *_uuidAccessQueue;
    NSMutableOrderedSet *_replicaUUIDs;
    NSMutableDictionary *_replicaEntries;
    _Bool _testMode;
}

+ (id)sharedReplicaManager;
@property(nonatomic) _Bool testMode; // @synthesize testMode=_testMode;
- (void).cxx_destruct;
- (void)resetAllReplicaUUIDs;
- (id)description;
- (void)_saveState;
- (void)_loadState;
- (void)returnReplicaForDrawing:(id)arg1;
- (void)updateVersionForDrawing:(id)arg1 persist:(_Bool)arg2;
- (id)checkoutReplicaUUIDForDrawing:(id)arg1;
- (void)dealloc;
- (id)init;

@end

