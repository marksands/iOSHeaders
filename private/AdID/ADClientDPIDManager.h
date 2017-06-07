//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CKContainer, CKRecordID, CKRecordZoneID, CKServerChangeToken, NSMutableArray, NSString;

@interface ADClientDPIDManager : NSObject
{
    _Bool _isTest;
    _Bool _updateInProgress;
    _Bool _sandboxEnvironment;
    CKServerChangeToken *_serverChangeToken;
    CKRecordZoneID *_zoneID;
    CKRecordID *_recordID;
    CKContainer *_privateContainer;
    NSString *_DPID;
    NSMutableArray *_operationsInProgress;
}

+ (id)DPIDOperationTypeToString:(unsigned long long)arg1;
+ (id)sharedInstance;
@property(nonatomic) _Bool sandboxEnvironment; // @synthesize sandboxEnvironment=_sandboxEnvironment;
@property(retain, nonatomic) NSMutableArray *operationsInProgress; // @synthesize operationsInProgress=_operationsInProgress;
@property(nonatomic) _Bool updateInProgress; // @synthesize updateInProgress=_updateInProgress;
@property(retain, nonatomic) NSString *DPID; // @synthesize DPID=_DPID;
@property(retain, nonatomic) CKContainer *privateContainer; // @synthesize privateContainer=_privateContainer;
@property(retain, nonatomic) CKRecordID *recordID; // @synthesize recordID=_recordID;
@property(retain, nonatomic) CKRecordZoneID *zoneID; // @synthesize zoneID=_zoneID;
@property(readonly, nonatomic) _Bool isTest; // @synthesize isTest=_isTest;
- (void).cxx_destruct;
- (void)syncDPIDWithiCloud:(CDUnknownBlockType)arg1;
- (void)saveDPIDtoiCloud:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeDPIDfromiCloud:(CDUnknownBlockType)arg1;
- (void)fetchDPIDChangesfromiCloud:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) CKServerChangeToken *serverChangeToken; // @synthesize serverChangeToken=_serverChangeToken;
- (void)fetchDPIDfromiCloud:(CDUnknownBlockType)arg1;
- (void)teardowniCloudSubscription:(CDUnknownBlockType)arg1;
- (void)setupiCloudSubscription:(CDUnknownBlockType)arg1;
- (void)retryIfNeeded:(CDUnknownBlockType)arg1;
- (_Bool)canGenerateDPID;
- (_Bool)shouldSyncDPID;
- (id)generateDPID;
- (void)setupLocalDPID;
- (void)finishOperation:(unsigned long long)arg1;
- (void)startOperation:(unsigned long long)arg1;
- (id)operationQueueLog;
- (void)setiCloudAccountSubscribed:(_Bool)arg1;
- (_Bool)iCloudAccountSubscribed;
- (void)writeDPIDtoKeychain;
- (_Bool)limitAdTrackingEnabled;
- (void)resetDPID:(CDUnknownBlockType)arg1;
- (void)handlePushNotification:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)reconcile:(CDUnknownBlockType)arg1;
- (id)init;

@end

