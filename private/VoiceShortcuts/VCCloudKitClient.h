//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CKContainer, CKDatabase, CKRecordZoneID, CKServerChangeToken, VCRecordZoneInfo;

@interface VCCloudKitClient : NSObject
{
    id <VCCloudKitClientDelegate> _delegate;
    CKContainer *_container;
    CKDatabase *_database;
    VCRecordZoneInfo *_recordZoneInfo;
}

+ (id)recordsFromResolvingSyncConflicts:(id)arg1;
+ (struct NSOrderedSet *)changesFromReconcilingChanges:(struct NSOrderedSet *)arg1 withSavedRecords:(id)arg2 deletedRecordIDs:(id)arg3 partialFailures:(id)arg4;
@property(retain, nonatomic) VCRecordZoneInfo *recordZoneInfo; // @synthesize recordZoneInfo=_recordZoneInfo;
@property(readonly, nonatomic) CKDatabase *database; // @synthesize database=_database;
@property(readonly, nonatomic) CKContainer *container; // @synthesize container=_container;
@property(nonatomic) __weak id <VCCloudKitClientDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)waitToRecoverFromError:(id)arg1;
- (_Bool)shouldRetryInResponseToError:(id)arg1;
@property(retain, nonatomic) CKServerChangeToken *latestServerChangeToken;
- (_Bool)hasExistingRecordZoneChangeSubscription:(id *)arg1;
- (_Bool)subscribeToRecordZoneChangeNotifications:(id *)arg1;
- (struct NSOrderedSet *)pushChangesToCloudKit:(struct NSOrderedSet *)arg1 operationError:(id *)arg2;
- (struct NSOrderedSet *)changesSinceServerChangeToken:(id)arg1 error:(id *)arg2;
- (struct NSOrderedSet *)changesSinceLastFetch:(id *)arg1;
- (struct NSOrderedSet *)allChanges:(id *)arg1;
- (id)recordZoneInfoFromCreatingRecordZoneWithName:(id)arg1;
- (id)currentRecordZoneInfo;
- (_Bool)setupRecordZone:(id *)arg1;
- (_Bool)isCloudKitContainerAccessible:(id *)arg1;
@property(readonly, nonatomic) CKRecordZoneID *activeZoneID;
- (_Bool)authenticateClient:(id *)arg1;
- (id)init;

@end

