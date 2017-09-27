//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NewsCore/FCOperation.h>

@class FCCKPrivateDatabase, NSArray, NSMutableArray, NSMutableDictionary;

@interface FCCKPrivateBatchedDeleteRecordsOperation : FCOperation
{
    _Bool _skipPreflight;
    _Bool _handleIdentityLoss;
    FCCKPrivateDatabase *_database;
    NSArray *_recordIDsToDelete;
    CDUnknownBlockType _deleteRecordsCompletionBlock;
    NSMutableArray *_remainingBatchesOfRecordIDsToDelete;
    NSMutableArray *_resultDeletedRecordIDs;
    NSMutableDictionary *_resultErrorsByRecordID;
}

@property(retain, nonatomic) NSMutableDictionary *resultErrorsByRecordID; // @synthesize resultErrorsByRecordID=_resultErrorsByRecordID;
@property(retain, nonatomic) NSMutableArray *resultDeletedRecordIDs; // @synthesize resultDeletedRecordIDs=_resultDeletedRecordIDs;
@property(retain, nonatomic) NSMutableArray *remainingBatchesOfRecordIDsToDelete; // @synthesize remainingBatchesOfRecordIDsToDelete=_remainingBatchesOfRecordIDsToDelete;
@property(copy, nonatomic) CDUnknownBlockType deleteRecordsCompletionBlock; // @synthesize deleteRecordsCompletionBlock=_deleteRecordsCompletionBlock;
@property(nonatomic) _Bool handleIdentityLoss; // @synthesize handleIdentityLoss=_handleIdentityLoss;
@property(nonatomic) _Bool skipPreflight; // @synthesize skipPreflight=_skipPreflight;
@property(copy, nonatomic) NSArray *recordIDsToDelete; // @synthesize recordIDsToDelete=_recordIDsToDelete;
@property(retain, nonatomic) FCCKPrivateDatabase *database; // @synthesize database=_database;
- (void).cxx_destruct;
- (void)_continueModifying;
- (void)operationWillFinishWithError:(id)arg1;
- (void)resetForRetry;
- (void)performOperation;
- (_Bool)validateOperation;
- (id)init;

@end

