//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLEngineStorage.h>

#import <CloudPhotoLibrary/CPLAbstractObject-Protocol.h>

@class CPLPlatformObject, CPLRejectedRecords, NSMutableArray, NSString;

@interface CPLEngineQuarantinedRecords : CPLEngineStorage <CPLAbstractObject>
{
    CPLRejectedRecords *_rejectedRecords;
    unsigned long long _rejectedCount;
    _Bool _rejectedRecordsHasChanges;
    CPLRejectedRecords *_newRejectedRecords;
    NSMutableArray *_quarantineMessages;
    unsigned long long _newRejectedCount;
}

- (void).cxx_destruct;
- (void)writeTransactionDidSucceed;
- (void)writeTransactionDidFail;
- (_Bool)resetWithError:(id *)arg1;
- (_Bool)resetRejectedRecordsWithError:(id *)arg1;
- (_Bool)bumpRejectedRecords:(id)arg1 error:(id *)arg2;
- (void)_sendQuarantineFeedbackWithRecordClass:(Class)arg1 reason:(id)arg2;
- (unsigned long long)countOfQuarantinedRecords;
- (_Bool)isRecordWithIdentifierQuarantined:(id)arg1;
- (_Bool)removeQuarantinedRecordsWithIdentifier:(id)arg1 notify:(_Bool)arg2 error:(id *)arg3;
- (_Bool)addQuarantinedRecordsWithIdentifier:(id)arg1 reason:(id)arg2 error:(id *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) CPLPlatformObject *platformObject;
@property(readonly) Class superclass;

@end

