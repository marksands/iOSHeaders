//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class NSArray, NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CKDModifyRecordZonesOperation : CKDDatabaseOperation
{
    _Bool _allowDefaultZoneSave;
    _Bool _markZonesAsUserPurged;
    _Bool _dontFetchFromServer;
    _Bool _didSynchronizeUserKeyRegistry;
    int _numZoneSaveAttempts;
    CDUnknownBlockType _saveCompletionBlock;
    CDUnknownBlockType _deleteCompletionBlock;
    NSMutableArray *_recordZonesToSave;
    NSArray *_recordZoneIDsToDelete;
    NSMutableDictionary *_recordZonesByZoneID;
    NSMutableDictionary *_retryableErrorsByZoneID;
    long long _maxZoneSaveAttempts;
}

+ (long long)isPredominatelyDownload;
@property(nonatomic) _Bool didSynchronizeUserKeyRegistry; // @synthesize didSynchronizeUserKeyRegistry=_didSynchronizeUserKeyRegistry;
@property(nonatomic) _Bool dontFetchFromServer; // @synthesize dontFetchFromServer=_dontFetchFromServer;
@property(nonatomic) long long maxZoneSaveAttempts; // @synthesize maxZoneSaveAttempts=_maxZoneSaveAttempts;
@property(nonatomic) int numZoneSaveAttempts; // @synthesize numZoneSaveAttempts=_numZoneSaveAttempts;
@property(nonatomic) _Bool markZonesAsUserPurged; // @synthesize markZonesAsUserPurged=_markZonesAsUserPurged;
@property(nonatomic) _Bool allowDefaultZoneSave; // @synthesize allowDefaultZoneSave=_allowDefaultZoneSave;
@property(retain, nonatomic) NSMutableDictionary *retryableErrorsByZoneID; // @synthesize retryableErrorsByZoneID=_retryableErrorsByZoneID;
@property(retain, nonatomic) NSMutableDictionary *recordZonesByZoneID; // @synthesize recordZonesByZoneID=_recordZonesByZoneID;
@property(retain, nonatomic) NSArray *recordZoneIDsToDelete; // @synthesize recordZoneIDsToDelete=_recordZoneIDsToDelete;
@property(retain, nonatomic) NSMutableArray *recordZonesToSave; // @synthesize recordZonesToSave=_recordZonesToSave;
@property(copy, nonatomic) CDUnknownBlockType deleteCompletionBlock; // @synthesize deleteCompletionBlock=_deleteCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType saveCompletionBlock; // @synthesize saveCompletionBlock=_saveCompletionBlock;
- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)main;
- (void)_checkAndPrepareZones;
- (void)_fetchPCSDataForZonesFromServer:(_Bool)arg1;
- (void)_fetchPCSDataForZone:(id)arg1 fromServer:(_Bool)arg2;
- (id)_createNewPCSForZone:(id)arg1;
- (_Bool)_saveZonesToServer;
- (void)_handleRecordZoneDeleted:(id)arg1 responseCode:(id)arg2;
- (void)_handleRecordZoneSaved:(id)arg1 responseCode:(id)arg2 serverCapabilities:(unsigned long long)arg3;
- (void)_sendErrorForFailedZones;
- (id)nameForState:(unsigned long long)arg1;
- (id)activityCreate;
- (_Bool)makeStateTransition;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;

@end

