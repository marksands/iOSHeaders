//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSArray, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface CKDFetchRecordVersionsRequest : CKDURLRequest
{
    _Bool _shouldFetchAssetContent;
    _Bool _isDeleted;
    CDUnknownBlockType _recordVersionsFetchedBlock;
    NSArray *_recordIDs;
    NSArray *_desiredKeys;
    NSString *_minimumVersionETag;
    NSMutableDictionary *_recordIDByRequestID;
}

@property(nonatomic) _Bool isDeleted; // @synthesize isDeleted=_isDeleted;
@property(retain, nonatomic) NSMutableDictionary *recordIDByRequestID; // @synthesize recordIDByRequestID=_recordIDByRequestID;
@property(retain, nonatomic) NSString *minimumVersionETag; // @synthesize minimumVersionETag=_minimumVersionETag;
@property(retain, nonatomic) NSArray *desiredKeys; // @synthesize desiredKeys=_desiredKeys;
@property(retain, nonatomic) NSArray *recordIDs; // @synthesize recordIDs=_recordIDs;
@property(nonatomic) _Bool shouldFetchAssetContent; // @synthesize shouldFetchAssetContent=_shouldFetchAssetContent;
@property(copy, nonatomic) CDUnknownBlockType recordVersionsFetchedBlock; // @synthesize recordVersionsFetchedBlock=_recordVersionsFetchedBlock;
- (void).cxx_destruct;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)generateRequestOperations;
- (id)requestOperationClasses;
- (id)zoneIDsToLock;
- (int)operationType;
- (id)initWithRecordIDs:(id)arg1 desiredKeys:(id)arg2 minimumVersionETag:(id)arg3;

@end

