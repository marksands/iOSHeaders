//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDSyncStore-Protocol.h>

@class CKRecordZoneID, HDProfile, HDSharingPredicate, NSString, NSUUID;

@interface HDCloudSyncStore : NSObject <HDSyncStore>
{
    long long _syncProvenance;
    _Bool _canPush;
    NSUUID *_storeIdentifier;
    HDProfile *_profile;
    NSString *_sharingIdentifier;
    HDSharingPredicate *_sharingPredicate;
    CKRecordZoneID *_zoneID;
}

+ (id)syncStoreForProfile:(id)arg1 storeIdentifier:(id)arg2 syncCircleName:(id)arg3 ownerIdentifier:(id)arg4 sharingIdentifier:(id)arg5 predicate:(id)arg6 error:(id *)arg7;
+ (id)syncStoreForProfile:(id)arg1 storeIdentifier:(id)arg2 syncCircleName:(id)arg3 ownerIdentifier:(id)arg4 error:(id *)arg5;
+ (void)samplesDeletedInProfile:(id)arg1 byUser:(_Bool)arg2;
@property(retain, nonatomic) CKRecordZoneID *zoneID; // @synthesize zoneID=_zoneID;
@property(readonly, nonatomic) HDSharingPredicate *sharingPredicate; // @synthesize sharingPredicate=_sharingPredicate;
@property(readonly, copy, nonatomic) NSString *sharingIdentifier; // @synthesize sharingIdentifier=_sharingIdentifier;
@property(readonly, nonatomic) __weak HDProfile *profile; // @synthesize profile=_profile;
@property(readonly, nonatomic) _Bool canPush; // @synthesize canPush=_canPush;
@property(readonly, copy, nonatomic) NSUUID *storeIdentifier; // @synthesize storeIdentifier=_storeIdentifier;
- (void).cxx_destruct;
- (void)setExpectedSequenceNumber:(long long)arg1 forSyncEntityClass:(Class)arg2;
- (long long)expectedSequenceNumberForSyncEntityClass:(Class)arg1;
- (_Bool)shouldEnforceSequenceOrdering;
- (_Bool)supportsSpeculativeChangesForSyncEntityClass:(Class)arg1;
- (_Bool)enforceSyncEntityOrdering;
- (id)orderedSyncEntities;
- (id)syncEntityDependenciesForSyncEntity:(Class)arg1;
- (id)syncStoreDefaultSourceBundleIdentifier;
- (id)syncStoreIdentifier;
- (id)syncStoreTypeIdentifier;
- (long long)syncProvenance;
- (id)persistedStateWithError:(id *)arg1;
- (_Bool)persistState:(id)arg1 error:(id *)arg2;
- (id)getPersistedAnchorMapWithError:(id *)arg1;
- (_Bool)updatePersistedAnchorMap:(id)arg1 error:(id *)arg2;
- (id)receivedSyncAnchorMapWithError:(id *)arg1;
@property(readonly) int protocolVersion;
- (id)initWithProfile:(id)arg1 storeIdentifier:(id)arg2 syncCircleName:(id)arg3 ownerIdentifier:(id)arg4 sharingIdentifier:(id)arg5 predicate:(id)arg6 error:(id *)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

