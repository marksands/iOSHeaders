//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudKit/CKDatabaseOperation.h>

@class NSArray, NSData, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet;

@interface CKModifyRecordsOperation : CKDatabaseOperation
{
    _Bool _atomic;
    _Bool _shouldReportRecordsInFlight;
    _Bool _shouldOnlySaveAssetContent;
    NSArray *_recordsToSave;
    NSArray *_recordIDsToDelete;
    long long _savePolicy;
    NSData *_clientChangeTokenData;
    CDUnknownBlockType _perRecordProgressBlock;
    CDUnknownBlockType _perRecordCompletionBlock;
    CDUnknownBlockType _modifyRecordsCompletionBlock;
    NSMutableArray *_savedRecords;
    NSMutableArray *_deletedRecordIDs;
    NSMutableDictionary *_recordsByRecordIDs;
    NSMutableDictionary *_recordErrors;
    NSMutableDictionary *_assetsByRecordIDAndRecordKey;
    NSMutableSet *_packagesToDestroy;
    NSDictionary *_recordIDsToDeleteToEtags;
    NSDictionary *_conflictLosersToResolveByRecordID;
    NSDictionary *_pluginFieldsForRecordDeletesByID;
    CDUnknownBlockType _recordsInFlightBlock;
}

@property(copy, nonatomic) CDUnknownBlockType recordsInFlightBlock; // @synthesize recordsInFlightBlock=_recordsInFlightBlock;
@property(copy, nonatomic) NSDictionary *pluginFieldsForRecordDeletesByID; // @synthesize pluginFieldsForRecordDeletesByID=_pluginFieldsForRecordDeletesByID;
@property(retain, nonatomic) NSDictionary *conflictLosersToResolveByRecordID; // @synthesize conflictLosersToResolveByRecordID=_conflictLosersToResolveByRecordID;
@property(copy, nonatomic) NSDictionary *recordIDsToDeleteToEtags; // @synthesize recordIDsToDeleteToEtags=_recordIDsToDeleteToEtags;
@property(nonatomic) _Bool shouldOnlySaveAssetContent; // @synthesize shouldOnlySaveAssetContent=_shouldOnlySaveAssetContent;
@property(retain, nonatomic) NSMutableSet *packagesToDestroy; // @synthesize packagesToDestroy=_packagesToDestroy;
@property(nonatomic) _Bool shouldReportRecordsInFlight; // @synthesize shouldReportRecordsInFlight=_shouldReportRecordsInFlight;
@property(retain, nonatomic) NSMutableDictionary *assetsByRecordIDAndRecordKey; // @synthesize assetsByRecordIDAndRecordKey=_assetsByRecordIDAndRecordKey;
@property(retain, nonatomic) NSMutableDictionary *recordErrors; // @synthesize recordErrors=_recordErrors;
@property(retain, nonatomic) NSMutableDictionary *recordsByRecordIDs; // @synthesize recordsByRecordIDs=_recordsByRecordIDs;
@property(retain, nonatomic) NSMutableArray *deletedRecordIDs; // @synthesize deletedRecordIDs=_deletedRecordIDs;
@property(retain, nonatomic) NSMutableArray *savedRecords; // @synthesize savedRecords=_savedRecords;
@property(copy, nonatomic) CDUnknownBlockType modifyRecordsCompletionBlock; // @synthesize modifyRecordsCompletionBlock=_modifyRecordsCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType perRecordCompletionBlock; // @synthesize perRecordCompletionBlock=_perRecordCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType perRecordProgressBlock; // @synthesize perRecordProgressBlock=_perRecordProgressBlock;
@property(nonatomic) _Bool atomic; // @synthesize atomic=_atomic;
@property(copy, nonatomic) NSData *clientChangeTokenData; // @synthesize clientChangeTokenData=_clientChangeTokenData;
@property(nonatomic) long long savePolicy; // @synthesize savePolicy=_savePolicy;
@property(copy, nonatomic) NSArray *recordIDsToDelete; // @synthesize recordIDsToDelete=_recordIDsToDelete;
@property(copy, nonatomic) NSArray *recordsToSave; // @synthesize recordsToSave=_recordsToSave;
- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (_Bool)claimPackagesInRecord:(id)arg1 error:(id *)arg2;
- (void)performCKOperation;
- (void)_trackAssetsToUpload;
- (_Bool)CKOperationShouldRun:(id *)arg1;
- (void)destroyPackagesInRecords:(id)arg1;
- (void)destroyPackages:(id)arg1;
- (_Bool)hasCKOperationCallbacksSet;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (id)activityCreate;
- (id)initWithRecordsToSave:(id)arg1 recordIDsToDelete:(id)arg2;
- (id)init;

@end

